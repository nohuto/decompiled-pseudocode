/*
 * XREFs of MiChargeResident @ 0x140103450
 * Callers:
 *     SmSetThreadFaultState @ 0x140003954 (SmSetThreadFaultState.c)
 *     MmChargeResources @ 0x140003D14 (MmChargeResources.c)
 *     MiChargeControlAreaPartition @ 0x140027BE0 (MiChargeControlAreaPartition.c)
 *     MiObtainFaultCharges @ 0x14002B530 (MiObtainFaultCharges.c)
 *     MiConvertToLinkedWsles @ 0x1400A1844 (MiConvertToLinkedWsles.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MmCreateKernelStack @ 0x1400F17B0 (MmCreateKernelStack.c)
 *     MiObtainNonPagedPoolCharges @ 0x140102084 (MiObtainNonPagedPoolCharges.c)
 *     MiGetPageTablePages @ 0x140102808 (MiGetPageTablePages.c)
 *     MiChargeForWriteInProgressPage @ 0x140102D9C (MiChargeForWriteInProgressPage.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiChargeForLockedPage @ 0x140103380 (MiChargeForLockedPage.c)
 *     MiObtainMdlCharges @ 0x140103DA8 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x140114CEC (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14012ED80 (MmStoreChargeResidentAvailableForRead.c)
 *     MmGrowKernelStackEx @ 0x140136510 (MmGrowKernelStackEx.c)
 *     MiStoreChargeReservedPages @ 0x14013C7AC (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResources @ 0x1401E1B24 (MiAcquireNonPagedResources.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiGetSubsectionCharges @ 0x1401F50F8 (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x1401FE1A0 (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiChargeSystemImageCommitment @ 0x1404EDFD0 (MiChargeSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14056CEE8 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1401034A4 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(int *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 CachedResidentAvailable; // rax
  int v5; // ett

  if ( a1 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( a2 <= CachedResidentAvailable )
    {
      while ( (_DWORD)CachedResidentAvailable != -1 )
      {
        v5 = CachedResidentAvailable;
        LODWORD(CachedResidentAvailable) = _InterlockedCompareExchange(
                                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                             CachedResidentAvailable - a2,
                                             CachedResidentAvailable);
        if ( v5 == (_DWORD)CachedResidentAvailable )
          return 1LL;
        if ( a2 > (unsigned int)CachedResidentAvailable )
          return MiChargePartitionResidentAvailable(a1, a2, a3);
      }
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3);
}
