/*
 * XREFs of MiAcquireNonPagedResources @ 0x1401E1950
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
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
