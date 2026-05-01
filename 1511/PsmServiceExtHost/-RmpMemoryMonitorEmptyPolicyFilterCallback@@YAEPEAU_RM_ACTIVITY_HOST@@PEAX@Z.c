/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002AA30
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180042900 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // di
  char v5; // al
  bool v6; // si

  v2 = (char)a2;
  if ( (*((_BYTE *)a1 + 776) & 1) != 0 )
    return 0;
  v5 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, (__int64)a1, 1);
  v6 = ((unsigned __int8)v5 & *((_BYTE *)a1 + 780)) == v5;
  if ( (unsigned __int8)RmpPolicyActivityHostIsValidEmptyTarget(a1) && (!v6 || (v2 & 0x20) == 0) )
    return 1;
  if ( (v2 & 1) == 0 || v6 )
    return 0;
  return RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL) != 0;
}
