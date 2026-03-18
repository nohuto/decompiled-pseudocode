/*
 * XREFs of MiReturnResidentAvailable @ 0x1400380DC
 * Callers:
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     MiReleaseWriteInProgressCharges @ 0x140082AE0 (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MmReleaseResourceCharge @ 0x1400D9688 (MmReleaseResourceCharge.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     MiChargeForWriteInProgressPage @ 0x14011E720 (MiChargeForWriteInProgressPage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140140004 (SmAcquireReleaseResAvailForRead.c)
 *     MiDeleteSessionPdes @ 0x14014BED8 (MiDeleteSessionPdes.c)
 *     MiReturnSplitPages @ 0x14015FA8C (MiReturnSplitPages.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     MmGrowKernelStackEx @ 0x140169560 (MmGrowKernelStackEx.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiEnableNewPfns @ 0x1402128C8 (MiEnableNewPfns.c)
 *     MmMarkPhysicalMemoryAsGood @ 0x1402134E0 (MmMarkPhysicalMemoryAsGood.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiCleanupPageTablePages @ 0x14021EA6C (MiCleanupPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiReturnLargePages @ 0x14022FA34 (MiReturnLargePages.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140453288 (MiReturnSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiMarkBootGuardPage @ 0x14059A720 (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406A1364 (MmReturnChargesToLockPagedPool.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnResidentAvailable(unsigned __int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v2; // r9
  __int64 CachedResidentAvailable; // r8
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
  _InterlockedExchangeAdd64(&qword_1403552C0, v2);
}
