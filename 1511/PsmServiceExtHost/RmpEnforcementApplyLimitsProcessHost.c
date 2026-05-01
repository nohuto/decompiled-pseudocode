/*
 * XREFs of RmpEnforcementApplyLimitsProcessHost @ 0x180040168
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpSystemApplyLimits @ 0x1800474FC (RmpSystemApplyLimits.c)
 * Callees:
 *     RmpActivityHostApplyLimits @ 0x18003FA20 (RmpActivityHostApplyLimits.c)
 */

NTSTATUS __fastcall RmpEnforcementApplyLimitsProcessHost(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  NTSTATUS result; // eax
  __int16 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(void **)(a1 + 704);
  if ( *(_DWORD *)(a2 + 68) != 0x100000
    || (ProcessInformation = 256,
        v7 = 1,
        v8 = 1,
        result = NtSetInformationProcess(v3, ProcessPriorityClass, &ProcessInformation, 2u),
        result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessPagePriority, &v7, 4u), result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessIoPriority, &v8, 4u), result >= 0) )
  {
    if ( *(_DWORD *)(a2 + 68) != 32 )
    {
      if ( *(_DWORD *)(a2 + 68) == 64 )
      {
LABEL_12:
        *(_DWORD *)(a2 + 68) = 64;
        return RmpActivityHostApplyLimits(a1, (__int128 *)a2);
      }
      if ( *(_DWORD *)(a2 + 68) != 128 && *(_DWORD *)(a2 + 68) != 0x4000 && *(_DWORD *)(a2 + 68) != 0x8000 )
      {
        if ( *(_DWORD *)(a2 + 68) != 0x100000 )
          return -1073741823;
        goto LABEL_12;
      }
    }
    *(_DWORD *)(a2 + 68) = *(_DWORD *)(a2 + 68);
    return RmpActivityHostApplyLimits(a1, (__int128 *)a2);
  }
  return result;
}
