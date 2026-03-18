/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1401F7B60
 * Callers:
 *     RtlAllocateHeap @ 0x1400D3D6C (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1400D3D94 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1401F94B4 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3, __int16 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
