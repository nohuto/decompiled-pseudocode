/*
 * XREFs of MiReturnResidentAvailable @ 0x14004F1E0
 * Callers:
 *     SmSetThreadFaultState @ 0x140003954 (SmSetThreadFaultState.c)
 *     MmReleaseResourceCharge @ 0x140003CD8 (MmReleaseResourceCharge.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiLockPageTablePage @ 0x140030530 (MiLockPageTablePage.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008EF9C (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x140090080 (MiDeleteSegmentPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x140098570 (MiReturnNonPagedPoolCharges.c)
 *     MiFreePagesFromMdl @ 0x140099EF8 (MiFreePagesFromMdl.c)
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 *     MiConvertToLinkedWsles @ 0x1400A1844 (MiConvertToLinkedWsles.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnFaultCharges @ 0x1400B2F88 (MiReturnFaultCharges.c)
 *     MiUnlockPageTableCharges @ 0x1400BAC48 (MiUnlockPageTableCharges.c)
 *     MiFreePageFileHashPfns @ 0x1400BE8F8 (MiFreePageFileHashPfns.c)
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MmCreateKernelStack @ 0x1400F17B0 (MmCreateKernelStack.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiCleanupPageTablePages @ 0x140102760 (MiCleanupPageTablePages.c)
 *     MiChargeForWriteInProgressPage @ 0x140102D9C (MiChargeForWriteInProgressPage.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1401034A4 (MiChargePartitionResidentAvailable.c)
 *     MiAllocatePagesForMdl @ 0x140104224 (MiAllocatePagesForMdl.c)
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x14011191C (MiFreeContiguousPages.c)
 *     MiGetFileHashPage @ 0x140114CEC (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14011DF9C (SmAcquireReleaseResAvailForRead.c)
 *     MiDeleteSessionPdes @ 0x140125CE8 (MiDeleteSessionPdes.c)
 *     MmGrowKernelStackEx @ 0x140136510 (MmGrowKernelStackEx.c)
 *     MiDeleteBootRange @ 0x140138D04 (MiDeleteBootRange.c)
 *     MiReleaseNonPagedResources @ 0x14013EB1C (MiReleaseNonPagedResources.c)
 *     MiReturnSplitPageCharges @ 0x14014B990 (MiReturnSplitPageCharges.c)
 *     MiEnableNewPfns @ 0x1401E1B74 (MiEnableNewPfns.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
 *     MiFreeLargePages @ 0x1401F5530 (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiFreeCombineBlock @ 0x1401F9C24 (MiFreeCombineBlock.c)
 *     MiRebuildLargePage @ 0x1401FD8CC (MiRebuildLargePage.c)
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045F008 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiChargeSystemImageCommitment @ 0x1404EDFD0 (MiChargeSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x140531AD0 (MiDereferenceSessionFinal.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     MiReturnSystemImageCommitment @ 0x140547384 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14054E27C (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14065A1EC (MmReturnChargesToLockPagedPool.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
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
  _InterlockedExchangeAdd64(&qword_140324EC0, v2);
}
