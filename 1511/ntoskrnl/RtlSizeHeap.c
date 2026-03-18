/*
 * XREFs of RtlSizeHeap @ 0x1401F7B58
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
