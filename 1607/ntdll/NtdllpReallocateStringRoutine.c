/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D2BC4
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800132AC (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C68 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
