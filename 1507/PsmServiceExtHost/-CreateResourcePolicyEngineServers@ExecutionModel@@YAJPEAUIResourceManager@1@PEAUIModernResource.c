/*
 * XREFs of ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x1800205EC (-InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPE.c)
 *     ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x1800208AC (-CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180020988 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ??1?$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800212E0 (--1-$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180021D24 (-CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageMa.c)
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180021FE4 (-CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::CreateResourcePolicyEngineServers(
        struct IResourceManager *this,
        struct IResourceManager *a2,
        struct IModernResourceEnforcer *a3,
        struct ExecutionModel::IRMExecServicesProvider *a4)
{
  struct IResourceManager *v4; // rdi
  struct IUnknown *v5; // rbx
  int PolicyStore; // eax
  int PolicyEngine; // r15d
  int AppEnergyManager; // eax
  ExecutionModel *v12; // rcx
  struct ExecutionModel::IResourcePolicyEngine *v13; // rsi
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v14; // rax
  ExecutionModel *v16; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v17; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown *v18; // [rsp+40h] [rbp-20h] BYREF
  struct IResourceManager *v19; // [rsp+48h] [rbp-18h] BYREF
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v20; // [rsp+50h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+A8h] [rbp+48h] BYREF

  v20 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  if ( g_pResourcePolicyEngineServerProxy && g_pAppEnergyManager )
  {
    PolicyEngine = 0;
    goto LABEL_22;
  }
  PolicyStore = ExecutionModel::CreatePolicyStore(
                  (ExecutionModel *)&v19,
                  (struct ExecutionModel::IResourcePolicyStore **)a2);
  v4 = v19;
  PolicyEngine = PolicyStore;
  if ( PolicyStore < 0 )
    goto LABEL_16;
  AppEnergyManager = CreateAppEnergyManager(a3, (struct IAppEnergyUsageManager **)&v17);
  v5 = v17;
  PolicyEngine = AppEnergyManager;
  if ( AppEnergyManager < 0 )
    goto LABEL_16;
  PolicyEngine = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, ExecutionModel **))v17->lpVtbl->QueryInterface)(
                   v17,
                   &GUID_39534eb9_29bf_4cf7_a077_95d02ab8e79b,
                   &v16);
  if ( PolicyEngine < 0 )
    goto LABEL_16;
  v12 = v16;
  if ( v16 )
  {
    if ( g_pAppEnergyManager != v5 )
    {
      ATL::AtlComPtrAssign(&g_pAppEnergyManager, v5);
      v12 = v16;
    }
    PolicyEngine = ExecutionModel::CreatePolicyEngine(
                     v12,
                     this,
                     v4,
                     a3,
                     (struct ExecutionModel::IRMExecServicesProvider *)&v18);
    if ( PolicyEngine >= 0 )
    {
      v13 = (struct ExecutionModel::IResourcePolicyEngine *)v18;
      if ( v21 != v18 )
        ATL::AtlComQIPtrAssign(&v21, v18, &GUID_9a126b80_b99e_42f7_906b_38c1d41fd8a8);
      if ( v21 )
      {
        PolicyEngine = ((__int64 (__fastcall *)(struct IResourceManager *, struct IUnknown *))a2->lpVtbl->Register)(
                         a2,
                         v21);
        if ( PolicyEngine >= 0 )
        {
          PolicyEngine = ExecutionModel::ResourcePolicyEngineServerProxy::InitializeResourcePolicyEngineServerProxy(
                           v13,
                           (struct ExecutionModel::IResourcePolicyStore *)v4,
                           &v20);
          v14 = g_pResourcePolicyEngineServerProxy;
          if ( PolicyEngine >= 0 )
            v14 = v20;
          g_pResourcePolicyEngineServerProxy = v14;
        }
      }
      else
      {
        PolicyEngine = -2147024882;
      }
    }
LABEL_16:
    if ( v16 )
      (*(void (__fastcall **)(ExecutionModel *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_18;
  }
  PolicyEngine = -2147024882;
LABEL_18:
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
LABEL_22:
  ATL::CComPtrBase<ExecutionModel::IResourcePolicyEngine>::~CComPtrBase<ExecutionModel::IResourcePolicyEngine>(
    (ExecutionModel::ResourcePolicyEngine **)&v18,
    (unsigned int)a2);
  if ( v4 )
    ((void (__fastcall *)(struct IResourceManager *))v4->lpVtbl->Release)(v4);
  return (unsigned int)PolicyEngine;
}
