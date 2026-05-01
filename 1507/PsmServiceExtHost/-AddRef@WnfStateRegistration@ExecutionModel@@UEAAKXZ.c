/*
 * XREFs of ?AddRef@WnfStateRegistration@ExecutionModel@@UEAAKXZ @ 0x1800251D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::WnfStateRegistration::AddRef(ExecutionModel::WnfStateRegistration *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 7);
}
