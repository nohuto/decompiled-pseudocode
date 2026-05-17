/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x180006B2C
 * Callers:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x180006B60 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(unsigned int *a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(a1, a2, 0LL);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess(-1LL, *a1);
  }
}
