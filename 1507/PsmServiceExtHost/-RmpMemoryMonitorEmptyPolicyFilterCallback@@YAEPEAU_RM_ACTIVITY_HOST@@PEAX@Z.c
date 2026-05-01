/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003CDF0
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // di

  v2 = (char)a2;
  return (*((_BYTE *)a1 + 768) & 1) == 0
      && (RmpPolicyActivityHostIsValidEmptyTarget((__int64)a1)
       || (v2 & 1) != 0 && RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL));
}
