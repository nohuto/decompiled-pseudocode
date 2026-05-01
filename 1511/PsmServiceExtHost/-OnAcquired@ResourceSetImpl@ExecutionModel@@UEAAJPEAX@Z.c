/*
 * XREFs of ?OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180003CA0
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180003F40 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@PEAX@Z @ 0x180003A68 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::OnAcquired(struct IUnknown *this, __int64 a2)
{
  ExecutionModel::ResourceSetImpl::QueueCallback(this - 1, 1, -1, a2);
  return 0LL;
}
