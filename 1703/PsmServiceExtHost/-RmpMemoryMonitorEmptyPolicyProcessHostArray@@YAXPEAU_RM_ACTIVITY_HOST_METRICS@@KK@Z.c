/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180036734
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180036A38 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033074 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180036DDC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyProcessHostArray(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        char a3)
{
  size_t v3; // rbx
  bool v4; // r13
  char v5; // r15
  char v6; // r14
  _WORD *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  char v11; // al
  char *v12; // rdi
  size_t v13; // rbp
  int (__cdecl *v14)(const void *, const void *); // r9

  v3 = a2;
  v4 = 0;
  v5 = a3 & 1;
  v6 = a3;
  if ( a2 )
  {
    v8 = (_WORD *)((char *)a1 + 60);
    v9 = a2;
    do
    {
      v10 = *(_QWORD *)(v8 - 6);
      if ( v5
        && RmpMemoryMonitorIsLargeAppTerminationTarget(
             *(struct _RM_ACTIVITY_HOST **)(v8 - 6),
             (struct _RM_ACTIVITY_HOST_METRICS *)(v8 - 30)) )
      {
        *v8 |= 0x8000u;
      }
      else if ( !v4 && RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v10) )
      {
        v11 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v10 + 40) + 400LL, v10, 1);
        v4 = ((unsigned __int8)v11 & *(_BYTE *)(v10 + 820)) != v11;
      }
      v8 += 32;
      --v9;
    }
    while ( v9 );
    v6 = a3;
  }
  if ( (_DWORD)v3 )
  {
    v12 = (char *)a1 + 48;
    v13 = v3;
    do
    {
      if ( *((_WORD *)v12 + 6) < 0x8000u && (v6 & 0x10) == 0 )
        RmpPolicyActivityHostIsValidEmptyTarget(*(struct _RM_ACTIVITY_HOST **)v12);
      v12 += 64;
      --v13;
    }
    while ( v13 );
  }
  v14 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForCommitSave;
  if ( (v6 & 0x10) == 0 )
    v14 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForEmpty;
  qsort(a1, v3, 0x40uLL, v14);
}
