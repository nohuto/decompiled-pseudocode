/*
 * XREFs of ?RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DD14
 * Callers:
 *     ?RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D810 (-RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z @ 0x18001DA0C (-RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerRemoveCpuSetFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rax

  *((_QWORD *)a2 + a3 + 14) &= ~(1LL << a4);
  v4 = *((int *)a2 + 70);
  --*((_DWORD *)a2 + 68);
  --*((_DWORD *)a1 + v4 + 238);
  RmpCpuSetManagerMarkAllocationDirty(a1, a2);
}
