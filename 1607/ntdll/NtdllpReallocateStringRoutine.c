/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D2B04
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800132BC (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C78 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
