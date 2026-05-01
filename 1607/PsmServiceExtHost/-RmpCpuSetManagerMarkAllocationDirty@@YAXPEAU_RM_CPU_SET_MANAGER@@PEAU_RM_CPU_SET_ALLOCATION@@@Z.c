/*
 * XREFs of ?RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18000352C
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800031C0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D810 (-RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerAddCpuSetToAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DCE0 (-RmpCpuSetManagerAddCpuSetToAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@.c)
 *     ?RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DD14 (-RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCAT.c)
 *     ?RmpCpuSetManagerReleaseAllSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030F18 (-RmpCpuSetManagerReleaseAllSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOC.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerMarkAllocationDirty(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  char *v2; // rcx
  char *v3; // rax
  char **v4; // rdx

  if ( (*((_DWORD *)a2 + 69) & 2) == 0 )
  {
    v2 = (char *)a1 + 296;
    v3 = (char *)a2 + 72;
    *((_DWORD *)a2 + 69) |= 2u;
    v4 = (char **)*((_QWORD *)v2 + 1);
    if ( *v4 != v2 )
      __fastfail(3u);
    *(_QWORD *)v3 = v2;
    *((_QWORD *)v3 + 1) = v4;
    *v4 = v3;
    *((_QWORD *)v2 + 1) = v3;
  }
}
