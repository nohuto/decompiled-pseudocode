/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x180020044
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180021514 (-CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001F8F4 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001FD34 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

int __fastcall ExecutionModel::ResourceManager::Initialize(
        struct IUnknown **this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct IUnknown *a4)
{
  struct IUnknown **v6; // rcx
  char *v9; // rbp
  char *v10; // rbp
  int result; // eax

  v6 = this + 14;
  if ( *v6 != a2 )
    ATL::AtlComPtrAssign(v6, a2);
  if ( this[15] != a3 )
    ATL::AtlComPtrAssign(this + 15, a3);
  if ( this[16] != a4 )
    ATL::AtlComPtrAssign(this + 16, a4);
  if ( a2 )
  {
    v9 = (char *)(this + 2);
    if ( !this )
      v9 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, char *))a2->lpVtbl[1].AddRef)(a2, v9);
  }
  if ( a3 )
  {
    v10 = (char *)(this + 3);
    if ( !this )
      v10 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, char *))a3->lpVtbl[1].QueryInterface)(a3, v10);
  }
  qword_18006A098 = (__int64)L"Main";
  result = ((__int64 (__fastcall *)(struct IUnknown **))(*this)[32].lpVtbl)(this);
  if ( result >= 0 )
  {
    result = ExecutionModel::ResourceManager::InitializePools(this);
    if ( result >= 0 )
    {
      result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems((ExecutionModel::ResourceManager *)this);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
