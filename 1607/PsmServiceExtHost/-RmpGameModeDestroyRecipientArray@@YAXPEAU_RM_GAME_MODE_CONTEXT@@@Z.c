/*
 * XREFs of ?RmpGameModeDestroyRecipientArray@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031ADC
 * Callers:
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031F38 (-RmpGameModeUnapplyAllPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeDestroyRecipientArray(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned int i; // edi

  if ( *((_QWORD *)a1 + 5) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 16); ++i )
      NtClose(*(HANDLE *)(*((_QWORD *)a1 + 5) + 16LL * i));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)a1 + 5));
    *((_QWORD *)a1 + 5) = 0LL;
    *((_DWORD *)a1 + 16) = 0;
  }
}
