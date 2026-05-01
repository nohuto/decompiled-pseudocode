/*
 * XREFs of ?AddRef@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ @ 0x180025240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::AddRef(
        ExecutionModel::ResourcePolicyEngineServerProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
