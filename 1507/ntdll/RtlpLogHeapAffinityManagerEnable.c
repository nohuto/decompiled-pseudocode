/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x1800EF4F8
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  _DWORD v5[10]; // [rsp+24h] [rbp-44h] BYREF

  memset(v5, 0, sizeof(v5));
  *(_QWORD *)&v5[7] = a1;
  HIWORD(v5[0]) = 4150;
  v5[9] = a2;
  return NtTraceEvent();
}
