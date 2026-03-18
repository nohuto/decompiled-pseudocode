/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x1401FFEC0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1400D3418 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x1401F9774 (RtlpSizeHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14014FF40 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1401F94B4 (RtlpHeapExceptionFilter.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int8 *v2; // rdx

  if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0LL, 0LL);
    return 0LL;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    RtlpLogHeapFailure(8, a1, (ULONG_PTR)v2, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
