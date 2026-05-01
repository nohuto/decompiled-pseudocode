/*
 * XREFs of ?Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@@Z @ 0x180020FB4
 * Callers:
 *     ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x1800205EC (-InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800212E0 (--1-$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Initialize(
        struct IUnknown **this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  unsigned int v3; // edi
  struct IUnknown v7; // rax
  struct IUnknown *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 && a3 )
  {
    v7.lpVtbl = a2->lpVtbl;
    v9 = a2;
    ((void (__fastcall *)(struct IUnknown *))v7.lpVtbl->AddRef)(a2);
    if ( this[12] != a2 )
      ATL::AtlComPtrAssign(this + 12, a2);
    ATL::CComPtrBase<ExecutionModel::IResourcePolicyEngine>::~CComPtrBase<ExecutionModel::IResourcePolicyEngine>(&v9);
    if ( this[13] != a3 )
      ATL::AtlComPtrAssign(this + 13, a3);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
