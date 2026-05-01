/*
 * XREFs of RmpEnforcementApplyLimits @ 0x180042478
 * Callers:
 *     ?SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003A680 (-SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEME.c)
 *     RmpCoreApiSetHostLimits @ 0x180042040 (RmpCoreApiSetHostLimits.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x18003AD78 (RmpEnforcementApplyLimitsProcessHost.c)
 */

NTSTATUS __fastcall RmpEnforcementApplyLimits(__int64 a1, __int64 a2)
{
  int v4; // ecx
  NTSTATUS result; // eax

  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 )
  {
    if ( v4 != 1 )
      return -1073741811;
    result = RmpEnforcementApplyLimitsProcessHost(a1, a2);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)RmSvcGlobals + 10) + 32LL))(
               *((_QWORD *)RmSvcGlobals + 10),
               a1,
               a2);
  }
  if ( result >= 0 )
  {
    result = 0;
    *(_OWORD *)(a1 + 624) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 640) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 656) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 672) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 688) = *(_QWORD *)(a2 + 64);
  }
  return result;
}
