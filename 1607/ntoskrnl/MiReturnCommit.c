/*
 * XREFs of MiReturnCommit @ 0x14004E500
 * Callers:
 *     MmReleaseResourceCharge @ 0x140003CD8 (MmReleaseResourceCharge.c)
 *     MiChargeControlAreaPartition @ 0x140027BE0 (MiChargeControlAreaPartition.c)
 *     MiProbeLockFrame @ 0x14002F730 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageCharge @ 0x14004D1E0 (MiRemoveLockedPageCharge.c)
 *     MiUnlockMdlWritePages @ 0x14004D4B0 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiWriteCompletePfn @ 0x14004E5A0 (MiWriteCompletePfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckProtoPtePageState @ 0x14004E9B0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x14004ED80 (MiLockProtoPoolPage.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiDeleteVadBitmap @ 0x1400750D0 (MiDeleteVadBitmap.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008EF9C (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x140090080 (MiDeleteSegmentPages.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiReturnNonPagedPoolCharges @ 0x140098570 (MiReturnNonPagedPoolCharges.c)
 *     MiFreePagesFromMdl @ 0x140099EF8 (MiFreePagesFromMdl.c)
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 *     MiConvertToLinkedWsles @ 0x1400A1844 (MiConvertToLinkedWsles.c)
 *     MiReturnFaultCharges @ 0x1400B2F88 (MiReturnFaultCharges.c)
 *     MiDecrementCloneBlockReference @ 0x1400B8CA0 (MiDecrementCloneBlockReference.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400BAB0C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUnlockPageTableCharges @ 0x1400BAC48 (MiUnlockPageTableCharges.c)
 *     MiFreePageFileHashPfns @ 0x1400BE8F8 (MiFreePageFileHashPfns.c)
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MmCreateKernelStack @ 0x1400F17B0 (MmCreateKernelStack.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiObtainNonPagedPoolCharges @ 0x140102084 (MiObtainNonPagedPoolCharges.c)
 *     MiCleanupPageTablePages @ 0x140102760 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x140102808 (MiGetPageTablePages.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiChargeForLockedPage @ 0x140103380 (MiChargeForLockedPage.c)
 *     MiObtainMdlCharges @ 0x140103DA8 (MiObtainMdlCharges.c)
 *     MiAllocatePagesForMdl @ 0x140104224 (MiAllocatePagesForMdl.c)
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x14011191C (MiFreeContiguousPages.c)
 *     MiGetFileHashPage @ 0x140114CEC (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     MiDeleteSessionPdes @ 0x140125CE8 (MiDeleteSessionPdes.c)
 *     MiSessionUpdateImageCharges @ 0x14012C9D8 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14012FB6C (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x140138D04 (MiDeleteBootRange.c)
 *     MiStoreChargeReservedPages @ 0x14013C7AC (MiStoreChargeReservedPages.c)
 *     MiReleaseNonPagedResources @ 0x14013EB1C (MiReleaseNonPagedResources.c)
 *     MiReturnSplitPageCharges @ 0x14014B990 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0934 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResources @ 0x1401E1B24 (MiAcquireNonPagedResources.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 *     MiGetSubsectionCharges @ 0x1401F50F8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
 *     MiFreeLargePages @ 0x1401F5530 (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiFreeCombineBlock @ 0x1401F9C24 (MiFreeCombineBlock.c)
 *     MiRebuildLargePage @ 0x1401FD8CC (MiRebuildLargePage.c)
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140430190 (MiDecommitRegion.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1404BA400 (MiChargeSegmentCommit.c)
 *     MiReturnFullProcessCommitment @ 0x1404BCCE8 (MiReturnFullProcessCommitment.c)
 *     MiChargeSystemImageCommitment @ 0x1404EDFD0 (MiChargeSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiDereferenceSessionFinal @ 0x140531AD0 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x140531EB8 (MiDeleteLeakedSessionPool.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     MiDeleteSessionDriverProtos @ 0x140546350 (MiDeleteSessionDriverProtos.c)
 *     MiReturnSystemImageCommitment @ 0x140547384 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14054E27C (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MiDeletePagingFiles @ 0x14065AF04 (MiDeletePagingFiles.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14066209C (MiFreeSubsectionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140142B2C (MiSyncCommitSignals.c)
 */

unsigned __int64 __fastcall MiReturnCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedCommit; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rtt

  result = *(_QWORD *)(a1 + 5696);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v9 = a2;
    if ( a2 > result )
      v9 = result;
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5696), result - v9, result);
    if ( v10 == result )
      break;
    if ( !result )
      goto LABEL_2;
  }
  v3 = a2 - v9;
  if ( a2 != v9 )
  {
LABEL_2:
    if ( (int *)a1 == MiSystemPartition
      && (CurrentPrcb = KeGetCurrentPrcb(),
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
          CachedCommit = CurrentPrcb->CachedCommit,
          v3 + CachedCommit <= 0x100) )
    {
      while ( 1 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                                 v3 + CachedCommit,
                                 CachedCommit);
        if ( (int)result == CachedCommit )
          break;
        CachedCommit = (int)result;
        if ( (int)result + v3 > 0x100 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7208), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 5664);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL);
      v8 = *(_QWORD *)(a1 + 5656);
      result = v6 - v3;
      if ( v6 >= v8 && result < v8 )
        return MiSyncCommitSignals(a1, 0LL);
    }
  }
  return result;
}
