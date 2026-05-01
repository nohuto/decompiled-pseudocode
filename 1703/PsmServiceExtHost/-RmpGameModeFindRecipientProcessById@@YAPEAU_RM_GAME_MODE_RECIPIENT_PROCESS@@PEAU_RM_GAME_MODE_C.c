/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001AA1C
 * Callers:
 *     ?RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001A984 (-RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800308F0 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180030D54 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030DF8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180031A2C (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v5; // rdx
  __int64 v7; // rcx

  v2 = *((_QWORD *)a1 + 1);
  v3 = *((_BYTE *)a1 + 16) & 1;
  v5 = 0LL;
  while ( v2 )
  {
    if ( a2 < *(_DWORD *)(v2 + 48) )
    {
      v7 = *(_QWORD *)v2;
    }
    else
    {
      if ( a2 <= *(_DWORD *)(v2 + 48) )
      {
        v5 = v2 - 8;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 - 8)) <= 1 )
          __fastfail(0xEu);
        return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
      }
      v7 = *(_QWORD *)(v2 + 8);
    }
    if ( v3 && v7 )
      v2 ^= v7;
    else
      v2 = v7;
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
}
