/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1800300C0
 * Callers:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 */

unsigned __int64 __fastcall RtlpHpAllocWithExceptionProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtAllocateHeap(a1, a2, a3);
  else
    return RtlpAllocateHeapInternal(a1, a2, a3);
}
