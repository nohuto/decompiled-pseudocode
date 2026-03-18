/*
 * XREFs of ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C003DE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDpc::FxDpcThunk(_KDPC *Dpc, FxDpc *DeferredContext, void *SystemArgument1, void *SystemArgument2)
{
  FxDpc::DpcHandler(DeferredContext, (_KDPC *)DeferredContext, SystemArgument1, SystemArgument2);
}
