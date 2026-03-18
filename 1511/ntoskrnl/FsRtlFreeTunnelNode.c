/*
 * XREFs of FsRtlFreeTunnelNode @ 0x1400CD5B0
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x1400CD494 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlAddToTunnelCache @ 0x140492590 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     <none>
 */

void __fastcall FsRtlFreeTunnelNode(char *Entry, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rcx

  if ( a2 )
  {
    v2 = *a2;
    v3 = (__int64 *)(Entry + 24);
    *v3 = *a2;
    v3[1] = (__int64)a2;
    if ( *(__int64 **)(v2 + 8) != a2 )
      __fastfail(3u);
    *(_QWORD *)(v2 + 8) = v3;
    *a2 = (__int64)v3;
  }
  else if ( (*((_DWORD *)Entry + 14) & 1) != 0 )
  {
    ExFreePoolWithTag(Entry, 0);
  }
  else
  {
    ExFreeToNPagedLookasideList(&TunnelLookasideList, Entry);
  }
}
