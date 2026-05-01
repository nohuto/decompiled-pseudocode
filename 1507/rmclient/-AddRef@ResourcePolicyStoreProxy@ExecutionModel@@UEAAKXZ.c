/*
 * XREFs of ?AddRef@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ @ 0x180009290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStoreProxy::AddRef(ExecutionModel::ResourcePolicyStoreProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
