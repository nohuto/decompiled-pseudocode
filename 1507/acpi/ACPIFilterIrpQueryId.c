/*
 * XREFs of ACPIFilterIrpQueryId @ 0x1C0072AD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C0070D34 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryId(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  if ( (AcpiOverrideAttributes & 0x100000) != 0 )
    return ACPIIrpSetPagableCompletionRoutineAndForward(a1, a2, (__int64)ACPIFilterIrpQueryIdCompletion, a4, 1, 0, 0);
  else
    return ACPIDispatchForwardIrp((ULONG_PTR)a1, a2);
}
