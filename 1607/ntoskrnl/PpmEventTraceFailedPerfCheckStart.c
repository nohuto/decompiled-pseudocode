/*
 * XREFs of PpmEventTraceFailedPerfCheckStart @ 0x1400AAE48
 * Callers:
 *     PpmCheckPeriodicStart @ 0x1400D5130 (PpmCheckPeriodicStart.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceFailedPerfCheckStart(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PpmEtwRegistered )
  {
    v1 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWrite(v1, &PPM_ETW_PERF_CHECK_FAILED_START, 0LL, 1u, &UserData);
    }
  }
}
