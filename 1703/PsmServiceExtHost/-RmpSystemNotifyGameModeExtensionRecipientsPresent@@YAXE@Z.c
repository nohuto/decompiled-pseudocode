/*
 * XREFs of ?RmpSystemNotifyGameModeExtensionRecipientsPresent@@YAXE@Z @ 0x180037CE8
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A550 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x1800216A4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

void __fastcall RmpSystemNotifyGameModeExtensionRecipientsPresent(char a1)
{
  char v2; // al
  __int64 v3; // rcx

  v2 = IsNotifyGameModeExtensionRecipientsPresentPresent();
  v3 = 0LL;
  if ( v2 )
  {
    LOBYTE(v3) = a1 != 0;
    NotifyGameModeExtensionRecipientsPresent(v3);
  }
}
