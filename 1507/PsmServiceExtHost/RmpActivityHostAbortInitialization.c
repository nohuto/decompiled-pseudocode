/*
 * XREFs of RmpActivityHostAbortInitialization @ 0x18003B6E4
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180008598 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18003B994 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x18003BA18 (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B664 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

LPVOID __fastcall RmpActivityHostAbortInitialization(struct _RM_ACTIVITY_HOST *a1)
{
  PVOID v1; // r9

  RmpActivityHostCleanupCommonState(a1);
  return RmpFreeHeap(v1);
}
