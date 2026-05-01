/*
 * XREFs of ?AddRef@ResourcePolicyStore@ExecutionModel@@UEAAKXZ @ 0x1800057C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::AddRef(ExecutionModel::ResourcePolicyStore *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}
