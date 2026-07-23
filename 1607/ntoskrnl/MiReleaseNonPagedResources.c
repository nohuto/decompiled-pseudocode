/*
 * XREFs of MiReleaseNonPagedResources @ 0x14013F08C
 * Callers:
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MiMoveEccPagesToFreeList @ 0x1401E1E5C (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1401F184C (MiFreePartitionPageRun.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (int *)a1 == MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a2);
}
