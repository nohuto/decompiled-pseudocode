/*
 * XREFs of ??1?$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800212E0
 * Callers:
 *     ?Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@@Z @ 0x180020FB4 (-Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEA.c)
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x1800474D4 (--_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800174E0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ATL::CComPtrBase<ExecutionModel::IResourcePolicyEngine>::~CComPtrBase<ExecutionModel::IResourcePolicyEngine>(
        ExecutionModel::ResourcePolicyEngine **a1,
        unsigned int a2)
{
  __int64 (__fastcall *v2)(ExecutionModel::ResourcePolicyEngine *, unsigned int); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v2 = *(__int64 (__fastcall **)(ExecutionModel::ResourcePolicyEngine *, unsigned int))(*(_QWORD *)*a1 + 16LL);
    if ( v2 == ExecutionModel::ResourcePolicyEngine::Release )
      return ExecutionModel::ResourcePolicyEngine::Release(*a1, a2);
    else
      return ((__int64 (__fastcall *)(ExecutionModel::ResourcePolicyEngine *))v2)(*a1);
  }
  return result;
}
