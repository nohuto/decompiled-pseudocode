/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1401F2958
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MiUpdateWsleHash @ 0x140048D80 (MiUpdateWsleHash.c)
 *     MiInitializeTbFlushStamps @ 0x14004BACC (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x1400525F0 (MiInsertCachedPte.c)
 *     MiGetSmallZeroPtes @ 0x14008B074 (MiGetSmallZeroPtes.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiDrainZeroLookasides @ 0x1400A8C34 (MiDrainZeroLookasides.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiConvertWsleHash @ 0x140102AC0 (MiConvertWsleHash.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x140123940 (MiClearPageFileHash.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiExpandSpecialPool @ 0x1401EB618 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB91C (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiTransferSoftwarePte @ 0x1401F299C (MiTransferSoftwarePte.c)
 *     MiClearPfnSlist @ 0x1401F2C58 (MiClearPfnSlist.c)
 *     MiSetPfnSlist @ 0x1401F2FF8 (MiSetPfnSlist.c)
 *     MiFreeReservationRun @ 0x1404F1774 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
    v2 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
