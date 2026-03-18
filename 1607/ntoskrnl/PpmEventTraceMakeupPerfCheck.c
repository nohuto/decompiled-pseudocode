/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x14020CEE0
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400D4C44 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  REGHANDLE v0; // rbx

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWrite(v0, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL);
  }
}
