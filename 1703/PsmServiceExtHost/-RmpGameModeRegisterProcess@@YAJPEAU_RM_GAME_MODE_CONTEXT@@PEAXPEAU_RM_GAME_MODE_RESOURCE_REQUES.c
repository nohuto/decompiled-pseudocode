/*
 * XREFs of ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030DF8
 * Callers:
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x18002CC6C (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001AA1C (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x1800307D0 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030A18 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B0C (-RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmpGameModeRegisterProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3)
{
  volatile signed __int64 *RecipientProcessById; // rsi
  _QWORD *Heap; // rax
  _QWORD *v8; // rdi
  NTSTATUS ObjectsForRecipientProcess; // ebx
  __int128 v10; // xmm1
  DWORD ProcessId; // eax

  RecipientProcessById = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x80uLL);
    v8[4] = a1;
    *((_OWORD *)v8 + 4) = *(_OWORD *)a3;
    v10 = *((_OWORD *)a3 + 1);
    *v8 = 1LL;
    *((_OWORD *)v8 + 5) = v10;
    RtlEnterCriticalSection(&RmpGlobalLock);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 1524LL) & 2) != 0 )
    {
      ObjectsForRecipientProcess = -1073741077;
    }
    else
    {
      ProcessId = GetProcessId(a2);
      RecipientProcessById = (volatile signed __int64 *)RmpGameModeFindRecipientProcessById(a1, ProcessId);
      if ( RecipientProcessById )
      {
        ObjectsForRecipientProcess = -1073740008;
      }
      else
      {
        ObjectsForRecipientProcess = RmpGameModeAllocateObjectsForRecipientProcess((void **)v8, a2);
        if ( ObjectsForRecipientProcess >= 0 )
        {
          RmpGameModeInsertRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v8);
          v8 = 0LL;
          RmpGameModeQueuePolicyWorkerAfterRegistrationChange(a1);
          ObjectsForRecipientProcess = 0;
        }
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( RecipientProcessById )
      RmpGameModeDereferenceRecipientProcess(RecipientProcessById);
    if ( v8 )
      RmpGameModeDereferenceRecipientProcess(v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)ObjectsForRecipientProcess;
}
