/*
 * XREFs of RmpActivityHostAbortInitialization @ 0x180040ABC
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180007C50 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x180040D18 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x180040D9C (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180040A34 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

LPVOID __fastcall RmpActivityHostAbortInitialization(struct _RM_ACTIVITY_HOST *a1)
{
  PVOID v1; // r9

  RmpActivityHostCleanupCommonState(a1);
  return RmpFreeHeap(v1);
}
