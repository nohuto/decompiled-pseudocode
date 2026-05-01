/*
 * XREFs of ?ForceReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x18000FF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::ForceReleaseResources(ExecutionModel::ResourceSetProxy *this)
{
  return ExecutionModel::ResourceSetProxy::DoReleaseResources((__int64)this, 1);
}
