/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x140225FFC
 * Callers:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 *     MiConvertWsleHash @ 0x1401063E0 (MiConvertWsleHash.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x14014ACC8 (MiClearPageFileHash.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MI_CLEAR_RESET_PTE @ 0x140225960 (MI_CLEAR_RESET_PTE.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiDecrementTebProtos @ 0x140232F20 (MiDecrementTebProtos.c)
 *     MiFreeReservationRun @ 0x1404FB09C (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
    v2 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
