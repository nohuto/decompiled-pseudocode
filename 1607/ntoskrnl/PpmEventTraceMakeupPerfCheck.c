/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x14020CD0C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400D2AE4 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
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
