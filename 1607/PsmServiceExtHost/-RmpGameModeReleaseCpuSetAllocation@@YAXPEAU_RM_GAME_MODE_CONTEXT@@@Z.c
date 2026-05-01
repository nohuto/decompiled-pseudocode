/*
 * XREFs of ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

void __fastcall RmpGameModeReleaseCpuSetAllocation(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // rdx
  struct _RM_CPU_SET_MANAGER *v3; // rbx

  v1 = *((_QWORD *)a1 + 6);
  v3 = *(struct _RM_CPU_SET_MANAGER **)(v1 + 8);
  RmpCpuSetManagerReleaseAllocationInternal(v3, (struct _RM_CPU_SET_ALLOCATION *)v1, 0);
  RmpCpuSetManagerRebalance(v3, 0);
  *((_QWORD *)a1 + 6) = 0LL;
}
