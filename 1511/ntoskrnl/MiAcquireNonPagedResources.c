/*
 * XREFs of MiAcquireNonPagedResources @ 0x1400E8A40
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 *     MiScrubNodeLargePages @ 0x14062B008 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(int *a1, unsigned __int64 a2)
{
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)a1, a2, 0LL) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, 0LL) )
  {
    MiReturnCommit((__int64)a1, a2);
    return 0LL;
  }
  if ( a1 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1402FF5A0, a2);
  return 1LL;
}
