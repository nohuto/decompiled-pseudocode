/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x140019690
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x14001EF78 (MiRecheckVaWorkingSet.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
