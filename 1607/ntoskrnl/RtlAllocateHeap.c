/*
 * XREFs of RtlAllocateHeap @ 0x140093790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpAllocWithExceptionProtection(HeapHandle, Size, Flags);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  return (PVOID)RtlpAllocateHeapInternal(HeapHandle);
}
