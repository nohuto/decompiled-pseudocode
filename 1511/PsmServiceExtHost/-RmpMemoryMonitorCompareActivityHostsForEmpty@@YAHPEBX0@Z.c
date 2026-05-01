/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180041D80
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180041C40 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  char *v8; // r15
  char v9; // al
  int v10; // r8d
  unsigned __int8 v11; // r12
  char v12; // al
  char v13; // al
  unsigned int v14; // r8d
  char v15; // al
  char v16; // r14
  char v17; // al
  char v18; // r11
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax

  v2 = *((_QWORD *)a1 + 5);
  v4 = *((_QWORD *)a2 + 5);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  v7 = 0;
  if ( !(_DWORD)result )
  {
    if ( !RmpPolicyActivityHostIsValidEmptyTarget(v2) )
      return 0LL;
    v8 = (char *)RmSvcGlobals + 208;
    v9 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, v2, 1);
    v11 = *(_BYTE *)(v2 + 780);
    if ( ((unsigned __int8)v9 & v11) != v9 )
    {
      v12 = RmpPolicyComputeDesiredEmptyState((__int64)v8, v4, v10);
      if ( ((unsigned __int8)v12 & *(_BYTE *)(v4 + 780)) == v12 )
        return 0xFFFFFFFFLL;
    }
    v13 = RmpPolicyComputeDesiredEmptyState((__int64)v8, v2, v10);
    if ( ((unsigned __int8)v13 & v11) != v13
      || (v15 = RmpPolicyComputeDesiredEmptyState((__int64)v8, v4, v14),
          ((unsigned __int8)v15 & *(_BYTE *)(v4 + 780)) == v15) )
    {
      v16 = v14 & *(_BYTE *)(v4 + 937);
      v17 = RmpPolicyComputeDesiredEmptyState((__int64)v8, v2, v14);
      if ( ((unsigned __int8)v17 & v11) == v17 )
      {
        v19 = *((_QWORD *)a1 + 4);
        if ( v18 )
          v19 >>= 1;
        v20 = *((_QWORD *)a2 + 4);
      }
      else
      {
        v19 = *((_QWORD *)a1 + 3);
        if ( v18 )
          v19 >>= 1;
        v20 = *((_QWORD *)a2 + 3);
      }
      if ( v16 )
        v20 >>= 1;
      if ( v19 > v20 )
        return 0xFFFFFFFFLL;
      LOBYTE(v7) = v19 < v20;
      return v7;
    }
    else
    {
      return v14;
    }
  }
  return result;
}
