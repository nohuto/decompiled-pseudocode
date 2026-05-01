/*
 * XREFs of ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ @ 0x18003F090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesInternal(ExecutionModel::BaseResourceSet *this)
{
  return ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
}
