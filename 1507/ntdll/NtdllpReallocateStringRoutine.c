/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800C0C28
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800215E4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 * Callees:
 *     <none>
 */

__int64 NtdllpReallocateStringRoutine()
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap);
}
