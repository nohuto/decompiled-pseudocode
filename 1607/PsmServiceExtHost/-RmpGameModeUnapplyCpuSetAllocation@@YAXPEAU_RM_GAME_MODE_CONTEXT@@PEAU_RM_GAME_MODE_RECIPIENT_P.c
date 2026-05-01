/*
 * XREFs of ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180032050
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18003020C (-RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS.c)
 */

void __fastcall RmpGameModeUnapplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)a1;
  RmpCpuSetManagerDestroyProcessRegistration((struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 1944LL), a2[1]);
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)(v2 + 1944));
  a2[1] = 0LL;
}
