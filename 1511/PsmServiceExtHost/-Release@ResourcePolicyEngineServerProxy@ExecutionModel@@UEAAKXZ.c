/*
 * XREFs of ?Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ @ 0x1800145F0
 * Callers:
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D130 (--_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Release(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    ExecutionModel::ResourcePolicyEngineServerProxy::`scalar deleting destructor'(this, a2);
  return v2;
}
