/*
 * XREFs of MiGetPteTimeStamp @ 0x1401F269C
 * Callers:
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x14001EDB0 (MI_IS_RESET_PTE.c)
 *     MiClearNonPagedPtes @ 0x140024520 (MiClearNonPagedPtes.c)
 *     MiUpdateWsleHash @ 0x140048D80 (MiUpdateWsleHash.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiReplenishBitMap @ 0x140089320 (MiReplenishBitMap.c)
 *     MiGetSmallZeroPtes @ 0x14008B074 (MiGetSmallZeroPtes.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x1400B65FC (MiFindFreePageFileSpace.c)
 *     MiGetPagingFileOffset @ 0x1400B9780 (MiGetPagingFileOffset.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiFlushTbAsNeeded @ 0x1400E0040 (MiFlushTbAsNeeded.c)
 *     MiConvertWsleHash @ 0x140102AC0 (MiConvertWsleHash.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F220 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiAddToReservationCluster @ 0x140115DF4 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140116654 (MiGetPageForWriteCluster.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x140123940 (MiClearPageFileHash.c)
 *     MiFindPageFileWriteCluster @ 0x140125A40 (MiFindPageFileWriteCluster.c)
 *     MiReleaseLargePteMappings @ 0x140125F84 (MiReleaseLargePteMappings.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB91C (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE980 (MiGetPageFileReservationOffset.c)
 *     MiFreeReservationRun @ 0x1404F1774 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32;
}
