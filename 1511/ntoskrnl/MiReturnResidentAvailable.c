/*
 * XREFs of MiReturnResidentAvailable @ 0x1400687F0
 * Callers:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     MiFreePageFileHashPfns @ 0x1400135E8 (MiFreePageFileHashPfns.c)
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiCleanupPageTablePages @ 0x140017C64 (MiCleanupPageTablePages.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400306A4 (MiReleaseWriteInProgressCharges.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     MiRebuildLargePage @ 0x1400BE1B0 (MiRebuildLargePage.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400D6B5C (MiReturnNonPagedPoolCharges.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     MiChargeForWriteInProgressPage @ 0x1400E56EC (MiChargeForWriteInProgressPage.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     SmSetThreadFaultState @ 0x1400F7A4C (SmSetThreadFaultState.c)
 *     MmReleaseResourceCharge @ 0x1400F8FC8 (MmReleaseResourceCharge.c)
 *     MiGetFileHashPage @ 0x140107D58 (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140110370 (SmAcquireReleaseResAvailForRead.c)
 *     MiDeleteSessionPdes @ 0x140116E90 (MiDeleteSessionPdes.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiFreeCombineBlock @ 0x14012B6C8 (MiFreeCombineBlock.c)
 *     MiReturnSplitPageCharges @ 0x14013226C (MiReturnSplitPageCharges.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     MmGrowKernelStackEx @ 0x14013D1C8 (MmGrowKernelStackEx.c)
 *     MiEnableNewPfns @ 0x1401D197C (MiEnableNewPfns.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     MiReturnLargePages @ 0x1401E2488 (MiReturnLargePages.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1403CC2F8 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiReturnSystemImageCommitment @ 0x1404C616C (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiMarkBootGuardPage @ 0x14052F734 (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x140621C54 (MmReturnChargesToLockPagedPool.c)
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
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
  _InterlockedExchangeAdd64(&qword_140301480, v2);
}
