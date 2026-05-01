/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18001DF7C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001D4F4 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001DA38 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001DB00 (-ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001DEB8 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 */

signed int __fastcall ExecutionModel::ResourceManager::Initialize(
        struct IUnknown *this,
        struct IUnknownVtbl *a2,
        struct IUnknown **a3)
{
  signed int result; // eax

  this[26].lpVtbl = a2;
  if ( a3 && a3[10] != &this[1] )
    ATL::AtlComPtrAssign(a3 + 10, this + 1);
  result = ExecutionModel::ResourceManager::ReadSettings((ExecutionModel::ResourceManager *)this);
  if ( result >= 0 )
  {
    result = ExecutionModel::ResourceManager::InitializePools((struct IUnknown **)this);
    if ( result >= 0 )
    {
      result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems((ExecutionModel::ResourceManager *)this);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
