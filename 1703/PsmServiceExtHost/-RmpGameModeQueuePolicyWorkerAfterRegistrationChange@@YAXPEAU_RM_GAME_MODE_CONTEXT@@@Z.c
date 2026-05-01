/*
 * XREFs of ?RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B0C
 * Callers:
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180030C20 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030DF8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180031A2C (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeQueuePolicyWorkerAfterRegistrationChange(struct _RM_GAME_MODE_CONTEXT *a1)
{
  *((_BYTE *)a1 + 77) &= ~0x10u;
  *((_BYTE *)a1 + 77) |= *((_QWORD *)a1 + 1) != 0LL ? 0x10 : 0;
  RmpGameModeQueuePolicyWorker(a1);
}
