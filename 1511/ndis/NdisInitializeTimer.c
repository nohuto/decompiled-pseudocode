/*
 * XREFs of NdisInitializeTimer @ 0x1C0016F70
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C004AB9C (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C009A2F4 (ndisMInitializeInitMode.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00D65CC (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D6B8C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C00E2D50 (NdisMSetAttributesEx.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisInitializePeriodicReceives @ 0x1C00FE168 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
