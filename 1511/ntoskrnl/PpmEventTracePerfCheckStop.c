/*
 * XREFs of PpmEventTracePerfCheckStop @ 0x1400E9ABC
 * Callers:
 *     PpmCheckStart @ 0x140075F90 (PpmCheckStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void PpmEventTracePerfCheckStop()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      UserData.Size = 8;
      EtwWrite(v0, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
    }
  }
}
