/*
 * XREFs of RmpActivityHostAbortInitialization @ 0x18002EBF0
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18002ED74 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x18002EDFC (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004EC0 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

BOOLEAN __fastcall RmpActivityHostAbortInitialization(struct _RM_ACTIVITY_HOST *a1)
{
  RmpActivityHostCleanupCommonState(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
