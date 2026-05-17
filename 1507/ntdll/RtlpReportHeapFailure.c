/*
 * XREFs of RtlpReportHeapFailure @ 0x1800F02E4
 * Callers:
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlIsAnyDebuggerPresent @ 0x1800EA538 (RtlIsAnyDebuggerPresent.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800EEDD8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpPrintErrorInformation @ 0x1800EFDB8 (RtlpPrintErrorInformation.c)
 */

void __fastcall RtlpReportHeapFailure(int a1)
{
  if ( RtlpDisableBreakOnFailureCookie == (unsigned int)RtlpGetModifiedProcessCookie() )
  {
    if ( a1 <= RtlpHeapErrorHandlerThreshold )
    {
      RtlpPrintErrorInformation();
      if ( RtlIsAnyDebuggerPresent() )
        __debugbreak();
    }
  }
  else
  {
    RtlReportCriticalFailure(-1073740940, (unsigned __int64)&RtlpHeapFailureInfo);
  }
}
