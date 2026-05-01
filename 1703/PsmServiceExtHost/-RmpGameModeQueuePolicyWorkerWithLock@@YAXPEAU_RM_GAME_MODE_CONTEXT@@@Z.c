/*
 * XREFs of ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180004F50
 * Callers:
 *     ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180004D20 (-RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBX.c)
 *     ?RmpGameModeQueuePolicyWorker@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030AC8 (-RmpGameModeQueuePolicyWorker@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800310AC (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeQueuePolicyWorkerWithLock(struct _RM_GAME_MODE_CONTEXT *a1)
{
  char v1; // al
  char v2; // al

  v1 = *((_BYTE *)a1 + 77);
  if ( (v1 & 4) == 0 )
  {
    v2 = v1 | 1;
    *((_BYTE *)a1 + 77) = v2;
    if ( (v2 & 2) == 0 )
    {
      *((_BYTE *)a1 + 77) = v2 | 2;
      TpPostWork(*((_QWORD *)a1 + 6));
    }
  }
}
