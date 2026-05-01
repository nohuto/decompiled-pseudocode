/*
 * XREFs of ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800370F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesInternal(ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  return 0LL;
}
