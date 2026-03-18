/*
 * XREFs of MNClearCachedPopupSizes @ 0x1C0107D70
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall MNClearCachedPopupSizes(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx

  *(_DWORD *)(a1 + 56) = 0;
  v1 = 0;
  for ( *(_DWORD *)(a1 + 60) = 0; v1 < *(_DWORD *)(a1 + 52); ++v1 )
  {
    v3 = 152LL * v1;
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + v3 + 92) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + v3 + 96) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + v3 + 112) = -1;
    memset((void *)(*(_QWORD *)(a1 + 80) + 120LL + v3), 0, 0x20uLL);
  }
  return MNRefreshUAHCachedSizes(a1);
}
