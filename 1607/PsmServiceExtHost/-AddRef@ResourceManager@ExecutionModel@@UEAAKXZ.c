/*
 * XREFs of ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18000E450
 * Callers:
 *     ?AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180020AC0 (-AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@WBA@EAAKXZ @ 0x180020AD0 (-AddRef@ResourceManager@ExecutionModel@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddRef(ExecutionModel::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 25);
}
