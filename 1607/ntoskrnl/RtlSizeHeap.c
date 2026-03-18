/*
 * XREFs of RtlSizeHeap @ 0x140211F0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
SIZE_T __stdcall RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID MemoryPointer)
{
  return RtlpSizeHeapInternal(HeapHandle, Flags, MemoryPointer);
}
