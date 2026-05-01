/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@@Z @ 0x18001BEA0
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001B2FC (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIM.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001B948 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BA14 (-ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BDE4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ExecutionModel::ResourceManager::Initialize(
        ExecutionModel::ResourceManager *this,
        struct _RM_SERVICE_GLOBALS *a2,
        struct IUnknown *a3,
        struct IModernResourceEnforcer *a4)
{
  struct IUnknown **v5; // rcx
  int result; // eax

  *((_QWORD *)this + 28) = a2;
  v5 = (struct IUnknown **)((char *)this + 24);
  if ( *v5 != a3 )
    ATL::AtlComPtrAssign(v5, a3);
  if ( a3 )
    ((void (__fastcall *)(struct IUnknown *, struct _RM_SERVICE_GLOBALS *, char *))a3->lpVtbl[1].AddRef)(
      a3,
      a2,
      (char *)this + 8);
  if ( a4 )
    (*(void (__fastcall **)(struct IModernResourceEnforcer *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 16);
  qword_18004D4A0 = (__int64)L"Main";
  result = ExecutionModel::ResourceManager::ReadSettings(this);
  if ( result >= 0 )
  {
    result = ExecutionModel::ResourceManager::InitializePools((struct IUnknown **)this);
    if ( result >= 0 )
    {
      result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems(this);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
