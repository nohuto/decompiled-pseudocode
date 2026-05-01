/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180042900
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002AA30 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180042258 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostQueryPriority @ 0x18001D6E0 (RmpActivityHostQueryPriority.c)
 *     RmpEmPriorityCompare @ 0x18001D774 (RmpEmPriorityCompare.c)
 *     RmpActivityHostGetAppliedResourceSetCount @ 0x18001F004 (RmpActivityHostGetAppliedResourceSetCount.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x180040F68 (RmpActivityHostHasPpleResourceSet.c)
 *     RmpActivityHostIsKillable @ 0x180040FC4 (RmpActivityHostIsKillable.c)
 */

unsigned __int8 __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  int v4; // eax
  unsigned __int8 result; // al
  int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !RmpActivityHostIsKillable((__int64)a1) )
    return 0;
  if ( RmpActivityHostHasPpleResourceSet((__int64)a1) )
    return 0;
  LOBYTE(v4) = RmpActivityHostGetAppliedResourceSetCount((__int64)a1);
  if ( !v4 )
    return 0;
  RmpActivityHostQueryPriority((__int64)a1, &v6);
  if ( (int)RmpEmPriorityCompare(v6, *((_DWORD *)RmSvcGlobals + 396)) > 0 )
    return 0;
  result = 1;
  if ( a2 )
  {
    if ( (*((_BYTE *)a2 + 54) & 8) == 0 || (*((_BYTE *)a2 + 52) & 1) == 0 )
      return 0;
  }
  return result;
}
