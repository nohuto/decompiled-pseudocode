/*
 * XREFs of MiGetPdeAddress @ 0x14001A3B4
 * Callers:
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x1403CD9BC (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x1403CE89C (MiDisablePagingOfDriver.c)
 *     MmPageEntireDriver @ 0x1403CF37C (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x1403CF474 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiReturnPageTablePageCommitment @ 0x140415AD0 (MiReturnPageTablePageCommitment.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiMapProcessExecutable @ 0x1404635E8 (MiMapProcessExecutable.c)
 *     MiUnlockDriverCode @ 0x1404C32F0 (MiUnlockDriverCode.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiProtectSystemImage @ 0x140520C80 (MiProtectSystemImage.c)
 *     MiBackSystemImageWithPagefile @ 0x140522ED0 (MiBackSystemImageWithPagefile.c)
 *     MiUnmapLargeDriver @ 0x140621B08 (MiUnmapLargeDriver.c)
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 *     MmAreMdlPagesLocked @ 0x1406B5B58 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
