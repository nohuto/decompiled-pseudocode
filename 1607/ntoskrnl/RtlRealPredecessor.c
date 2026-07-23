/*
 * XREFs of RtlRealPredecessor @ 0x140213AFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealPredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS j; // rcx

  v1 = Links;
  v2 = 0LL;
  LeftChild = Links->LeftChild;
  if ( LeftChild )
  {
    for ( i = LeftChild->RightChild; i; i = i->RightChild )
      LeftChild = i;
    return LeftChild;
  }
  else
  {
    for ( j = v1->Parent; j->LeftChild == v1; j = j->Parent )
      v1 = j;
    if ( v1->Parent->RightChild == v1 )
      return v1->Parent;
    return v2;
  }
}
