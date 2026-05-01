/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180036DDC
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800208E0 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180036734 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004C74 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002088C (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E7D8 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

bool __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  struct _RM_ACTIVITY_HOST *v4; // rcx

  return (unsigned int)RmpActivityHostIsRevocable(a1)
      && !RmpActivityHostTryGetPpleResourceSet(v4)
      && (unsigned int)RmpActivityHostGetResourceSetCount(a1, 2)
      && (!a2
       || ((*((_BYTE *)a2 + 62) & 1) == 0
        || (int)RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *(_DWORD *)(*((_QWORD *)a1 + 5) + 516LL)) <= 0)
       && (*((_BYTE *)a2 + 62) & 0x10) != 0
       && (*((_BYTE *)a2 + 60) & 1) != 0);
}
