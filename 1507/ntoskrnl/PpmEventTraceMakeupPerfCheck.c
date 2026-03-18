/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x14024189C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400E9574 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
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
