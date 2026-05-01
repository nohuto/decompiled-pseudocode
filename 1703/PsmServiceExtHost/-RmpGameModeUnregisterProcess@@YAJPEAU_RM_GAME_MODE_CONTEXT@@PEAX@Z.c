/*
 * XREFs of ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180031A2C
 * Callers:
 *     ?RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x18002CEEC (-RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001AA1C (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003082C (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B0C (-RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031080 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeUnregisterProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rbx
  unsigned int v5; // edi
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax

  v4 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1524LL) & 2) != 0 )
  {
    v5 = -1073741077;
LABEL_5:
    RtlLeaveCriticalSection(&RmpGlobalLock);
    goto LABEL_7;
  }
  ProcessId = GetProcessId(Process);
  RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
  v4 = RecipientProcessById;
  if ( !RecipientProcessById )
  {
    v5 = -1073741275;
    goto LABEL_5;
  }
  RmpGameModeRemoveRecipientProcess(RecipientProcessById);
  RmpGameModeQueuePolicyWorkerAfterRegistrationChange(a1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  RmpGameModeCancelRecipientProcessThreadpoolWait(v4);
  v5 = 0;
LABEL_7:
  if ( v4 )
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v4);
  return v5;
}
