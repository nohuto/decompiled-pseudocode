/*
 * XREFs of ndisMInitializePDCTaskClient @ 0x1C00D4760
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001B560 (NdisInitializeTimer.c)
 */

void (__fastcall *__fastcall ndisMInitializePDCTaskClient(
        char *FunctionContext))(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  void (__fastcall *result)(__int64, struct _NDIS_MINIPORT_BLOCK *); // rax

  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 5680),
    (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc,
    FunctionContext);
  result = ndisPdcTaskClientDisableTimeoutWorkItem;
  *((_QWORD *)FunctionContext + 726) = FunctionContext;
  *((_QWORD *)FunctionContext + 727) = ndisPdcTaskClientDisableTimeoutWorkItem;
  return result;
}
