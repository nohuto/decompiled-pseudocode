/*
 * XREFs of MiGetPteTimeStamp @ 0x1401F24C8
 * Callers:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x14001E930 (MI_IS_RESET_PTE.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiReplenishBitMap @ 0x140088A20 (MiReplenishBitMap.c)
 *     MiGetSmallZeroPtes @ 0x14008A774 (MiGetSmallZeroPtes.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MiConvertWsleHash @ 0x140100840 (MiConvertWsleHash.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F784 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiAddToReservationCluster @ 0x140116364 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140116BC4 (MiGetPageForWriteCluster.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x140123EB0 (MiClearPageFileHash.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 *     MiReleaseLargePteMappings @ 0x1401264F4 (MiReleaseLargePteMappings.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiFreeReservationRun @ 0x1404D3868 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32;
}
