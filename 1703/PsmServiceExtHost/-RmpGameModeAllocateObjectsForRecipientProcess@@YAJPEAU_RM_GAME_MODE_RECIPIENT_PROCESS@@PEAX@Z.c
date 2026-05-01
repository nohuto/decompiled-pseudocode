/*
 * XREFs of ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x1800307D0
 * Callers:
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030DF8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180004F78 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 */

NTSTATUS __fastcall RmpGameModeAllocateObjectsForRecipientProcess(void **a1, void *a2)
{
  NTSTATUS result; // eax
  DWORD ProcessId; // edi

  result = TpAllocWait(a1 + 6, RmpGameModeRecipientProcessTerminationCallback, a1, 0LL);
  if ( result >= 0 )
  {
    ProcessId = GetProcessId(a2);
    result = RmpSystemOpenProcess(a1 + 5, 0x103000u, ProcessId);
    if ( result >= 0 )
    {
      *((_DWORD *)a1 + 14) = ProcessId;
      return 0;
    }
  }
  return result;
}
