/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180032814
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x1800328B0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180032950 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180033BA4 (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *((_QWORD *)a1 + 6);
  v3 = *((_QWORD *)a2 + 6);
  if ( *((__int16 *)a1 + 30) < 0 )
  {
    if ( (*((_WORD *)a2 + 30) & 0x8000) == 0 )
      return 0xFFFFFFFFLL;
    if ( *((__int16 *)a1 + 30) < 0 )
      return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
  }
  if ( (*((_WORD *)a2 + 30) & 0x8000) != 0 )
    return 1LL;
  if ( *((__int16 *)a1 + 30) < 0 )
    return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((_QWORD *)a1 + 6)) && !RmpPolicyActivityHostIsValidEmptyTarget(v3) )
    return 0xFFFFFFFFLL;
  return !RmpPolicyActivityHostIsValidEmptyTarget(v2) && RmpPolicyActivityHostIsValidEmptyTarget(v3);
}
