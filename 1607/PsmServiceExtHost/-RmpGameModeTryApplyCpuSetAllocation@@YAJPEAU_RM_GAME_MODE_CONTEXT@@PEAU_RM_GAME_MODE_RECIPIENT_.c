/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180031E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT *a2)
{
  return RmpCpuSetManagerRegisterProcessWithAllocation(
           *((struct _RM_CPU_SET_MANAGER ***)a1 + 4),
           *(void **)a2,
           *((struct _RM_CPU_SET_ALLOCATION **)a1 + 6),
           (struct _RM_CPU_SET_PROCESS_REGISTRATION **)a2 + 1);
}
