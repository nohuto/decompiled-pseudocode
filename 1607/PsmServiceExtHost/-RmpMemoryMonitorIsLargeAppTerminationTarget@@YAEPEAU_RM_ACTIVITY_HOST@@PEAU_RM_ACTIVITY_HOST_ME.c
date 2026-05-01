/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033424
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18001FA10 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180032D6C (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18001A19C (RmpActivityHostHasPpleResourceSet.c)
 *     RmpActivityHostGetResourceSetCount @ 0x18002F230 (RmpActivityHostGetResourceSetCount.c)
 */

bool __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r11

  return RmpActivityHostIsRevocable((__int64)a1)
      && !RmpActivityHostHasPpleResourceSet(v3)
      && (unsigned int)RmpActivityHostGetResourceSetCount((__int64)a1, 2)
      && (!v4
       || ((*(_BYTE *)(v4 + 62) & 1) == 0
        || (int)RmpEmPriorityCompare(*(_DWORD *)(v4 + 56), *(_DWORD *)(*((_QWORD *)a1 + 5) + 1844LL)) <= 0)
       && (*(_BYTE *)(v4 + 62) & 0x10) != 0
       && (*(_BYTE *)(v4 + 60) & 1) != 0);
}
