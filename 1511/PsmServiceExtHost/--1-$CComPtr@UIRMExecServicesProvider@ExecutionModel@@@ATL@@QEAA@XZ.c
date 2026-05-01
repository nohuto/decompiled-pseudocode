/*
 * XREFs of ??1?$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004648
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x18002407C (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     ?Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@@Z @ 0x180025614 (-Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEA.c)
 *     _dynamic_atexit_destructor_for__g_pEnforcer__ @ 0x18002C460 (_dynamic_atexit_destructor_for__g_pEnforcer__.c)
 *     _dynamic_atexit_destructor_for__g_pProxy__ @ 0x18002C470 (_dynamic_atexit_destructor_for__g_pProxy__.c)
 *     _dynamic_atexit_destructor_for__g_pResourceManager__ @ 0x18002C480 (_dynamic_atexit_destructor_for__g_pResourceManager__.c)
 *     _dynamic_atexit_destructor_for__g_spRMExecServices__ @ 0x18002C490 (_dynamic_atexit_destructor_for__g_spRMExecServices__.c)
 *     _dynamic_atexit_destructor_for__g_pAppEnergyManager__ @ 0x18002C4A0 (_dynamic_atexit_destructor_for__g_pAppEnergyManager__.c)
 *     ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D130 (--_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ??1HostResources@ExecutionModel@@QEAA@XZ @ 0x18004D3A4 (--1HostResources@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
