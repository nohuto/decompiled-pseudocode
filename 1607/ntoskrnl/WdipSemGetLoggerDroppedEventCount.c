/*
 * XREFs of WdipSemGetLoggerDroppedEventCount @ 0x1404C719C
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1404C6F2C (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     WmiQueryTraceInformation @ 0x1404C71EC (WmiQueryTraceInformation.c)
 */

NTSTATUS __fastcall WdipSemGetLoggerDroppedEventCount(int a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  int Buffer; // [rsp+40h] [rbp+8h] BYREF
  int TraceInformation; // [rsp+48h] [rbp+10h] BYREF

  Buffer = a1;
  TraceInformation = 0;
  if ( !a2 || !a1 )
    return -1073741811;
  result = WmiQueryTraceInformation(LoggerEventsLostClass, &TraceInformation, 4u, 0LL, &Buffer);
  if ( result >= 0 )
    *a2 = TraceInformation;
  return result;
}
