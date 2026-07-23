/*
 * XREFs of RtlDelete @ 0x1400C3774
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1400C256C (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C3054 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400C31AC (FsRtlFastUnlockSingleShared.c)
 *     RtlDeleteElementGenericTable @ 0x1400C35A4 (RtlDeleteElementGenericTable.c)
 *     RtlRemoveUnicodePrefix @ 0x1404C836C (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x140688084 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x1400C3ABC (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x1400C3BDC (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rcx
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rdx
  PRTL_SPLAY_LINKS v6; // rax
  _RTL_SPLAY_LINKS **p_RightChild; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v6 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v6, Links);
  }
  result = Links->LeftChild;
  if ( result )
    goto LABEL_7;
  if ( Links->RightChild )
  {
    result = Links->RightChild;
LABEL_7:
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
      return result;
    }
    p_LeftChild = &Parent->LeftChild;
    if ( Parent->LeftChild != Links )
      p_LeftChild = &Parent->RightChild;
    *p_LeftChild = result;
    v3 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v3);
  }
  v3 = Links->Parent;
  if ( Links->Parent != Links )
  {
    p_RightChild = &v3->LeftChild;
    if ( v3->LeftChild != Links )
      p_RightChild = &v3->RightChild;
    *p_RightChild = 0LL;
    return RtlSplay(v3);
  }
  return result;
}
