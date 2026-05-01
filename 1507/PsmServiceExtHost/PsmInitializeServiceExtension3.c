/*
 * XREFs of PsmInitializeServiceExtension3 @ 0x180022550
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE3@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18002069C (-CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTER.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResourceManager@2@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180020C64 (-InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResou.c)
 *     ?CreateResourceEnforcer@ExecutionModel@@YAJAEAV?$CComPtr@UIResourceEnforcer@@@ATL@@@Z @ 0x180021494 (-CreateResourceEnforcer@ExecutionModel@@YAJAEAV-$CComPtr@UIResourceEnforcer@@@ATL@@@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180021514 (-CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PE.c)
 *     ?CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z @ 0x180021A3C (-CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z.c)
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     InitializeGameConfigRpcServer @ 0x18002269C (InitializeGameConfigRpcServer.c)
 *     ?IntializePolicyEngineRpcServer@@YAJXZ @ 0x180022774 (-IntializePolicyEngineRpcServer@@YAJXZ.c)
 *     RmpLaunchAllRpcServers @ 0x1800227D0 (RmpLaunchAllRpcServers.c)
 *     TraceLoggingRegisterEx @ 0x180023B78 (TraceLoggingRegisterEx.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     IsQueryUserTokenPresent @ 0x180024B74 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180024C70 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     ShutdownGameConfigRpcServer @ 0x1800438BC (ShutdownGameConfigRpcServer.c)
 */

__int64 __fastcall PsmInitializeServiceExtension3(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE3 *a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  __int64 result; // rax
  struct ExecutionModel::IRMExecServicesProvider **v5; // rdx
  struct IUnknown *v6; // rbx
  struct IUnknown *v7; // rdx
  struct ExecutionModel::IRMExecServicesProvider *v8; // r9
  struct IUnknown *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  TraceLoggingRegisterEx(a1, a2, a3);
  result = IsPsmQueryBackgroundActivationTypePresent();
  if ( (_BYTE)result )
  {
    result = IsQueryUserTokenPresent();
    if ( (_BYTE)result )
    {
      result = ExecutionModel::CreateRMExecServicesProvider((ExecutionModel *)&g_spRMExecServices, v5);
      if ( (int)result >= 0 )
      {
        result = ExecutionModel::CreateResourceEnforcer();
        if ( (int)result >= 0 )
        {
          result = CreateModernResourceEnforcer(g_spRMExecServices, a1, (struct ModernResourceEnforcer **)&v9);
          v6 = v9;
          if ( (int)result >= 0 )
          {
            result = (unsigned int)RmpInitializeGlobalModules() | 0x10000000;
            if ( (int)result >= 0 )
            {
              result = ExecutionModel::CreateResourceManager(
                         (struct IUnknown *)g_pEnforcer,
                         v6,
                         g_spRMExecServices,
                         (struct ExecutionModel::IRMExecServicesProvider *)&v9);
              if ( (int)result >= 0 )
              {
                v7 = g_pResourceManager;
                if ( g_pResourceManager != v9 )
                {
                  ATL::AtlComPtrAssign(&g_pResourceManager, v9);
                  v7 = g_pResourceManager;
                }
                result = InitializeResourceManagerServerProxy(g_spRMExecServices, v7, (struct IUnknown ***)&g_pProxy);
                if ( (int)result >= 0 )
                {
                  result = RmpLaunchAllRpcServers();
                  if ( (int)result >= 0 )
                  {
                    result = ExecutionModel::CreateResourcePolicyEngineServers(
                               (struct IResourceManager *)g_pResourceManager,
                               (struct IResourceManager *)v6,
                               g_spRMExecServices,
                               v8);
                    if ( (int)result >= 0 )
                    {
                      result = IntializePolicyEngineRpcServer();
                      if ( (int)result >= 0 )
                      {
                        result = InitializeGameConfigRpcServer();
                        if ( (int)result < 0 )
                          result = ShutdownGameConfigRpcServer();
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v6 )
            return ((__int64 (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
        }
      }
    }
  }
  return result;
}
