/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x140019B10
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140018374 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140018A20 (MmMapViewInSystemCache.c)
 *     MiSystemCacheVaControlArea @ 0x140018E30 (MiSystemCacheVaControlArea.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x14001F3F8 (MiRecheckVaWorkingSet.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v1 = MI_GET_PAGE_FRAME_FROM_PTE(&v4);
  return *(_QWORD *)(48 * v1 - 0x57FFFFFFFF0LL) + 40 * ((v2 >> 18) & 7);
}
