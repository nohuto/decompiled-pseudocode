/*
 * XREFs of RmpActivityHostNewProcessNotification @ 0x180003578
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x180003804 (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     RmpGameModeReapplyCurrentResourceAllotment @ 0x180032144 (RmpGameModeReapplyCurrentResourceAllotment.c)
 */

__int64 __fastcall RmpActivityHostNewProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)a1 + 5) + 2920LL;
  if ( *(struct _RM_ACTIVITY_HOST **)(v2 + 24) == a1 )
    RmpGameModeReapplyCurrentResourceAllotment((struct _RM_GAME_MODE_CONTEXT *)v2);
  if ( *((int *)a1 + 178) >= 2 && (*((_BYTE *)a1 + 724) & 4) != 0 )
    RmpActivityHostActOnProcesses(a1, (void *)1);
  result = *((unsigned int *)a1 + 281);
  if ( (result & 2) != 0 )
  {
    if ( (*((_BYTE *)a1 + 820) & 0x10) != 0 )
    {
      result = (unsigned int)result & 0xFFFFFFFD;
      *((_DWORD *)a1 + 281) = result;
    }
    else
    {
      return RmpActivityHostSetStoreHighMemoryPriority(a1);
    }
  }
  return result;
}
