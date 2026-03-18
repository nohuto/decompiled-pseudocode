/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x1401F2DA0
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140075B84 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
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
