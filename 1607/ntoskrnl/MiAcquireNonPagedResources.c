/*
 * XREFs of MiAcquireNonPagedResources @ 0x1401E1B24
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2344 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiAllocateProcessShadow @ 0x14065B8D0 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(int *a1, unsigned __int64 a2)
{
  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, 0) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, 0LL) )
  {
    MiReturnCommit((__int64)a1, a2);
    return 0LL;
  }
  return 1LL;
}
