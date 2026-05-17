/*
 * XREFs of RtlpReportHeapFailure @ 0x1800F223C
 * Callers:
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlpGetModifiedProcessCookie @ 0x18004BF78 (RtlpGetModifiedProcessCookie.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800EE648 (RtlIsAnyDebuggerPresent.c)
 *     RtlpPrintErrorInformation @ 0x1800F1D10 (RtlpPrintErrorInformation.c)
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
