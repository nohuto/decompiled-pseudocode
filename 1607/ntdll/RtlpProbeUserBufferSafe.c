/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x18007AE0C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetUserValueHeap @ 0x180029050 (RtlSetUserValueHeap.c)
 *     RtlSizeHeap @ 0x180046180 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlGetUserInfoHeap @ 0x18007AB50 (RtlGetUserInfoHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E9420 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx

  if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    RtlpLogHeapFailure(8, a1, (_DWORD)v2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
