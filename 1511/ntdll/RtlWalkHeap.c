/*
 * XREFs of RtlWalkHeap @ 0x18004E8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  char v2; // r8

  v2 = 1;
  return RtlpWalkHeapInternal(HeapHandle, Entry, v2);
}
