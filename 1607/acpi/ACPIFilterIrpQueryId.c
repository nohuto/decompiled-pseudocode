/*
 * XREFs of ACPIFilterIrpQueryId @ 0x1C0083E40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C008EBE4 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryId(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( (AcpiOverrideAttributes & 0x300000) != 0 )
    return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, 1, 0, 0);
  else
    return ACPIDispatchForwardIrp((ULONG_PTR)a1, a2);
}
