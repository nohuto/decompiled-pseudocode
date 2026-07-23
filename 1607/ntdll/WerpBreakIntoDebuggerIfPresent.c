/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x180006B1C
 * Callers:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x180006B50 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
