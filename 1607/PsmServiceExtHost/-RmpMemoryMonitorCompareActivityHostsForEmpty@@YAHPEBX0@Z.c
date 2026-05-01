/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180032950
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180032814 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  char v9; // al
  int v10; // r8d
  unsigned __int8 v11; // r15
  char v12; // al
  char v13; // al
  unsigned int v14; // r8d
  __int64 v15; // r11
  char v16; // al
  char v17; // r14
  char v18; // al
  char v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax

  v2 = *((_QWORD *)a1 + 6);
  v4 = *((_QWORD *)a2 + 6);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  v7 = 0;
  if ( !(_DWORD)result )
  {
    if ( !RmpPolicyActivityHostIsValidEmptyTarget(v2) )
      return 0LL;
    v8 = *(_QWORD *)(v2 + 40) + 424LL;
    v9 = RmpPolicyComputeDesiredEmptyState(v8, v2, 1);
    v11 = *(_BYTE *)(v2 + 820);
    if ( ((unsigned __int8)v9 & v11) != v9 )
    {
      v12 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v4 + 40) + 424LL, v4, v10);
      if ( ((unsigned __int8)v12 & *(_BYTE *)(v4 + 820)) == v12 )
        return 0xFFFFFFFFLL;
    }
    v13 = RmpPolicyComputeDesiredEmptyState(v8, v2, v10);
    if ( ((unsigned __int8)v13 & v11) != v13
      || (v16 = RmpPolicyComputeDesiredEmptyState(v15 + *(_QWORD *)(v4 + 40), v4, v14),
          ((unsigned __int8)v16 & *(_BYTE *)(v4 + 820)) == v16) )
    {
      v17 = v14 & *(_BYTE *)(v4 + 1113);
      v18 = RmpPolicyComputeDesiredEmptyState(v8, v2, v14);
      if ( ((unsigned __int8)v18 & v11) == v18 )
      {
        v20 = *((_QWORD *)a1 + 4);
        if ( v19 )
          v20 >>= 1;
        v21 = *((_QWORD *)a2 + 4);
      }
      else
      {
        v20 = *((_QWORD *)a1 + 3);
        if ( v19 )
          v20 >>= 1;
        v21 = *((_QWORD *)a2 + 3);
      }
      if ( v17 )
        v21 >>= 1;
      if ( v20 > v21 )
        return 0xFFFFFFFFLL;
      LOBYTE(v7) = v20 < v21;
      return v7;
    }
    else
    {
      return v14;
    }
  }
  return result;
}
