/*
 * XREFs of ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44
 * Callers:
 *     RmpGameModeOnHostImportanceChanged @ 0x1800320B0 (RmpGameModeOnHostImportanceChanged.c)
 *     RmpGameModeRegisterActivityHost @ 0x180032168 (RmpGameModeRegisterActivityHost.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001E37C (-RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeReleaseAllocatedResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x180031CE8 (-RmpGameModeReleaseAllocatedResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 */

void __fastcall RmpGameModeEvaluateRecipient(struct _RM_GAME_MODE_CONTEXT *a1)
{
  _QWORD *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // edx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !*((_QWORD *)a1 + 3) )
  {
    v2 = (_QWORD *)((char *)a1 + 8);
    if ( (_QWORD *)*v2 == v2 )
      goto LABEL_10;
    v3 = (const struct _TlgProvider_t *)(*v2 - 1072LL);
    if ( (*((_BYTE *)v3 + 1112) & 0x41) != 0x41 )
      v3 = 0LL;
    if ( !v3 )
    {
LABEL_10:
      v7 = *((_DWORD *)a1 + 14);
      if ( v7 )
        RmpGameModeReleaseAllocatedResources(a1, v7);
    }
    else
    {
      *((_QWORD *)a1 + 3) = v3;
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v3, 1uLL) )
      {
        v8 = *((_QWORD *)v4 + 3);
        v10 = &v8;
        v11 = 8LL;
        TlgWrite(v4, &unk_180041714, v5, v6, 3u, &pData);
      }
      RmpGameModeApplyPoliciesToRecipient(a1);
    }
  }
  RmpGameModePublishGlobalState(a1);
}
