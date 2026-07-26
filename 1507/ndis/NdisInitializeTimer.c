/*
 * XREFs of NdisInitializeTimer @ 0x1C001BB70
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C004A2FC (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C00ABC3C (ndisMInitializeInitMode.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00DCC7C (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DD23C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C00E7E60 (NdisMSetAttributesEx.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
