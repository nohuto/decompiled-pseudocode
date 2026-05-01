/*
 * XREFs of RmpEnforcementApplyLimitsProcessHost @ 0x18002B048
 * Callers:
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     ?SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18002AA90 (-SetProcessConfig@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEME.c)
 * Callees:
 *     RmpActivityHostApplyLimits @ 0x18002AAB0 (RmpActivityHostApplyLimits.c)
 */

NTSTATUS __fastcall RmpEnforcementApplyLimitsProcessHost(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  NTSTATUS result; // eax
  int v6; // ecx
  __int16 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(void **)(a1 + 728);
  if ( *(_DWORD *)(a2 + 44) != 0x100000
    || (ProcessInformation = 256,
        v8 = 1,
        v9 = 1,
        result = NtSetInformationProcess(v3, ProcessPriorityClass, &ProcessInformation, 2u),
        result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessPagePriority, &v8, 4u), result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessIoPriority, &v9, 4u), result >= 0) )
  {
    v6 = *(_DWORD *)(a2 + 44);
    if ( v6 )
    {
      if ( v6 == 32 )
        goto LABEL_13;
      if ( v6 != 64 )
      {
        if ( v6 != 128 && v6 != 0x4000 && v6 != 0x8000 )
        {
          if ( v6 != 0x100000 )
            return -1073741823;
          goto LABEL_14;
        }
LABEL_13:
        *(_DWORD *)(a2 + 44) = v6;
        return RmpActivityHostApplyLimits(a1, a2);
      }
    }
LABEL_14:
    *(_DWORD *)(a2 + 44) = 64;
    return RmpActivityHostApplyLimits(a1, a2);
  }
  return result;
}
