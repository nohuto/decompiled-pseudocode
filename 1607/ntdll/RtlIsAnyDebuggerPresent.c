/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800F7334
 * Callers:
 *     RtlQueryCriticalSectionOwner @ 0x1800D38F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5040 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800E4CD0 (RtlAssert.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     RtlpReportHeapFailure @ 0x1800F9D18 (RtlpReportHeapFailure.c)
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
