/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x1400C256C
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1404BC734 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlPruneTunnelCache @ 0x1404E75FC (FsRtlPruneTunnelCache.c)
 * Callees:
 *     RtlDeleteNoSplay @ 0x1400C2930 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 */

void __fastcall FsRtlRemoveNodeFromTunnel(__int64 a1, _RTL_SPLAY_LINKS *a2, __int64 *a3, _BYTE *a4)
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
  FsRtlFreeTunnelNode((char *)a2, a3);
}
