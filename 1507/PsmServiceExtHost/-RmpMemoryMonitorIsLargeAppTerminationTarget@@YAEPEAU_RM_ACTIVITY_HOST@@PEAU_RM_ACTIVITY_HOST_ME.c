/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003CDF0 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003CE40 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180005FB0 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpActivityHostGetAppliedResourceSetCount @ 0x180006264 (RmpActivityHostGetAppliedResourceSetCount.c)
 *     RmpEmPriorityCompare @ 0x180007394 (RmpEmPriorityCompare.c)
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 *     RmpActivityHostQueryPriority @ 0x18000A5A8 (RmpActivityHostQueryPriority.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18003BCDC (RmpActivityHostHasPpleResourceSet.c)
 */

unsigned __int8 __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  int v4; // eax
  char StateDigest; // al
  unsigned __int8 result; // al
  int v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !RmpActivityHostIsKillable((__int64)a1) )
    return 0;
  if ( RmpActivityHostHasPpleResourceSet((__int64)a1) )
    return 0;
  LOBYTE(v4) = RmpActivityHostGetAppliedResourceSetCount((__int64)a1);
  if ( !v4 )
    return 0;
  StateDigest = RmpActivityHostGetStateDigest((__int64)a1);
  if ( RmpActivityHostStateDigestIsRunnable(StateDigest) )
    return 0;
  RmpActivityHostQueryPriority((__int64)a1, &v7);
  if ( (int)RmpEmPriorityCompare(v7, *((_DWORD *)RmSvcGlobals + 94)) > 0 )
    return 0;
  result = 1;
  if ( a2 )
  {
    if ( (*((_BYTE *)a2 + 46) & 8) == 0 || (*((_BYTE *)a2 + 44) & 1) == 0 )
      return 0;
  }
  return result;
}
