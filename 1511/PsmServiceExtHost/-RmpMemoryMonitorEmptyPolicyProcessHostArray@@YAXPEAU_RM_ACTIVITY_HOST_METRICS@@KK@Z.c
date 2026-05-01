/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180042258
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180042900 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyProcessHostArray(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        char a3)
{
  size_t v3; // rdi
  bool v4; // r13
  char v5; // r14
  char v6; // r15
  _WORD *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbp
  char v11; // al
  _WORD *v12; // rbx
  size_t v13; // rbp
  __int64 v14; // rcx
  int (__cdecl *v15)(const void *, const void *); // r9

  v3 = a2;
  v4 = 0;
  v5 = a3 & 1;
  v6 = a3;
  if ( a2 )
  {
    v8 = (_WORD *)((char *)a1 + 52);
    v9 = a2;
    do
    {
      v10 = *(_QWORD *)(v8 - 6);
      if ( v5
        && RmpMemoryMonitorIsLargeAppTerminationTarget(
             *(struct _RM_ACTIVITY_HOST **)(v8 - 6),
             (struct _RM_ACTIVITY_HOST_METRICS *)(v8 - 26)) )
      {
        *v8 |= 0x8000u;
      }
      else if ( !v4 && RmpPolicyActivityHostIsValidEmptyTarget(v10) )
      {
        v11 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, v10, 1);
        v4 = ((unsigned __int8)v11 & *(_BYTE *)(v10 + 780)) != v11;
      }
      v8 += 28;
      --v9;
    }
    while ( v9 );
    v6 = a3;
  }
  if ( (_DWORD)v3 )
  {
    v12 = (_WORD *)((char *)a1 + 52);
    v13 = v3;
    do
    {
      v14 = *(_QWORD *)(v12 - 6);
      if ( (*v12 & 0x8000) != 0 || (v6 & 0x10) != 0 )
      {
        RmpActivityHostQueryCommit(v14, (unsigned __int64 *)(v12 - 22), (unsigned __int64 *)(v12 - 26));
        v12[1] |= 1u;
      }
      else
      {
        RmpPolicyActivityHostIsValidEmptyTarget(v14);
      }
      v12 += 28;
      --v13;
    }
    while ( v13 );
  }
  v15 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForCommitSave;
  if ( (v6 & 0x10) == 0 )
    v15 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForEmpty;
  qsort(a1, v3, 0x38uLL, v15);
}
