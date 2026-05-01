/*
 * XREFs of ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180030D54
 * Callers:
 *     ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x18002CB64 (-RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001AA1C (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeQueuePolicyWorker@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030AC8 (-RmpGameModeQueuePolicyWorker@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmpGameModeReenableForRegisteredProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rdi
  unsigned int v5; // ebx
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  char v8; // al

  v4 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1524LL) & 2) != 0 )
  {
    v5 = -1073741077;
  }
  else
  {
    ProcessId = GetProcessId(Process);
    RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
    v4 = RecipientProcessById;
    if ( RecipientProcessById )
    {
      v8 = *((_BYTE *)RecipientProcessById + 120);
      if ( (v8 & 4) != 0 )
      {
        *((_BYTE *)v4 + 120) = v8 & 0xFB;
        RmpGameModeQueuePolicyWorker(a1);
        v5 = 0;
      }
      else
      {
        v5 = -1073741584;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v4 )
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v4);
  return v5;
}
