/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x1800229E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 *     RmpLaunchAllRpcServers @ 0x1800223D0 (RmpLaunchAllRpcServers.c)
 *     InitializeGameConfigRpcServer @ 0x180022B2C (InitializeGameConfigRpcServer.c)
 *     ?IntializePolicyEngineRpcServer@@YAJXZ @ 0x180022E20 (-IntializePolicyEngineRpcServer@@YAJXZ.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180022E94 (-CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PE.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180023DEC (-CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTER.c)
 *     ?CreateResourceEnforcer@ExecutionModel@@YAJAEAV?$CComPtr@UIResourceEnforcer@@@ATL@@@Z @ 0x180023FFC (-CreateResourceEnforcer@ExecutionModel@@YAJAEAV-$CComPtr@UIResourceEnforcer@@@ATL@@@Z.c)
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x18002407C (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     ?CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z @ 0x18002477C (-CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResourceManager@2@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180024FC8 (-InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResou.c)
 *     TraceLoggingRegisterEx @ 0x18002A778 (TraceLoggingRegisterEx.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     IsQueryUserTokenPresent @ 0x18002B914 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18002BA10 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     ShutdownGameConfigRpcServer @ 0x18004885C (ShutdownGameConfigRpcServer.c)
 */

__int64 __fastcall PsmInitializeServiceExtension4(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  __int64 result; // rax
  struct ExecutionModel::IRMExecServicesProvider **v5; // rdx
  struct IResourceEnforcer *v6; // rbx
  struct IResourceManager *v7; // rdx
  struct ExecutionModel::IRMExecServicesProvider *v8; // r9
  struct ExecutionModel::ResourceManager **v9; // [rsp+20h] [rbp-8h]
  struct IUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
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
          result = CreateModernResourceEnforcer(g_spRMExecServices, a1, (struct ModernResourceEnforcer **)&v10);
          v6 = (struct IResourceEnforcer *)v10;
          if ( (int)result >= 0 )
          {
            result = (unsigned int)RmpInitializeGlobalModules() | 0x10000000;
            if ( (int)result >= 0 )
            {
              result = ExecutionModel::CreateResourceManager(
                         g_pEnforcer,
                         v6,
                         g_spRMExecServices,
                         (struct ExecutionModel::IRMExecServicesProvider *)&v10,
                         v9);
              if ( (int)result >= 0 )
              {
                v7 = (struct IResourceManager *)g_pResourceManager;
                if ( g_pResourceManager != v10 )
                {
                  ATL::AtlComPtrAssign(&g_pResourceManager, v10);
                  v7 = (struct IResourceManager *)g_pResourceManager;
                }
                result = InitializeResourceManagerServerProxy(g_spRMExecServices, v7, &g_pProxy);
                if ( (int)result >= 0 )
                {
                  result = RmpLaunchAllRpcServers();
                  if ( (int)result >= 0 )
                  {
                    result = ExecutionModel::CreateResourcePolicyEngineServers(
                               (ExecutionModel *)g_pResourceManager,
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
            return (*(__int64 (__fastcall **)(struct IResourceEnforcer *))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
    }
  }
  return result;
}
