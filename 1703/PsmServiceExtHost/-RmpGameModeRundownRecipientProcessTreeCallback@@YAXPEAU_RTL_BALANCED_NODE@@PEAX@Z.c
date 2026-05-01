/*
 * XREFs of ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1800311A0
 * Callers:
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800310AC (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003082C (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRundownRecipientProcessTreeCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v2; // rbx

  v2 = &a1[-1].16;
  RtlEnterCriticalSection(&RmpGlobalLock);
  *(_BYTE *)&v2[15] &= ~1u;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  RmpGameModeCancelRecipientProcessThreadpoolWait(v2);
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
}
