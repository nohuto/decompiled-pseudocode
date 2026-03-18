/*
 * XREFs of MiGetProcessPartition @ 0x14008F8A0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiMakeHyperRangeAccessible @ 0x1404680B8 (MiMakeHyperRangeAccessible.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 *     MiCleanPhysicalProcessPages @ 0x1406A5EEC (MiCleanPhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406A93F4 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x1406A94C8 (MmInSwapVirtualAddresses.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall MiGetProcessPartition(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = *(_WORD *)(a1 + 1452);
  if ( v1 == 1023 )
    return MiSystemPartition;
  else
    return *(__int16 **)(qword_14034F0E8 + 8LL * v1);
}
