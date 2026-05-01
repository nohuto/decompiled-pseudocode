/*
 * XREFs of ?RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FBE0
 * Callers:
 *     ?RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001A984 (-RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FB3C (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030FCC (-RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpGameModePublishRecipientProcessId(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // rax
  int v2; // ecx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v1 = *((_QWORD *)a1 + 3);
  if ( v1 )
    v2 = *(_DWORD *)(v1 + 56);
  else
    v2 = 0;
  v7 = v2;
  v8 = RtlPublishWnfStateData(WNF_RM_GAME_MODE_ACTIVE, 0LL, &v7, 4LL, 0LL);
  if ( v8 < 0 && (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v3, 0x400000000001uLL) )
    {
      v12 = 0;
      v10 = &v8;
      v11 = 4;
      TlgWrite(v4, &unk_18004437D, v5, v6, 3u, &pData);
    }
  }
}
