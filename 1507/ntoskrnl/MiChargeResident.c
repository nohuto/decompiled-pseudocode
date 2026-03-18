/*
 * XREFs of MiChargeResident @ 0x14003C6D0
 * Callers:
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MiChargeForLockedPage @ 0x14003C5B0 (MiChargeForLockedPage.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiObtainMdlCharges @ 0x140077BF0 (MiObtainMdlCharges.c)
 *     MiChargeControlAreaPartition @ 0x14008AF80 (MiChargeControlAreaPartition.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MmChargeResources @ 0x1400D95D8 (MmChargeResources.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiChargeForWriteInProgressPage @ 0x14011E720 (MiChargeForWriteInProgressPage.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     MiObtainNonPagedPoolCharges @ 0x140125C58 (MiObtainNonPagedPoolCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14014F32C (MmStoreChargeResidentAvailableForRead.c)
 *     MmGrowKernelStackEx @ 0x140169560 (MmGrowKernelStackEx.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x1405C63C8 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 *     MiAllocateDummyPage @ 0x1407C79D0 (MiAllocateDummyPage.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargeResident(__int16 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 CachedResidentAvailable; // rax
  int v6; // ett

  if ( a1 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( a2 <= CachedResidentAvailable )
    {
      while ( (_DWORD)CachedResidentAvailable != -1 )
      {
        v6 = CachedResidentAvailable;
        LODWORD(CachedResidentAvailable) = _InterlockedCompareExchange(
                                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                             CachedResidentAvailable - a2,
                                             CachedResidentAvailable);
        if ( v6 == (_DWORD)CachedResidentAvailable )
          return 1LL;
        if ( a2 > (unsigned int)CachedResidentAvailable )
          return MiChargePartitionResidentAvailable(a1, a2, a3, a4);
      }
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3, a4);
}
