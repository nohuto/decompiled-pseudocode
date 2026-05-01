/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003CE40
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpActivityHostQueryTotalCommit @ 0x180006290 (RmpActivityHostQueryTotalCommit.c)
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyProcessHostArray(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        char a3)
{
  size_t v3; // rsi
  bool v4; // r15
  char v5; // r14
  _WORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  _WORD *v10; // rbx
  size_t i; // rbp
  __int64 v12; // rdi
  __int16 v13; // cx

  v3 = a2;
  v4 = 0;
  v5 = a3 & 1;
  if ( a2 )
  {
    v7 = (_WORD *)((char *)a1 + 44);
    v8 = a2;
    do
    {
      v9 = *(_QWORD *)(v7 - 6);
      if ( v5
        && RmpMemoryMonitorIsLargeAppTerminationTarget(
             *(struct _RM_ACTIVITY_HOST **)(v7 - 6),
             (struct _RM_ACTIVITY_HOST_METRICS *)(v7 - 22)) )
      {
        *v7 |= 0x8000u;
      }
      else if ( !v4 && RmpPolicyActivityHostIsValidEmptyTarget(v9) )
      {
        v4 = (*(_BYTE *)(v9 + 772) & 7) == 0;
      }
      v7 += 24;
      --v8;
    }
    while ( v8 );
  }
  if ( (_DWORD)v3 )
  {
    v10 = (_WORD *)((char *)a1 + 46);
    for ( i = v3; i; --i )
    {
      v12 = *(_QWORD *)(v10 - 7);
      if ( (*(v10 - 1) & 0x8000) != 0 )
      {
        RmpActivityHostQueryTotalCommit(v12, (const struct _TlgProvider_t **)(v10 - 23));
        *v10 |= 1u;
      }
      else if ( RmpPolicyActivityHostIsValidEmptyTarget(v12) )
      {
        if ( (*(_BYTE *)(v12 + 772) & 7) == 0 )
        {
          v13 = 4;
          goto LABEL_19;
        }
        if ( !v4 )
        {
          v13 = 16;
LABEL_19:
          if ( (*v10 & (unsigned __int16)v13) != v13 )
            RmpPolicyActivityHostMetricsInitialize((struct _RM_ACTIVITY_HOST *)v12, v13, v10 - 23);
        }
      }
      v10 += 24;
    }
  }
  qsort(a1, v3, 0x30uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RmpMemoryMonitorCompareActivityHostsForEmpty);
}
