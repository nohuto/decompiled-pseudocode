/*
 * XREFs of EtwpPsProvCaptureState @ 0x1406662B0
 * Callers:
 *     EtwpTraceLoggingProvEnableCallback @ 0x1404CFBF4 (EtwpTraceLoggingProvEnableCallback.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404D00D4 (EtwpCrimsonProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x14050085C (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(void *a1, __int64 a2)
{
  BOOLEAN v2; // bl
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  v4 = a2;
  v5 = 0LL;
  *(_DWORD *)((char *)&v5 + 1) = a1 == &PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((PEPROCESS)PsIdleProcess);
  PsEnumProcesses((__int64 (__fastcall *)(unsigned __int64, __int64))EtwpPsProvProcessEnumCallback, (__int64)&v4);
  return IoSetThreadHardErrorMode(v2);
}
