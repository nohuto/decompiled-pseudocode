/*
 * XREFs of RtlDelete @ 0x1400CE42C
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1400CD494 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400CDD14 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400CDE70 (FsRtlFastUnlockSingleShared.c)
 *     RtlDeleteElementGenericTable @ 0x1400CE25C (RtlDeleteElementGenericTable.c)
 *     RtlRemoveUnicodePrefix @ 0x140491F68 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1406489DC (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x1400CE770 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x1400CE898 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
  _RTL_SPLAY_LINKS *v5; // rcx
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  _RTL_SPLAY_LINKS *v7; // rcx
  PRTL_SPLAY_LINKS v8; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v8 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v8, Links);
  }
  result = Links->LeftChild;
  if ( !result )
  {
    if ( !Links->RightChild )
    {
      Parent = Links->Parent;
      if ( Links->Parent != Links )
      {
        p_LeftChild = &Parent->LeftChild;
        if ( Parent->LeftChild != Links )
          p_LeftChild = &Parent->RightChild;
        *p_LeftChild = 0LL;
        return RtlSplay(Parent);
      }
      return result;
    }
    result = Links->RightChild;
  }
  v5 = Links->Parent;
  if ( Links->Parent == Links )
  {
    result->Parent = result;
  }
  else
  {
    p_RightChild = &v5->LeftChild;
    if ( v5->LeftChild != Links )
      p_RightChild = &v5->RightChild;
    *p_RightChild = result;
    v7 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v7);
  }
  return result;
}
