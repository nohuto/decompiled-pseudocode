/*
 * XREFs of ?OnRelease@ResourceSetImpl@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x180047D50
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@@Z @ 0x1800015F0 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::OnRelease(__int64 a1, __int64 a2, int a3)
{
  ExecutionModel::ResourceSetImpl::QueueCallback((struct IUnknown *)(a1 - 8), 0, a3);
  return 0LL;
}
