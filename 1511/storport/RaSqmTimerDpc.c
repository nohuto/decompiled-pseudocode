/*
 * XREFs of RaSqmTimerDpc @ 0x1C0028510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RaSqmTimerDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  RaSqmLogStatistics();
}
