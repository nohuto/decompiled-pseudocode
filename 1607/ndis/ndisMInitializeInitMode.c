/*
 * XREFs of ndisMInitializeInitMode @ 0x1C00ABFB8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001B560 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializeInitMode(PVOID FunctionContext)
{
  NdisInitializeTimer((PNDIS_TIMER)FunctionContext + 22, (PNDIS_TIMER_FUNCTION)ndisInitModeTimeoutDpc, FunctionContext);
  *((_QWORD *)FunctionContext + 368) = FunctionContext;
  *((_QWORD *)FunctionContext + 369) = &ndisInitModeTimeoutWorkItem;
  KeInitializeEvent((PRKEVENT)FunctionContext + 126, NotificationEvent, 1u);
}
