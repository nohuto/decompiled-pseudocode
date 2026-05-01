/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180041C40
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180041CE0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180041D80 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpPolicyCompareActivityHostsByPriorityAndCommit @ 0x180041694 (RmpPolicyCompareActivityHostsByPriorityAndCommit.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *((_QWORD *)a1 + 5);
  v3 = *((_QWORD *)a2 + 5);
  if ( *((__int16 *)a1 + 26) < 0 )
  {
    if ( (*((_WORD *)a2 + 26) & 0x8000) == 0 )
      return 0xFFFFFFFFLL;
    if ( *((__int16 *)a1 + 26) < 0 )
      return RmpPolicyCompareActivityHostsByPriorityAndCommit((__int64)a1, (__int64)a2);
  }
  if ( (*((_WORD *)a2 + 26) & 0x8000) != 0 )
    return 1LL;
  if ( *((__int16 *)a1 + 26) < 0 )
    return RmpPolicyCompareActivityHostsByPriorityAndCommit((__int64)a1, (__int64)a2);
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((_QWORD *)a1 + 5)) && !RmpPolicyActivityHostIsValidEmptyTarget(v3) )
    return 0xFFFFFFFFLL;
  return !RmpPolicyActivityHostIsValidEmptyTarget(v2) && RmpPolicyActivityHostIsValidEmptyTarget(v3);
}
