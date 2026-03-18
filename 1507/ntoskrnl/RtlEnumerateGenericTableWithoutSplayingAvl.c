/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x140019EE0
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x140019F34 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x14001961C (RealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rax
  void *v3; // r8
  _RTL_BALANCED_LINKS **v4; // r9
  _RTL_BALANCED_LINKS *i; // rcx

  if ( Table->NumberGenericTableElements )
  {
    if ( *RestartKey )
    {
      RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*RestartKey);
      if ( !RightChild )
        return v3;
      *v4 = RightChild;
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
