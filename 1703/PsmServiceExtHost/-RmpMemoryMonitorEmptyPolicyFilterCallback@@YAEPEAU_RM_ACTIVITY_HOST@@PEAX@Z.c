/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800208E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033074 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180036DDC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // di
  char v4; // al
  bool v5; // si

  v2 = (char)a2;
  if ( (*((_BYTE *)a1 + 816) & 1) != 0 )
    return 0;
  v4 = RmpPolicyComputeDesiredEmptyState(*((_QWORD *)a1 + 5) + 400LL, (__int64)a1, 1);
  v5 = ((unsigned __int8)v4 & *((_BYTE *)a1 + 820)) == v4;
  if ( !RmpPolicyActivityHostIsValidEmptyTarget(a1) || v5 && (v2 & 0x20) != 0 )
  {
    if ( (v2 & 1) != 0 && !v5 )
      return RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL) != 0;
    return 0;
  }
  return 1;
}
