/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800CB35C
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180010FB4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
