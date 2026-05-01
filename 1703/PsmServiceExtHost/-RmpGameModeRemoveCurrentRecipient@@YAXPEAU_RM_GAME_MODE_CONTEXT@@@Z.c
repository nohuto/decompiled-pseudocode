/*
 * XREFs of ?RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030FCC
 * Callers:
 *     ?RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001A984 (-RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 *     ?RmpGameModeRecheckCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B24 (-RmpGameModeRecheckCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FBE0 (-RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800316F8 (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModeRemoveCurrentRecipient(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // rdi
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // eax
  int v8; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+64h] [rbp-24h]

  v1 = *((_QWORD *)a1 + 3);
  RmpGameModeUnapplyAndReleaseRecipientResources(a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v1);
  *((_QWORD *)a1 + 3) = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v3, 9uLL) )
  {
    v7 = *(_DWORD *)(v1 + 56);
    v12 = 0;
    v8 = v7;
    v10 = &v8;
    v11 = 4;
    TlgWrite(v4, &unk_180041FDB, v5, v6, 3u, &pData);
  }
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v1);
  RmpGameModePublishRecipientProcessId(a1);
}
