/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x1800F1450
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
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
