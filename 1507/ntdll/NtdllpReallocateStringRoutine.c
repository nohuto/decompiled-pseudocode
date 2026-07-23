/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800C0C28
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800215E4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T Size, PVOID BaseAddress)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress, Size);
}
