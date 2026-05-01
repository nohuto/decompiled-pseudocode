/*
 * XREFs of ?RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z @ 0x18001DA0C
 * Callers:
 *     ?RmpCpuSetManagerAcquireSetsForAllocationCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D8B0 (-RmpCpuSetManagerAcquireSetsForAllocationCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_A.c)
 *     ?RmpCpuSetManagerReleaseSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x1800310B0 (-RmpCpuSetManagerReleaseSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 * Callees:
 *     ?RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DD14 (-RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCAT.c)
 */

void __fastcall RmpCpuSetManagerMoveCpuSet(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v7; // r9d
  struct _RM_CPU_SET_ALLOCATION *v8; // r11

  RmpCpuSetManagerRemoveCpuSetFromAllocation(a1, a3, a4, a5);
  RmpCpuSetManagerAddCpuSetToAllocation(a1, v8, a4, v7);
}
