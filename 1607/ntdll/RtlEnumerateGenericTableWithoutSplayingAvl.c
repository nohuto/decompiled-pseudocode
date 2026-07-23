/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180073E70
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180073E50 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1800744D0 (RealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *i; // rcx
  void *v4; // r8
  _RTL_BALANCED_LINKS **v6; // r9

  if ( Table->NumberGenericTableElements )
  {
    if ( *RestartKey )
    {
      RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*RestartKey);
      if ( !RightChild )
        return v4;
      *v6 = RightChild;
    }
    else
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( i = RightChild->LeftChild; i; i = i->LeftChild )
        RightChild = i;
      *RestartKey = RightChild;
    }
    return &RightChild[1];
  }
  return 0LL;
}
