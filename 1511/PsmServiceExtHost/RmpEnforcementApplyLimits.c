/*
 * XREFs of RmpEnforcementApplyLimits @ 0x1800400B4
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003FA00 (-SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEME.c)
 *     RmpActivityHostComputeAndApplyAffinity @ 0x180040BF4 (RmpActivityHostComputeAndApplyAffinity.c)
 *     RmpCoreApiSetHostLimits @ 0x180046C70 (RmpCoreApiSetHostLimits.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     RmpSystemApplyLimits @ 0x1800474FC (RmpSystemApplyLimits.c)
 */

__int64 __fastcall RmpEnforcementApplyLimits(__int64 a1, __int64 a2)
{
  int v4; // r15d

  v4 = RmpSystemApplyLimits();
  if ( v4 >= 0 && !*(_DWORD *)(a1 + 40) )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _QWORD, _QWORD))(**((_QWORD **)RmSvcGlobals + 262)
                                                                                     + 368LL))(
      *((_QWORD *)RmSvcGlobals + 262),
      a1 + 48,
      a1 + 512,
      *(unsigned int *)(a1 + 580),
      *(_DWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a2 + 16));
  return (unsigned int)v4;
}
