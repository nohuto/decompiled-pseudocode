/*
 * XREFs of ?Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@2@PEAUIResourcePolicyStore@2@PEAUIRMExecServicesProvider@2@@Z @ 0x180020A94
 * Callers:
 *     ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x1800208AC (-CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesProvider@1@PEAPEAVHostResources@1@@Z @ 0x180020B5C (-CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesPro.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::Initialize(
        struct IUnknown **this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct IUnknown *a4,
        struct IUnknown *a5)
{
  struct IUnknown **v8; // rcx

  if ( !a3 || !a4 )
    return 2147942487LL;
  v8 = this + 3;
  if ( *v8 != a3 )
    ATL::AtlComPtrAssign(v8, a3);
  if ( this[4] != a4 )
    ATL::AtlComPtrAssign(this + 4, a4);
  return ExecutionModel::CreateHostResources(
           a2,
           a5,
           (struct ExecutionModel::IRMExecServicesProvider *)(this + 10),
           (struct ExecutionModel::HostResources **)a4);
}
