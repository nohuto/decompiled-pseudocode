/*
 * XREFs of RmpEnforcementApplyLimitsProcessHost @ 0x18003AD78
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpEnforcementApplyLimits @ 0x180042478 (RmpEnforcementApplyLimits.c)
 * Callees:
 *     RmpActivityHostApplyLimits @ 0x18003A6A0 (RmpActivityHostApplyLimits.c)
 */

NTSTATUS __fastcall RmpEnforcementApplyLimitsProcessHost(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  NTSTATUS result; // eax
  __int16 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(void **)(a1 + 696);
  if ( *(_DWORD *)(a2 + 56) != 0x100000
    || (ProcessInformation = 256,
        v7 = 1,
        v8 = 1,
        result = NtSetInformationProcess(v3, ProcessPriorityClass, &ProcessInformation, 2u),
        result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessPagePriority, &v7, 4u), result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessIoPriority, &v8, 4u), result >= 0) )
  {
    if ( *(_DWORD *)(a2 + 56) != 32 )
    {
      if ( *(_DWORD *)(a2 + 56) == 64 )
      {
LABEL_12:
        *(_DWORD *)(a2 + 56) = 64;
        return RmpActivityHostApplyLimits(a1, (__int128 *)a2);
      }
      if ( *(_DWORD *)(a2 + 56) != 128 && *(_DWORD *)(a2 + 56) != 0x4000 && *(_DWORD *)(a2 + 56) != 0x8000 )
      {
        if ( *(_DWORD *)(a2 + 56) != 0x100000 )
          return -1073741823;
        goto LABEL_12;
      }
    }
    *(_DWORD *)(a2 + 56) = *(_DWORD *)(a2 + 56);
    return RmpActivityHostApplyLimits(a1, (__int128 *)a2);
  }
  return result;
}
