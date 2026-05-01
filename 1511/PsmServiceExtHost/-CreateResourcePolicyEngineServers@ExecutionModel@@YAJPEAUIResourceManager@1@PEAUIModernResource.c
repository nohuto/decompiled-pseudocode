/*
 * XREFs of ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x18002407C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??1?$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004648 (--1-$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180024288 (-CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageMa.c)
 *     ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x180024E34 (-InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPE.c)
 *     ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x180024EE4 (-CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180025184 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180025954 (-CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::CreateResourcePolicyEngineServers(
        ExecutionModel *this,
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
  struct ExecutionModel::IResourcePolicyEngine **v16; // [rsp+28h] [rbp-38h]
  ExecutionModel *v17; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v18; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown *v19; // [rsp+40h] [rbp-20h] BYREF
  struct IResourceManager *v20; // [rsp+48h] [rbp-18h] BYREF
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v21; // [rsp+50h] [rbp-10h] BYREF
  struct IUnknown *v22; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  if ( g_pResourcePolicyEngineServerProxy && g_pAppEnergyManager )
  {
    PolicyEngine = 0;
    goto LABEL_22;
  }
  PolicyStore = ExecutionModel::CreatePolicyStore(
                  (ExecutionModel *)&v20,
                  (struct ExecutionModel::IResourcePolicyStore **)a2);
  v4 = v20;
  PolicyEngine = PolicyStore;
  if ( PolicyStore < 0 )
    goto LABEL_16;
  AppEnergyManager = CreateAppEnergyManager(a3, (struct IAppEnergyUsageManager **)&v18);
  v5 = v18;
  PolicyEngine = AppEnergyManager;
  if ( AppEnergyManager < 0 )
    goto LABEL_16;
  PolicyEngine = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, ExecutionModel **))v18->lpVtbl->QueryInterface)(
                   v18,
                   &GUID_39534eb9_29bf_4cf7_a077_95d02ab8e79b,
                   &v17);
  if ( PolicyEngine < 0 )
    goto LABEL_16;
  v12 = v17;
  if ( v17 )
  {
    if ( g_pAppEnergyManager != v5 )
    {
      ATL::AtlComPtrAssign(&g_pAppEnergyManager, v5);
      v12 = v17;
    }
    PolicyEngine = ExecutionModel::CreatePolicyEngine(
                     v12,
                     this,
                     v4,
                     a3,
                     (struct ExecutionModel::IRMExecServicesProvider *)&v19,
                     v16);
    if ( PolicyEngine >= 0 )
    {
      v13 = (struct ExecutionModel::IResourcePolicyEngine *)v19;
      if ( v22 != v19 )
        ATL::AtlComQIPtrAssign(&v22, v19, &GUID_9a126b80_b99e_42f7_906b_38c1d41fd8a8);
      if ( v22 )
      {
        PolicyEngine = ((__int64 (__fastcall *)(struct IResourceManager *, struct IUnknown *))a2->lpVtbl->Register)(
                         a2,
                         v22);
        if ( PolicyEngine >= 0 )
        {
          PolicyEngine = ExecutionModel::ResourcePolicyEngineServerProxy::InitializeResourcePolicyEngineServerProxy(
                           v13,
                           (struct ExecutionModel::IResourcePolicyStore *)v4,
                           &v21);
          v14 = g_pResourcePolicyEngineServerProxy;
          if ( PolicyEngine >= 0 )
            v14 = v21;
          g_pResourcePolicyEngineServerProxy = v14;
        }
      }
      else
      {
        PolicyEngine = -2147024882;
      }
    }
LABEL_16:
    if ( v17 )
      (*(void (__fastcall **)(ExecutionModel *))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_18;
  }
  PolicyEngine = -2147024882;
LABEL_18:
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
LABEL_22:
  ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>(&v19);
  if ( v4 )
    ((void (__fastcall *)(struct IResourceManager *))v4->lpVtbl->Release)(v4);
  return (unsigned int)PolicyEngine;
}
