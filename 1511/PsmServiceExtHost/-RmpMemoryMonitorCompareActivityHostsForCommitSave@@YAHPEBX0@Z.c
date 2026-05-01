/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180041CE0
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180041C40 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForCommitSave(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = *((_QWORD *)a1 + 5);
  v4 = *((_QWORD *)a2 + 5);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  v7 = 0;
  if ( !(_DWORD)result )
  {
    if ( RmpPolicyActivityHostIsValidEmptyTarget(v2) )
    {
      v8 = *((_QWORD *)a1 + 1);
      if ( (*(_BYTE *)(v2 + 937) & 1) != 0 )
        v8 >>= 1;
      v9 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v4 + 937) & 1) != 0 )
        v9 >>= 1;
      if ( v8 <= v9 )
      {
        LOBYTE(v7) = v8 < v9;
        return v7;
      }
      else
      {
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
