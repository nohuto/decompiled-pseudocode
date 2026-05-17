/*
 * XREFs of RtlpAllocateDebugInfo @ 0x180055000
 * Callers:
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1800A88F0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY RtlpAllocateDebugInfo()
{
  PSLIST_ENTRY result; // rax
  void *ProcessHeap; // rcx

  result = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !result )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( ProcessHeap )
      return (PSLIST_ENTRY)RtlAllocateHeap((__int64)ProcessHeap, 0, 48LL);
  }
  return result;
}
