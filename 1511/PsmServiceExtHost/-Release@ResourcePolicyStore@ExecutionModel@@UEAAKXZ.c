/*
 * XREFs of ?Release@ResourcePolicyStore@ExecutionModel@@UEAAKXZ @ 0x180026570
 * Callers:
 *     <none>
 * Callees:
 *     ??_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z @ 0x18004C3CC (--_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::Release(
        ExecutionModel::ResourcePolicyStore *this,
        unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 20);
  if ( !v2 && this )
    ExecutionModel::ResourcePolicyStore::`scalar deleting destructor'(this, a2);
  return v2;
}
