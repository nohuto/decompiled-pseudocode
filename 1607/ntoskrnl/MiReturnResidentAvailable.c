/*
 * XREFs of MiReturnResidentAvailable @ 0x14004ED60
 * Callers:
 *     SmSetThreadFaultState @ 0x140003AC8 (SmSetThreadFaultState.c)
 *     MmReleaseResourceCharge @ 0x140003E4C (MmReleaseResourceCharge.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008E6FC (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x14008F7E0 (MiDeleteSegmentPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x140097D70 (MiReturnNonPagedPoolCharges.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiCleanupPageTablePages @ 0x1401004E0 (MiCleanupPageTablePages.c)
 *     MiChargeForWriteInProgressPage @ 0x140100B1C (MiChargeForWriteInProgressPage.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     MiGetFileHashPage @ 0x14011525C (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14011E50C (SmAcquireReleaseResAvailForRead.c)
 *     MiDeleteSessionPdes @ 0x140126258 (MiDeleteSessionPdes.c)
 *     MmGrowKernelStackEx @ 0x140136A80 (MmGrowKernelStackEx.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     MiReturnSplitPageCharges @ 0x14014BF00 (MiReturnSplitPageCharges.c)
 *     MiEnableNewPfns @ 0x1401E19A0 (MiEnableNewPfns.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     MiFreeLargePages @ 0x1401F535C (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045DED8 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     MiReturnSystemImageCommitment @ 0x1405478C4 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14054E61C (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14065A2D0 (MmReturnChargesToLockPagedPool.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C3F0 (MiCleanPhysicalProcessPages.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnResidentAvailable(unsigned __int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v2; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v4; // zf
  signed __int32 v5; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( a1 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( a1 >= 0x80000 )
          break;
        v5 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               a1 + CachedResidentAvailable,
               CachedResidentAvailable);
        v4 = (_DWORD)CachedResidentAvailable == v5;
        LODWORD(CachedResidentAvailable) = v5;
        if ( v4 )
          return;
      }
      while ( v5 != -1 && a1 + v5 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v2 = (int)CachedResidentAvailable - 192 + a1;
    }
  }
  _InterlockedExchangeAdd64(&qword_140324F00, v2);
}
