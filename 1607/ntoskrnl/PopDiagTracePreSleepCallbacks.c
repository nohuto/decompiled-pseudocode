/*
 * XREFs of PopDiagTracePreSleepCallbacks @ 0x140530398
 * Callers:
 *     PopNotifyCallbacksPreSleep @ 0x140530358 (PopNotifyCallbacksPreSleep.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiagTracePreSleepCallbacks(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax

  v1 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START;
  if ( !a1 )
    v1 = &POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP;
  PopDiagTraceEventNoPayload(v1);
}
