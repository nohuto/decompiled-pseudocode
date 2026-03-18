/*
 * XREFs of RtlFreeHeap @ 0x1400934A4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x140093FB8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1400934E8 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140211F74 (RtlpHpFreeWithExceptionProtection.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( BaseAddress )
  {
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags, 0LL);
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return v3;
    return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags, 0LL);
  }
  return 1;
}
