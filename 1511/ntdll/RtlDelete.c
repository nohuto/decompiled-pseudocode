/*
 * XREFs of RtlDelete @ 0x18006D950
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006D420 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x18008D098 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800D6BD0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x18006DAA0 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006DBD0 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v2; // rax
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rdx
  _RTL_SPLAY_LINKS *v6; // rcx
  _RTL_SPLAY_LINKS **p_RightChild; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v2 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v2, Links);
  }
  result = Links->LeftChild;
  if ( result )
    goto LABEL_5;
  if ( Links->RightChild )
  {
    result = Links->RightChild;
LABEL_5:
    Parent = Links->Parent;
    if ( Links->Parent != Links )
    {
      p_LeftChild = &Parent->LeftChild;
      if ( Parent->LeftChild != Links )
        p_LeftChild = &Parent->RightChild;
      *p_LeftChild = result;
      v6 = Links->Parent;
      result->Parent = Links->Parent;
      return RtlSplay(v6);
    }
    result->Parent = result;
    return result;
  }
  v6 = Links->Parent;
  if ( Links->Parent != Links )
  {
    p_RightChild = &v6->LeftChild;
    if ( v6->LeftChild != Links )
      p_RightChild = &v6->RightChild;
    *p_RightChild = 0LL;
    return RtlSplay(v6);
  }
  return 0LL;
}
