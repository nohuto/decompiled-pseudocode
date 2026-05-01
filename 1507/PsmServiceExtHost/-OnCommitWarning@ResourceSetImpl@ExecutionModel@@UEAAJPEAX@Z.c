/*
 * XREFs of ?OnCommitWarning@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180047CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@@Z @ 0x1800015F0 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::OnCommitWarning(struct IUnknown *this, void *a2)
{
  ExecutionModel::ResourceSetImpl::QueueCallback(this - 1, 2, -1);
  return 0LL;
}
