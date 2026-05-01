/*
 * XREFs of ?OnOutOfMemory@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180047D20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@@Z @ 0x1800015F0 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::OnOutOfMemory(struct IUnknown *this, void *a2)
{
  ExecutionModel::ResourceSetImpl::QueueCallback(this - 1, 3, -1);
  return 0LL;
}
