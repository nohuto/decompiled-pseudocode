/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18001FA10
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033424 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // di
  char v4; // al
  bool v5; // si

  v2 = (char)a2;
  if ( (*((_BYTE *)a1 + 816) & 1) != 0 )
    return 0;
  v4 = RmpPolicyComputeDesiredEmptyState(*((_QWORD *)a1 + 5) + 424LL, (__int64)a1, 1);
  v5 = ((unsigned __int8)v4 & *((_BYTE *)a1 + 820)) == v4;
  if ( !(unsigned __int8)RmpPolicyActivityHostIsValidEmptyTarget(a1) || v5 && (v2 & 0x20) != 0 )
  {
    if ( (v2 & 1) != 0 && !v5 )
      return RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL) != 0;
    return 0;
  }
  return 1;
}
