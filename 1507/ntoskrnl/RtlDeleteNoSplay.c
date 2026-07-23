/*
 * XREFs of RtlDeleteNoSplay @ 0x1401057D0
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1401056B0 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlUninitializeFileLock @ 0x14012EC68 (FsRtlUninitializeFileLock.c)
 * Callees:
 *     SwapSplayLinks @ 0x140105E38 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x140105F5C (RtlSubtreePredecessor.c)
 */

void __stdcall RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v6; // rax
  _RTL_SPLAY_LINKS **p_RightChild; // rdx
  _RTL_SPLAY_LINKS **p_LeftChild; // rax
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
  v6 = Links->Parent;
  if ( Links->Parent == Links )
  {
    LeftChild->Parent = LeftChild;
    *Root = LeftChild;
  }
  else
  {
    p_RightChild = &v6->LeftChild;
    if ( v6->LeftChild != Links )
      p_RightChild = &v6->RightChild;
    *p_RightChild = LeftChild;
    LeftChild->Parent = Links->Parent;
  }
}
