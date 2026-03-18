/*
 * XREFs of ACPIFilterIrpQueryPnpDeviceState @ 0x1C008EB90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C008EBE4 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryPnpDeviceState(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, 1, 1, 0);
}
