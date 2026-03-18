/*
 * XREFs of MiReleaseNonPagedResources @ 0x1400E9D1C
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     MiMoveEccPagesToFreeList @ 0x1401D1CFC (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 *     MiScrubNodeLargePages @ 0x14062B008 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (int *)a1 == MiSystemPartition )
  {
    MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64(&qword_1402FF5A8, a2);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), a2);
  }
}
