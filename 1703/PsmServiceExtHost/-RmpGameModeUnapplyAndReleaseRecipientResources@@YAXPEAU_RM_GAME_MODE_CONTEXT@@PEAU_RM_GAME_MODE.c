/*
 * XREFs of ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800316F8
 * Callers:
 *     ?RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030FCC (-RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeUnapplyAndReleaseRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  void (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // rsi
  unsigned int i; // edi

  v3 = &off_18003C168;
  for ( i = 0; i < 3; ++i )
  {
    if ( ((1 << i) & *((_DWORD *)a2 + 29)) != 0 )
      (*(v3 - 1))(a1, a2);
    if ( ((1 << i) & *((_DWORD *)a2 + 28)) != 0 )
      (*v3)(a1, a2);
    v3 += 4;
  }
  *((_DWORD *)a2 + 28) = 0;
  *((_DWORD *)a2 + 29) = 0;
}
