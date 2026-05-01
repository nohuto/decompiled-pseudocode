/*
 * XREFs of ?OnOutOfMemory@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x18004ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@PEAX@Z @ 0x180003A68 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::OnOutOfMemory(struct IUnknown *this, void *a2)
{
  ExecutionModel::ResourceSetImpl::QueueCallback(this - 1, 3, -1, 0LL);
  return 0LL;
}
