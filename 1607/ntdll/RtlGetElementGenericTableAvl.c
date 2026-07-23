/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1800ECFE0
 * Callers:
 *     <none>
 * Callees:
 *     RealPredecessor @ 0x18007448C (RealPredecessor.c)
 *     RealSuccessor @ 0x1800744D0 (RealSuccessor.c)
 */

PVOID __cdecl RtlGetElementGenericTableAvl(PRTL_AVL_TABLE Table, ULONG I)
{
  unsigned int NumberGenericTableElements; // r10d
  ULONG v3; // r8d
  unsigned int WhichOrderedElement; // edx
  PRTL_AVL_TABLE v5; // r9
  _QWORD *OrderedPointer; // rcx
  _QWORD *i; // rax
  int v9; // edx
  _QWORD *k; // rax
  int v11; // r8d
  int v12; // r10d
  int v13; // r11d
  _QWORD *j; // rax
  int v15; // r10d

  NumberGenericTableElements = Table->NumberGenericTableElements;
  v3 = I;
  WhichOrderedElement = Table->WhichOrderedElement;
  v5 = Table;
  OrderedPointer = Table->OrderedPointer;
  if ( v3 == -1 || v3 + 1 > NumberGenericTableElements )
    return 0LL;
  if ( !OrderedPointer )
  {
    OrderedPointer = &v5->BalancedRoot.RightChild->Parent;
    for ( i = (_QWORD *)OrderedPointer[1]; i; i = (_QWORD *)i[1] )
      OrderedPointer = i;
    WhichOrderedElement = 0;
    v5->OrderedPointer = OrderedPointer;
    v5->WhichOrderedElement = 0;
  }
  if ( WhichOrderedElement != v3 )
  {
    if ( WhichOrderedElement <= v3 )
    {
      v12 = NumberGenericTableElements - v3 - 1;
      if ( v3 - WhichOrderedElement > v12 + 1 )
      {
        OrderedPointer = &v5->BalancedRoot.RightChild->Parent;
        for ( j = (_QWORD *)OrderedPointer[2]; j; j = (_QWORD *)j[2] )
          OrderedPointer = j;
        if ( v12 )
        {
          do
            OrderedPointer = RealPredecessor(OrderedPointer);
          while ( v15 != 1 );
        }
      }
      else if ( v3 != WhichOrderedElement )
      {
        do
          OrderedPointer = RealSuccessor(OrderedPointer);
        while ( v13 != 1 );
      }
    }
    else if ( v3 < WhichOrderedElement >> 1 )
    {
      OrderedPointer = &v5->BalancedRoot.RightChild->Parent;
      for ( k = (_QWORD *)OrderedPointer[1]; k; k = (_QWORD *)k[1] )
        OrderedPointer = k;
      for ( ; v3; v3 = v11 - 1 )
        OrderedPointer = RealSuccessor(OrderedPointer);
    }
    else if ( WhichOrderedElement != v3 )
    {
      do
        OrderedPointer = RealPredecessor(OrderedPointer);
      while ( v9 != 1 );
    }
    v5->OrderedPointer = OrderedPointer;
    v5->WhichOrderedElement = v3;
  }
  return OrderedPointer + 4;
}
