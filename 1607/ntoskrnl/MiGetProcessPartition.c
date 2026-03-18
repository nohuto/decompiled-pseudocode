/*
 * XREFs of MiGetProcessPartition @ 0x14002BAF0
 * Callers:
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     MiDecommitRegion @ 0x140430190 (MiDecommitRegion.c)
 *     MiChargeFullProcessCommitment @ 0x140430960 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140430A30 (MiCommitPageTablesForVad.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045F008 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MiMakeHyperRangeAccessible @ 0x14046DB20 (MiMakeHyperRangeAccessible.c)
 *     MiReturnFullProcessCommitment @ 0x1404BCCE8 (MiReturnFullProcessCommitment.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiAllocateTopLevelPage @ 0x140656D60 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14065B8D0 (MiAllocateProcessShadow.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406632F4 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140663550 (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14069B5D4 (VmpPauseResumeNotify.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetProcessPartition(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = *(_WORD *)(a1 + 1444);
  if ( v1 == 1023 )
    return MiSystemPartition;
  else
    return *(int **)(qword_140326FF8 + 8LL * v1);
}
