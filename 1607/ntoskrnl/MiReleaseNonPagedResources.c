/*
 * XREFs of MiReleaseNonPagedResources @ 0x14013EB1C
 * Callers:
 *     MiPfnRangeIsZero @ 0x14013E6D4 (MiPfnRangeIsZero.c)
 *     MiMoveEccPagesToFreeList @ 0x1401E2030 (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2344 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteProcessShadow @ 0x1401EF1E4 (MiDeleteProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1401F1A20 (MiFreePartitionPageRun.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiAllocateProcessShadow @ 0x14065B8D0 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (int *)a1 == MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a2);
}
