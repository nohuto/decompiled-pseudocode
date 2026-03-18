/*
 * XREFs of RtlFreeHeap @ 0x140109854
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14010A1EC (RtlpAllocateHeapInternal.c)
 *     sub_140265DD0 @ 0x140265DD0 (sub_140265DD0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !BaseAddress )
    return 1;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
  return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags);
}
