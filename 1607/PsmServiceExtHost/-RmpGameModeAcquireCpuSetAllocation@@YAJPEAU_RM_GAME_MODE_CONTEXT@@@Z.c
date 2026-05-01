/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(struct _RM_CPU_SET_CLIENT_CONTEXT **a1)
{
  return RmpCpuSetManagerAcquireCpuSetsForGameMode(a1[4], a1 + 6);
}
