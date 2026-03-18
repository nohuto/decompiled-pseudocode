/*
 * XREFs of MiGetPdeAddress @ 0x1400AB5EC
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140434210 (MiReturnPageTablePageCommitment.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiMapProcessExecutable @ 0x14046CDE8 (MiMapProcessExecutable.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     MiMapNewSession @ 0x140536994 (MiMapNewSession.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x140662F2C (MiUnmapLargeDriver.c)
 *     MiDeleteLargePfnBitMap @ 0x1406648A0 (MiDeleteLargePfnBitMap.c)
 *     MmAreMdlPagesLocked @ 0x140701990 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
