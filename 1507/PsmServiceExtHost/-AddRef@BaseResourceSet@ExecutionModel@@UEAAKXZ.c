/*
 * XREFs of ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800250D0
 * Callers:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@WFFI@EAAKXZ @ 0x180025100 (-AddRef@ExternalResourceSet@ExecutionModel@@WFFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddRef(ExecutionModel::BaseResourceSet *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 39);
}
