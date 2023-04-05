#include <iostream> 
using namespace std;
class NumberList2
{
protected:
    // Declare a class for the list node
    class ListNode
    {
    public:
       double value;
       ListNode *next;
       ListNode(double value1, ListNode *next1 = nullptr)
       {
          value = value1;
          next = next1;
       }
    };
    ListNode *head;                  // List head pointer
public:
    NumberList2() { head = nullptr; }   // Constructor
    ~NumberList2();                  // Destructor
    void add(double value) { head = add(head, value);}
    void remove(double value) {head = remove(head, value);}
    void displayList() const {displayList(head);}
    void exists(double value) { exists(head, value); }
    int size() const {return size(head);}
private:
    // Recursive implementations
    ListNode *add(ListNode *aList, double value);
    ListNode *remove(ListNode *aList, double value);
    void displayList(ListNode *aList) const;
    //ListNode* sortList(ListNode* aList);
    void exists(ListNode* aList,double value);
    int size(ListNode *aList) const;
};
