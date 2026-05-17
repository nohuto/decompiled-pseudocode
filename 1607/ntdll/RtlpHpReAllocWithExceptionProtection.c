/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x180073610
 * Callers:
 *     RtlReAllocateHeap @ 0x180020D80 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x180073660 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1800E2FB0 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlpHpReAllocWithExceptionProtection(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
