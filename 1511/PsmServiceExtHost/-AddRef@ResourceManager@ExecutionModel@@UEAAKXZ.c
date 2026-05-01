/*
 * XREFs of ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18000F1D0
 * Callers:
 *     ?AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x18002BD50 (-AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@WBA@EAAKXZ @ 0x18002BD60 (-AddRef@ResourceManager@ExecutionModel@@WBA@EAAKXZ.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@WBI@EAAKXZ @ 0x18002BD70 (-AddRef@ResourceManager@ExecutionModel@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddRef(ExecutionModel::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 25);
}
