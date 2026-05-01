/*
 * XREFs of ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030A18
 * Callers:
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030DF8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeInsertRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v1; // r10
  unsigned int v3; // r9d
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_DWORD *)a1 + 14);
  v4 = 0;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_BYTE *)(v1 + 16) & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( v3 < *(_DWORD *)(v5 + 48) )
      {
        v7 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
        {
          if ( !v7 )
            break;
          v7 ^= v5;
        }
        if ( !v7 )
          break;
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_7;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_7:
          v4 = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  LOBYTE(v6) = v4;
  RtlRbInsertNodeEx(v1 + 8, v5, v6, (char *)a1 + 8);
  *((_BYTE *)a1 + 120) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  TpSetWait(*((_QWORD *)a1 + 6), *((_QWORD *)a1 + 5), 0LL);
  *((_BYTE *)a1 + 120) |= 2u;
}
