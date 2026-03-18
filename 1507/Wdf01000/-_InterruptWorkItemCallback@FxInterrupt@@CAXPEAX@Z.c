/*
 * XREFs of ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C00A2300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall FxInterrupt::_InterruptWorkItemCallback(FxInterrupt *DeferredContext)
{
  FxInterrupt::WorkItemHandler(DeferredContext);
}
