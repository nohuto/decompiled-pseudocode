/*
 * XREFs of MiChargeResident @ 0x1400AA260
 * Callers:
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiObtainNonPagedPoolCharges @ 0x140019B68 (MiObtainNonPagedPoolCharges.c)
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiChargeForLockedPage @ 0x1400AA160 (MiChargeForLockedPage.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiObtainMdlCharges @ 0x1400BD288 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiChargeForWriteInProgressPage @ 0x1400E56EC (MiChargeForWriteInProgressPage.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     SmSetThreadFaultState @ 0x1400F7A4C (SmSetThreadFaultState.c)
 *     MmChargeResources @ 0x1400F8F18 (MmChargeResources.c)
 *     MiGetFileHashPage @ 0x140107D58 (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14011AFF4 (MmStoreChargeResidentAvailableForRead.c)
 *     MiStoreChargeReservedPages @ 0x14013312C (MiStoreChargeReservedPages.c)
 *     MmGrowKernelStackEx @ 0x14013D1C8 (MmGrowKernelStackEx.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1403CC2F8 (MiChargeSystemImageCommitment.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14054E540 (MmObtainChargesToLockPagedPool.c)
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 *     MiAllocateDummyPage @ 0x140748580 (MiAllocateDummyPage.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
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
