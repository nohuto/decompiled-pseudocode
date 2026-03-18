/*
 * XREFs of RtlAllocateHeap @ 0x14010A1D0
 * Callers:
 *     sub_140265DD0 @ 0x140265DD0 (sub_140265DD0.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpAllocWithExceptionProtection(HeapHandle, Size, Flags);
  else
    return (PVOID)RtlpAllocateHeapInternal(HeapHandle);
}
