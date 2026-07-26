/*
 * XREFs of NdisInitializeTimer @ 0x1C001B560
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C004F5B8 (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C00ABFB8 (ndisMInitializeInitMode.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00D4760 (ndisMInitializePDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00DC4F4 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DCACC (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C00E84E0 (NdisMSetAttributesEx.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisInitializePeriodicReceives @ 0x1C01024DC (ndisInitializePeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
