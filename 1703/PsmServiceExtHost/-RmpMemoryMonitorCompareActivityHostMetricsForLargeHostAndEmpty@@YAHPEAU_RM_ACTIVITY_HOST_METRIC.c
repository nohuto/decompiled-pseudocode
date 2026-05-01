/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800361BC
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180036250 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x1800362F0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033074 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x1800330DC (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rdi
  struct _RM_ACTIVITY_HOST *v3; // rbx

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  v3 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a2 + 6);
  if ( *((_WORD *)a1 + 30) >= 0x8000u )
  {
    if ( *((_WORD *)a2 + 30) < 0x8000u )
      return 0xFFFFFFFFLL;
    if ( *((_WORD *)a1 + 30) >= 0x8000u )
      return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
  }
  if ( *((_WORD *)a2 + 30) >= 0x8000u )
    return 1LL;
  if ( *((_WORD *)a1 + 30) >= 0x8000u )
    return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)a1 + 6))
    && !RmpPolicyActivityHostIsValidEmptyTarget(v3) )
  {
    return 0xFFFFFFFFLL;
  }
  return !RmpPolicyActivityHostIsValidEmptyTarget(v2) && RmpPolicyActivityHostIsValidEmptyTarget(v3);
}
