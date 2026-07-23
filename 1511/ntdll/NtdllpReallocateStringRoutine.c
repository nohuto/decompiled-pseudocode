/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800CB35C
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180010FB4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
