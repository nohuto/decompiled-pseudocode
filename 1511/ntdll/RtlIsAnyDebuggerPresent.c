/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800EE648
 * Callers:
 *     RtlQueryCriticalSectionOwner @ 0x1800CBC40 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x1800CD0E0 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800DBA70 (RtlAssert.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E8AF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 *     RtlpReportHeapFailure @ 0x1800F223C (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

unsigned __int8 RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
