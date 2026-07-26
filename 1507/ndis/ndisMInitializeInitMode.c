/*
 * XREFs of ndisMInitializeInitMode @ 0x1C00ABC3C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001BB70 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializeInitMode(PVOID FunctionContext)
{
  NdisInitializeTimer((PNDIS_TIMER)FunctionContext + 22, (PNDIS_TIMER_FUNCTION)ndisInitModeTimeoutDpc, FunctionContext);
  *((_QWORD *)FunctionContext + 368) = FunctionContext;
  *((_QWORD *)FunctionContext + 369) = &ndisInitModeTimeoutWorkItem;
  KeInitializeEvent((PRKEVENT)FunctionContext + 126, NotificationEvent, 1u);
}
