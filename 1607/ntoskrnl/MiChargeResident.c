/*
 * XREFs of MiChargeResident @ 0x1401011D0
 * Callers:
 *     SmSetThreadFaultState @ 0x140003AC8 (SmSetThreadFaultState.c)
 *     MmChargeResources @ 0x140003E88 (MmChargeResources.c)
 *     MiChargeControlAreaPartition @ 0x140027760 (MiChargeControlAreaPartition.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400FFE04 (MiObtainNonPagedPoolCharges.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MiChargeForWriteInProgressPage @ 0x140100B1C (MiChargeForWriteInProgressPage.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiChargeForLockedPage @ 0x140101100 (MiChargeForLockedPage.c)
 *     MiObtainMdlCharges @ 0x140101B28 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x14011525C (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14012F2F0 (MmStoreChargeResidentAvailableForRead.c)
 *     MmGrowKernelStackEx @ 0x140136A80 (MmGrowKernelStackEx.c)
 *     MiStoreChargeReservedPages @ 0x14013CD1C (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResources @ 0x1401E1950 (MiAcquireNonPagedResources.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x1401FDFCC (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14056D428 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
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
