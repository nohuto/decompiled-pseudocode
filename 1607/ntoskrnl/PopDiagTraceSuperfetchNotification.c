/*
 * XREFs of PopDiagTraceSuperfetchNotification @ 0x140530408
 * Callers:
 *     PopDispatchSuperfetchNotification @ 0x1405303B4 (PopDispatchSuperfetchNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiagTraceSuperfetchNotification(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax

  v1 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SUPERFETCH_START;
  if ( !a1 )
    v1 = &POP_ETW_EVENT_SUPERFETCH_STOP;
  PopDiagTraceEventNoPayload(v1);
}
