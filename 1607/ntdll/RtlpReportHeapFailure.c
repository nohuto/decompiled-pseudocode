/*
 * XREFs of RtlpReportHeapFailure @ 0x1800F9D18
 * Callers:
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlpGetModifiedProcessCookie @ 0x18005D95C (RtlpGetModifiedProcessCookie.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F7334 (RtlIsAnyDebuggerPresent.c)
 *     RtlpPrintErrorInformation @ 0x1800F97EC (RtlpPrintErrorInformation.c)
 */

void __fastcall RtlpReportHeapFailure(int a1)
{
  if ( RtlpDisableBreakOnFailureCookie == (unsigned int)RtlpGetModifiedProcessCookie() )
  {
    if ( a1 <= RtlpHeapErrorHandlerThreshold )
    {
      RtlpPrintErrorInformation();
      if ( RtlIsAnyDebuggerPresent() )
      {
        if ( (RtlpHpHeapFeatures & 8) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    RtlReportCriticalFailure(
      -1073740940,
      (unsigned __int64)&RtlpHeapFailureInfo,
      ((unsigned __int8)~RtlpHpHeapFeatures >> 3) & 1);
  }
}
