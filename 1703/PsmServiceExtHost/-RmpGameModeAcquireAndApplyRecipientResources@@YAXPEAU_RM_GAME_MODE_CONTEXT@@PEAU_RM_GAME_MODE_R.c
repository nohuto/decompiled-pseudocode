/*
 * XREFs of ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003059C
 * Callers:
 *     ?RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001A984 (-RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeAcquireAndApplyRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // esi
  __int64 (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  unsigned int i; // ebx
  int v7; // eax
  unsigned int v8; // ebp
  void (__fastcall **v9)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  int v10; // ebx

  v2 = 0;
  v3 = off_18003C150;
  for ( i = 0; i < 3; ++i )
  {
    if ( !*v3 )
      goto LABEL_6;
    v7 = (*v3)(a1, a2);
    if ( v7 >= 0 && v7 != 255 )
    {
      *((_DWORD *)a2 + 28) |= 1 << i;
LABEL_6:
      v2 |= 1 << i;
    }
    v3 += 4;
  }
  v8 = 0;
  v9 = &off_18003C168;
  do
  {
    v10 = 1 << v8;
    if ( ((1 << v8) & v2) != 0
      && ((int (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *))*(v9 - 2))(
           a1,
           a2) < 0 )
    {
      if ( (v10 & *((_DWORD *)a2 + 28)) != 0 )
      {
        (*v9)(a1, a2);
        *((_DWORD *)a2 + 28) &= ~v10;
      }
      v2 &= ~v10;
    }
    ++v8;
    v9 += 4;
  }
  while ( v8 < 3 );
  *((_DWORD *)a2 + 29) = v2;
}
