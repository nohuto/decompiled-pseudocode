/*
 * XREFs of RtlDelete @ 0x1800637C0
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180063270 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x180090038 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800DF5E0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x180063910 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x180063A40 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v2; // rax
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
  _RTL_SPLAY_LINKS *v6; // rcx
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  _RTL_SPLAY_LINKS *v8; // rcx

  if ( Links->LeftChild && Links->RightChild )
  {
    v2 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v2, Links);
  }
  result = Links->LeftChild;
  if ( !result )
  {
    if ( !Links->RightChild )
    {
      Parent = Links->Parent;
      if ( Links->Parent == Links )
        return 0LL;
      p_LeftChild = &Parent->LeftChild;
      if ( Parent->LeftChild != Links )
        p_LeftChild = &Parent->RightChild;
      *p_LeftChild = 0LL;
      return RtlSplay(Parent);
    }
    result = Links->RightChild;
  }
  v6 = Links->Parent;
  if ( Links->Parent == Links )
  {
    result->Parent = result;
  }
  else
  {
    p_RightChild = &v6->LeftChild;
    if ( v6->LeftChild != Links )
      p_RightChild = &v6->RightChild;
    *p_RightChild = result;
    v8 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v8);
  }
  return result;
}
