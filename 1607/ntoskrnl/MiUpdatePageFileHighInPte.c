/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1401F2840
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiInitializeTbFlushStamps @ 0x14004B64C (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 *     MiGetSmallZeroPtes @ 0x14008A774 (MiGetSmallZeroPtes.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiDrainZeroLookasides @ 0x1400A71B4 (MiDrainZeroLookasides.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiConvertWsleHash @ 0x140100840 (MiConvertWsleHash.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x140123EB0 (MiClearPageFileHash.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiClearPfnSlist @ 0x1401F2A84 (MiClearPfnSlist.c)
 *     MiSetPfnSlist @ 0x1401F2E24 (MiSetPfnSlist.c)
 *     MiFreeReservationRun @ 0x1404D3868 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
    v2 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
