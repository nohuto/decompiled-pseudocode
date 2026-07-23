/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1400C2390
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1400C2520 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1400C1CEC (RealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rax
  void *v4; // r8
  _RTL_BALANCED_LINKS **v5; // r9
  _RTL_BALANCED_LINKS *i; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( !*RestartKey )
  {
    RightChild = Table->BalancedRoot.RightChild;
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    *RestartKey = RightChild;
    return &RightChild[1];
  }
  RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*RestartKey);
  if ( RightChild )
  {
    *v5 = RightChild;
    return &RightChild[1];
  }
  return v4;
}
