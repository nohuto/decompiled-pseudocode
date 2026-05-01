/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180033BA4
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180032814 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x180033D40 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z.c)
 * Callees:
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033DC4 (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitEx(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  int v5; // r10d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  __int16 v10; // r8
  __int16 v11; // r9
  int v12; // r10d
  int v13; // r10d
  bool v14; // cl
  bool v15; // cf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 HostCommitForReclaim; // rax
  unsigned __int64 v19; // r8
  unsigned int v20; // r11d

  if ( a1 )
  {
    v5 = *((_DWORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 3);
  }
  else
  {
    v5 = 0;
    v6 = 2;
  }
  v7 = *((_QWORD *)a3 + 6);
  v8 = *((_QWORD *)a2 + 6);
  if ( v5 == 1 )
  {
    if ( (*(_WORD *)(v7 + 666) & 0x10) == 0 && (*(_WORD *)(v8 + 666) & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    if ( (*(_WORD *)(v7 + 666) & 0x10) != 0 && (*(_WORD *)(v8 + 666) & 0x10) == 0 )
      return 1LL;
  }
  result = RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *((_DWORD *)a3 + 14));
  if ( !(_DWORD)result )
  {
    v13 = v12 - 2;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
LABEL_17:
        if ( v6 == 1 )
          goto LABEL_20;
        v16 = *(_QWORD *)(v8 + 768);
        v17 = *(_QWORD *)(v7 + 768);
        if ( v16 > v17 )
          return 0xFFFFFFFFLL;
        if ( v16 >= v17 )
        {
LABEL_20:
          RmpPolicyGetHostCommitForReclaim(v6, a2);
          HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(v6, a3);
          if ( (*(_BYTE *)(v7 + 1113) & 1) != 0 )
            HostCommitForReclaim >>= 1;
          if ( v19 > HostCommitForReclaim )
            return 0xFFFFFFFFLL;
          LOBYTE(v20) = v19 < HostCommitForReclaim;
          return v20;
        }
        return 1LL;
      }
      if ( (!_bittest16(&v11, 5u) & _bittest16(&v10, 5u)) != 0 )
        return 0xFFFFFFFFLL;
      v14 = (v11 & 0x20) != 0;
      v15 = (v10 & 0x20) != 0;
    }
    else
    {
      if ( (v11 & 0x10) == 0 && (v10 & 0x10) != 0 )
        return 0xFFFFFFFFLL;
      v14 = (v11 & 0x10) != 0;
      v15 = (v10 & 0x10) != 0;
    }
    if ( v14 && !v15 )
      return 1LL;
    goto LABEL_17;
  }
  return result;
}
