/*
 * XREFs of PopDiagTracePreSleepCallbacks @ 0x14052FE58
 * Callers:
 *     PopNotifyCallbacksPreSleep @ 0x14052FE18 (PopNotifyCallbacksPreSleep.c)
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
