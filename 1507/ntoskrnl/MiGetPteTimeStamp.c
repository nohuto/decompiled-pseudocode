/*
 * XREFs of MiGetPteTimeStamp @ 0x140225B28
 * Callers:
 *     MiReplenishBitMap @ 0x140012E20 (MiReplenishBitMap.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiFlushTbAsNeeded @ 0x1400ADC10 (MiFlushTbAsNeeded.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiConvertWsleHash @ 0x1401063E0 (MiConvertWsleHash.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x14014ACC8 (MiClearPageFileHash.c)
 *     MiReleaseLargePteMappings @ 0x14014C0D4 (MiReleaseLargePteMappings.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiDecrementTebProtos @ 0x140232F20 (MiDecrementTebProtos.c)
 *     MiFreeReservationRun @ 0x1404FB09C (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32;
}
