/*
 * XREFs of ??1?$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180023D08
 * Callers:
 *     _dynamic_atexit_destructor_for__g_pEnforcer__ @ 0x1800256A0 (_dynamic_atexit_destructor_for__g_pEnforcer__.c)
 *     _dynamic_atexit_destructor_for__g_pProxy__ @ 0x1800256B0 (_dynamic_atexit_destructor_for__g_pProxy__.c)
 *     _dynamic_atexit_destructor_for__g_pResourceManager__ @ 0x1800256C0 (_dynamic_atexit_destructor_for__g_pResourceManager__.c)
 *     _dynamic_atexit_destructor_for__g_spRMExecServices__ @ 0x1800256D0 (_dynamic_atexit_destructor_for__g_spRMExecServices__.c)
 *     _dynamic_atexit_destructor_for__g_pAppEnergyManager__ @ 0x1800256E0 (_dynamic_atexit_destructor_for__g_pAppEnergyManager__.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
