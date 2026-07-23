/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x180073600
 * Callers:
 *     RtlReAllocateHeap @ 0x180020D70 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x180073650 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1800E3070 (RtlpHeapFatalExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlpHpReAllocWithExceptionProtection(
        unsigned __int16 *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
