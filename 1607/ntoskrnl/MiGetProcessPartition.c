/*
 * XREFs of MiGetProcessPartition @ 0x14002B670
 * Callers:
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045DED8 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     MiMakeHyperRangeAccessible @ 0x14046C9F0 (MiMakeHyperRangeAccessible.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiAllocateTopLevelPage @ 0x140656E44 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C3F0 (MiCleanPhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406633D8 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140663634 (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14069B6B8 (VmpPauseResumeNotify.c)
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
    return *(int **)(qword_140327038 + 8LL * v1);
}
