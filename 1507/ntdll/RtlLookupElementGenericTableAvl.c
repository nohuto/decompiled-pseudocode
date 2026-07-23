/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x180060F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

PVOID __cdecl RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rbp
  _RTL_BALANCED_LINKS *RightChild; // rsi
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax

  v2 = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    RightChild = Table->BalancedRoot.RightChild;
    do
    {
      v6 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
      if ( v6 )
      {
        if ( v6 != GenericGreaterThan )
          return &RightChild[1];
        RightChild = RightChild->RightChild;
      }
      else
      {
        RightChild = RightChild->LeftChild;
      }
    }
    while ( RightChild );
  }
  return v2;
}
