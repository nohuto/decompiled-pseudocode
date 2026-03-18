/*
 * XREFs of RtlFreeHeap @ 0x1400D33D4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1400D3D94 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1400D3418 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1401F7BA8 (RtlpHpFreeWithExceptionProtection.c)
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
