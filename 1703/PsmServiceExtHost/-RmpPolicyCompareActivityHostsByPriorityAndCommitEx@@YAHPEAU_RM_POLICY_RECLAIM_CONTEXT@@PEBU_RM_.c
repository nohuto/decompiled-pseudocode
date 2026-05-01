/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x1800330DC
 * Callers:
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x1800332A0 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800361BC (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180033524 (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitEx(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  int v5; // r11d
  unsigned int v6; // ebx
  char v7; // di
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 result; // rax
  char v11; // r8
  char v12; // r9
  int v13; // r11d
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  int v16; // r11d
  bool v17; // cl
  bool v18; // cf
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 HostCommitForReclaim; // rax
  unsigned __int64 v22; // r8
  unsigned int v23; // r10d
  unsigned __int16 v24; // r9

  if ( a1 )
  {
    v5 = *((_DWORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 3);
    v7 = *((_BYTE *)a1 + 20);
  }
  else
  {
    v5 = 0;
    v6 = 2;
    v7 = 0;
  }
  v8 = *((_QWORD *)a3 + 6);
  v9 = *((_QWORD *)a2 + 6);
  if ( v5 == 1 )
  {
    if ( (*(_WORD *)(v8 + 666) & 0x10) == 0 && (*(_WORD *)(v9 + 666) & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    if ( (*(_WORD *)(v8 + 666) & 0x10) != 0 && (*(_WORD *)(v9 + 666) & 0x10) == 0 )
      return 1LL;
  }
  result = RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *((_DWORD *)a3 + 14));
  if ( !(_DWORD)result )
  {
    if ( v7 )
    {
      v14 = *(_BYTE *)(v9 + 1122);
      v15 = *(_BYTE *)(v8 + 1122);
      if ( v14 < v15 )
        return 0xFFFFFFFFLL;
      if ( v14 > v15 )
        return 1LL;
    }
    v16 = v13 - 2;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
LABEL_20:
        if ( v6 == 1 )
          goto LABEL_23;
        v19 = *(_QWORD *)(v9 + 768);
        v20 = *(_QWORD *)(v8 + 768);
        if ( v19 > v20 )
          return 0xFFFFFFFFLL;
        if ( v19 >= v20 )
        {
LABEL_23:
          RmpPolicyGetHostCommitForReclaim(v6, a2);
          HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(v6, a3);
          if ( (v24 & *(_WORD *)(v8 + 1120)) != 0 )
            HostCommitForReclaim >>= 1;
          if ( v22 > HostCommitForReclaim )
            return 0xFFFFFFFFLL;
          LOBYTE(v23) = v22 < HostCommitForReclaim;
          return v23;
        }
        return 1LL;
      }
      if ( (v12 & 0x20) == 0 && (v11 & 0x20) != 0 )
        return 0xFFFFFFFFLL;
      v17 = (v12 & 0x20) != 0;
      v18 = (v11 & 0x20) != 0;
    }
    else
    {
      if ( (v12 & 0x10) == 0 && (v11 & 0x10) != 0 )
        return 0xFFFFFFFFLL;
      v17 = (v12 & 0x10) != 0;
      v18 = (v11 & 0x10) != 0;
    }
    if ( v17 && !v18 )
      return 1LL;
    goto LABEL_20;
  }
  return result;
}
