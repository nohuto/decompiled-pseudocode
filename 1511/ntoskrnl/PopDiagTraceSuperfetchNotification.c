/*
 * XREFs of PopDiagTraceSuperfetchNotification @ 0x1404F7538
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
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
