/*
 * XREFs of ?AddRef@ResourcePolicyStore@ExecutionModel@@UEAAKXZ @ 0x1800170D0
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::AddRef(ExecutionModel::ResourcePolicyStore *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}
