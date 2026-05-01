/*
 * XREFs of ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180010F40
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180024FB0 (-AddRef@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@WBA@EAAKXZ @ 0x180024FC0 (-AddRef@ResourceManager@ExecutionModel@@WBA@EAAKXZ.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@WBI@EAAKXZ @ 0x180024FD0 (-AddRef@ResourceManager@ExecutionModel@@WBI@EAAKXZ.c)
 *     ?AddRef@ResourceManager@ExecutionModel@@WCA@EAAKXZ @ 0x180024FE0 (-AddRef@ResourceManager@ExecutionModel@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddRef(ExecutionModel::ResourceManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 25);
}
