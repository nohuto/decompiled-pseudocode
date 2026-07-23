/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x18006BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  void *v2; // r8
  _RTL_BALANCED_LINKS *RestartKey; // rdx
  _RTL_BALANCED_LINKS *RightChild; // rcx
  _RTL_BALANCED_LINKS *j; // rax
  _RTL_BALANCED_LINKS *k; // rax
  _RTL_BALANCED_LINKS *i; // rax

  v2 = 0LL;
  if ( Restart )
    Table->RestartKey = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    RestartKey = Table->RestartKey;
    if ( !RestartKey )
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( i = RightChild->LeftChild; i; i = i->LeftChild )
        RightChild = i;
LABEL_10:
      Table->RestartKey = RightChild;
      return &RightChild[1];
    }
    RightChild = RestartKey->RightChild;
    if ( RightChild )
    {
      for ( j = RightChild->LeftChild; j; j = j->LeftChild )
        RightChild = j;
    }
    else
    {
      for ( k = RestartKey->Parent; k->RightChild == RestartKey; k = k->Parent )
        RestartKey = k;
      RightChild = 0LL;
      if ( RestartKey->Parent->LeftChild == RestartKey )
        RightChild = RestartKey->Parent;
    }
    if ( RightChild )
      goto LABEL_10;
  }
  return v2;
}
