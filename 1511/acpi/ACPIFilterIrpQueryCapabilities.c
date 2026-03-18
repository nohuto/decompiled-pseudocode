/*
 * XREFs of ACPIFilterIrpQueryCapabilities @ 0x1C0070C00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C0070C24 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryCapabilities(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, 1, 1, 0);
}
