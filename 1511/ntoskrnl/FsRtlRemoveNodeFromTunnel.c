/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x1400CD494
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140491EA4 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlPruneTunnelCache @ 0x1404928A0 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     RtlDeleteNoSplay @ 0x1400CD5F0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1400CE42C (RtlDelete.c)
 */

__int64 __fastcall FsRtlRemoveNodeFromTunnel(__int64 a1, _RTL_SPLAY_LINKS *a2, __int64 a3, _BYTE *a4)
{
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx

  if ( a4 && *a4 )
  {
    *(_QWORD *)(a1 + 56) = RtlDelete(a2);
    *a4 = 0;
  }
  else
  {
    RtlDeleteNoSplay(a2, (PRTL_SPLAY_LINKS *)(a1 + 56));
  }
  Parent = a2[1].Parent;
  LeftChild = a2[1].LeftChild;
  if ( Parent->LeftChild != &a2[1] || LeftChild->Parent != &a2[1] )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --*(_WORD *)(a1 + 80);
  return FsRtlFreeTunnelNode(a2);
}
