/*
 * XREFs of ?RmpGameModeQueuePolicyWorker@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030AC8
 * Callers:
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800308F0 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B0C (-RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180030D54 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180004F50 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeQueuePolicyWorker(struct _RM_GAME_MODE_CONTEXT *a1)
{
  RtlAcquireSRWLockExclusive((char *)a1 + 40);
  *((_DWORD *)a1 + 14) = GetCurrentThreadId();
  RmpGameModeQueuePolicyWorkerWithLock(a1);
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 40);
}
