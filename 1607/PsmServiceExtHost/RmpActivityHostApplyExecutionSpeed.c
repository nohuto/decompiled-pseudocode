/*
 * XREFs of RmpActivityHostApplyExecutionSpeed @ 0x180007320
 * Callers:
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     RmpSystemApplyPsmPriorityToHost @ 0x1800184B4 (RmpSystemApplyPsmPriorityToHost.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(struct _RM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v2; // ebp
  int v3; // esi
  bool v6; // al
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 40);
  v3 = *((_DWORD *)a1 + 178);
  if ( v3 < 1 == v2 < 1 || (result = RmpSystemApplyPsmPriorityToHost(a1), (int)result >= 0) )
  {
    v6 = v2 >= 2;
    if ( (*(_BYTE *)(a2 + 52) & 4) != 0 && ((*((_BYTE *)a1 + 724) & 4) == 0 || v6 != v3 >= 2) )
      RmpActivityHostActOnProcesses(a1, (void *)v6);
    *((_DWORD *)a1 + 178) = *(_DWORD *)(a2 + 40);
    *((_BYTE *)a1 + 724) ^= (*(_BYTE *)(a2 + 52) ^ *((_BYTE *)a1 + 724)) & 4;
    return 0LL;
  }
  return result;
}
