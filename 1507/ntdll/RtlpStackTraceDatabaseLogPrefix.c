/*
 * XREFs of RtlpStackTraceDatabaseLogPrefix @ 0x1800F0340
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180012600 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpRegisterStackTrace @ 0x1800F0120 (RtlpRegisterStackTrace.c)
 */

__int64 __fastcall RtlpStackTraceDatabaseLogPrefix(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  USHORT v5; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a3 == 1 )
  {
    *a4 = 16LL;
  }
  else if ( a3 > 1 && (a3 <= 3 || a3 - 5 <= 1) )
  {
    if ( a4 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
      *a4 = RtlpRegisterStackTrace(v5, BackTrace, BackTraceHash[0]);
    }
  }
  return 0LL;
}
