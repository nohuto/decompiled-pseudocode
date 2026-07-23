/*
 * XREFs of RtlDeleteNoSplay @ 0x1400C2930
 * Callers:
 *     FsRtlUninitializeFileLock @ 0x1400B1FCC (FsRtlUninitializeFileLock.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1400C256C (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1400C2E34 (FsRtlPrivateInsertSharedLock.c)
 * Callees:
 *     SwapSplayLinks @ 0x1400C3ABC (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x1400C3BDC (RtlSubtreePredecessor.c)
 */

void __stdcall RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  _RTL_SPLAY_LINKS *v9; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v9 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v9;
    SwapSplayLinks(v9, Links);
  }
  LeftChild = Links->LeftChild;
  if ( !LeftChild )
  {
    if ( !Links->RightChild )
    {
      Parent = Links->Parent;
      if ( Links->Parent == Links )
      {
        *Root = 0LL;
      }
      else
      {
        p_LeftChild = &Parent->LeftChild;
        if ( Parent->LeftChild != Links )
          p_LeftChild = &Parent->RightChild;
        *p_LeftChild = 0LL;
      }
      return;
    }
    LeftChild = Links->RightChild;
  }
  v7 = Links->Parent;
  if ( Links->Parent == Links )
  {
    LeftChild->Parent = LeftChild;
    *Root = LeftChild;
  }
  else
  {
    p_RightChild = &v7->LeftChild;
    if ( v7->LeftChild != Links )
      p_RightChild = &v7->RightChild;
    *p_RightChild = LeftChild;
    LeftChild->Parent = Links->Parent;
  }
}
