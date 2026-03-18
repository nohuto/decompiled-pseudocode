/*
 * XREFs of ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C009EE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::_PowerThreadEnqueue(FxSystemThread **Context, _WORK_QUEUE_ITEM *WorkItem)
{
  FxSystemThread::QueueWorkItem(Context[149], WorkItem);
}
