/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x1800F8F64
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFB0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, 0x2CuLL);
  v5[4] = a1;
  HIWORD(v5[0]) = 4150;
  LODWORD(v5[5]) = a2;
  return NtTraceEvent();
}
