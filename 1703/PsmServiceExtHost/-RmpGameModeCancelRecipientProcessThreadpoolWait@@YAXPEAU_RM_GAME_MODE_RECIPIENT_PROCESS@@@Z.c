/*
 * XREFs of ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003082C
 * Callers:
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1800311A0 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180031A2C (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeCancelRecipientProcessThreadpoolWait(_QWORD *P)
{
  char v2; // al

  TpSetWait(P[6], 0LL, 0LL);
  TpWaitForWait(P[6], 1LL);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = *((_BYTE *)P + 120);
  if ( (v2 & 2) != 0 )
  {
    *((_BYTE *)P + 120) = v2 & 0xFD;
    RmpGameModeDereferenceRecipientProcess(P);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
