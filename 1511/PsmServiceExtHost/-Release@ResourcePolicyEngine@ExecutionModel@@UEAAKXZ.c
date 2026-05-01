/*
 * XREFs of ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800193B0
 * Callers:
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180013628 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@W7EAAKXZ @ 0x18002BF30 (-Release@ResourcePolicyEngine@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z @ 0x18004CA94 (--_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::Release(
        ExecutionModel::ResourcePolicyEngine *this,
        unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
    ExecutionModel::ResourcePolicyEngine::`scalar deleting destructor'(this, a2);
  return v2;
}
