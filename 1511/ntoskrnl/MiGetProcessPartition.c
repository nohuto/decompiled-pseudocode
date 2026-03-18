/*
 * XREFs of MiGetProcessPartition @ 0x140063890
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x14041AE10 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 *     MiMakeHyperRangeAccessible @ 0x140462F18 (MiMakeHyperRangeAccessible.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 *     MiCleanPhysicalProcessPages @ 0x140626B7C (MiCleanPhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14062AD24 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x14062AF6C (MmInSwapVirtualAddresses.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetProcessPartition(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = *(_WORD *)(a1 + 1460);
  if ( v1 == 1023 )
    return &MiSystemPartition;
  else
    return *(int **)(qword_1402FEC28 + 8LL * v1);
}
