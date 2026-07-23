/*
 * XREFs of MiGetPdeAddress @ 0x1400847A4
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1404330E0 (MiReturnPageTablePageCommitment.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiMapProcessExecutable @ 0x14046BCB8 (MiMapProcessExecutable.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x140663010 (MiUnmapLargeDriver.c)
 *     MiDeleteLargePfnBitMap @ 0x140664984 (MiDeleteLargePfnBitMap.c)
 *     MmAreMdlPagesLocked @ 0x1407019C0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
