/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x18006A954
 * Callers:
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 */

__int64 __fastcall RtlpHpReAllocWithExceptionProtection(void *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtReAllocateHeap(a1);
  else
    return RtlpReAllocateHeapInternal((unsigned __int16 *)a1, a2, a3, a4);
}
