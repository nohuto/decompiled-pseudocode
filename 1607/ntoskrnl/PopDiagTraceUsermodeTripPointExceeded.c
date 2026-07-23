/*
 * XREFs of PopDiagTraceUsermodeTripPointExceeded @ 0x140672298
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140670490 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     PopDiagTraceTripPointExceeded @ 0x1406720C4 (PopDiagTraceTripPointExceeded.c)
 */

char __fastcall PopDiagTraceUsermodeTripPointExceeded(unsigned __int16 a1, __int64 a2, int a3, char a4)
{
  const EVENT_DESCRIPTOR *v7; // r9

  if ( a4 )
  {
    PopDiagTraceTripPointExceeded(a1, a2, a3, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
    v7 = &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM;
  }
  else
  {
    PopDiagTraceTripPointExceeded(a1, a2, a3, &POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC);
    v7 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_S4_TRIP_POINT_SYSTEM;
  }
  return PopDiagTraceTripPointExceeded(a1, a2, a3, v7);
}
