/*
 * XREFs of MNClearCachedPopupSizes @ 0x1C00B83FC
 * Callers:
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
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
