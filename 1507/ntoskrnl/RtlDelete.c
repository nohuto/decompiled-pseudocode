/*
 * XREFs of RtlDelete @ 0x140105918
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1401050D8 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1401052C0 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1401056B0 (FsRtlRemoveNodeFromTunnel.c)
 *     RtlDeleteElementGenericTable @ 0x14010589C (RtlDeleteElementGenericTable.c)
 *     RtlRemoveUnicodePrefix @ 0x140520B78 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1406CBA60 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x140105E38 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x140105F5C (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rcx
  PRTL_SPLAY_LINKS v4; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rdx
  _RTL_SPLAY_LINKS **p_RightChild; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v4 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v4, Links);
  }
  result = Links->LeftChild;
  if ( result )
    goto LABEL_9;
  if ( Links->RightChild )
  {
    result = Links->RightChild;
LABEL_9:
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
