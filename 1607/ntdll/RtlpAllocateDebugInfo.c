/*
 * XREFs of RtlpAllocateDebugInfo @ 0x18002B230
 * Callers:
 *     RtlInitializeResource @ 0x18002B040 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B130 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1800A9D30 (RtlpInterlockedPopEntrySList.c)
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
      return (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  return result;
}
