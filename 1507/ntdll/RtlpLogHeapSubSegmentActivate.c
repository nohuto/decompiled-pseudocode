/*
 * XREFs of RtlpLogHeapSubSegmentActivate @ 0x1800EFA4C
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentActivate(__int64 a1, __int64 a2)
{
  _DWORD v5[11]; // [rsp+24h] [rbp-44h] BYREF

  memset(v5, 0, sizeof(v5));
  *(_QWORD *)&v5[7] = a1;
  HIWORD(v5[0]) = 4152;
  *(_QWORD *)&v5[9] = a2;
  return NtTraceEvent();
}
