/*
 * XREFs of ?Release@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ @ 0x180005430
 * Callers:
 *     <none>
 * Callees:
 *     ??_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z @ 0x180009468 (--_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStoreProxy::Release(
        ExecutionModel::ResourcePolicyStoreProxy *this,
        unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    ExecutionModel::ResourcePolicyStoreProxy::`scalar deleting destructor'(this, a2);
  return v2;
}
