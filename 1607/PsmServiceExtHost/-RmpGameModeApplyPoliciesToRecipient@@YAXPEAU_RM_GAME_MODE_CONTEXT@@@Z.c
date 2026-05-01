/*
 * XREFs of ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888
 * Callers:
 *     ?RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031B44 (-RmpGameModeEvaluateRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     RmpGameModeReapplyCurrentResourceAllotment @ 0x180032144 (RmpGameModeReapplyCurrentResourceAllotment.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpGameModeAllocateExclusiveResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAK@Z @ 0x1800317A0 (-RmpGameModeAllocateExclusiveResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAK@Z.c)
 *     ?RmpGameModeDestroyRecipientArray@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031ADC (-RmpGameModeDestroyRecipientArray@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20 (-RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_N.c)
 *     ?RmpGameModeReleaseAllocatedResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x180031CE8 (-RmpGameModeReleaseAllocatedResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 *     ?RmpGameModeTryApplyPoliciesToRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x180031E30 (-RmpGameModeTryApplyPoliciesToRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 */

void __fastcall RmpGameModeApplyPoliciesToRecipient(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // rax
  unsigned int v13; // [rsp+38h] [rbp-39h] BYREF
  int v14; // [rsp+3Ch] [rbp-35h] BYREF
  int v15; // [rsp+40h] [rbp-31h] BYREF
  __int64 v16; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  int *v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  unsigned int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]
  int *v25; // [rsp+A8h] [rbp+37h]
  int v26; // [rsp+B0h] [rbp+3Fh]
  int v27; // [rsp+B4h] [rbp+43h]

  v1 = *((_QWORD *)a1 + 3);
  RmpGameModeAllocateExclusiveResources(a1, &v13);
  v3 = v13;
  if ( v13 )
  {
    v17[0] = a1;
    v17[1] = 0LL;
    v14 = RmpActivityHostActOnProcesses(
            (struct _RM_ACTIVITY_HOST *)v1,
            12288,
            0,
            (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RmpGameModeConstructRecipientArrayCallback,
            v17);
    if ( v14 >= 0 && *((_QWORD *)a1 + 5) )
    {
      RmpGameModeTryApplyPoliciesToRecipients(a1, v3);
      if ( *((_DWORD *)a1 + 17) )
        goto LABEL_10;
    }
    else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v4, 1uLL) )
    {
      v21 = 0;
      v19 = &v14;
      v20 = 4;
      TlgWrite(v5, &unk_1800415C0, v6, v7, 3u, &pData);
    }
    RmpGameModeDestroyRecipientArray(a1);
    RmpGameModeReleaseAllocatedResources(a1, *((_DWORD *)a1 + 14));
  }
LABEL_10:
  RmpGameModePublishResourceAllotment(
    *((_DWORD *)a1 + 17),
    (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 48),
    (struct _WNF_STATE_NAME *)(*((_QWORD *)a1 + 3) + 1088LL));
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v8, 1uLL) )
    {
      v12 = *(_QWORD *)(v1 + 24);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v16 = v12;
      v19 = (int *)&v16;
      v22 = &v13;
      v15 = *((_DWORD *)a1 + 17);
      v25 = &v15;
      v20 = 8;
      v13 = v3;
      v23 = 4;
      v26 = 4;
      TlgWrite(v9, &unk_18004167E, v10, v11, 5u, &pData);
    }
  }
}
