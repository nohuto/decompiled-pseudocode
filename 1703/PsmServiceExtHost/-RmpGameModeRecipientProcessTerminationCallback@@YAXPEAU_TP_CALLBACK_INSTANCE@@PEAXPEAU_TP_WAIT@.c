/*
 * XREFs of ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180030C20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B0C (-RmpGameModeQueuePolicyWorkerAfterRegistrationChange@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031080 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRecipientProcessTerminationCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WAIT *a3)
{
  struct _RM_GAME_MODE_CONTEXT *v4; // rdi
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // eax
  int v14; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-48h] BYREF
  int *v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+64h] [rbp-1Ch]

  v4 = (struct _RM_GAME_MODE_CONTEXT *)a2[4];
  if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(a1, 1uLL) )
  {
    v8 = *((_DWORD *)a2 + 14);
    v18 = 0;
    v14 = v8;
    v16 = &v14;
    v17 = 4;
    TlgWrite(v5, &unk_1800420F4, v6, v7, 3u, &pData);
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (a2[15] & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v4 + 1524LL) & 2) == 0 )
  {
    RmpGameModeRemoveRecipientProcess(a2);
    RmpGameModeQueuePolicyWorkerAfterRegistrationChange(v4);
  }
  *((_BYTE *)a2 + 120) &= ~2u;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v9, 0x400000000001uLL) )
  {
    v13 = *((_DWORD *)a2 + 14);
    v18 = 0;
    v14 = v13;
    v16 = &v14;
    v17 = 4;
    TlgWrite(v10, &unk_18004228D, v11, v12, 3u, &pData);
  }
  RmpGameModeDereferenceRecipientProcess(a2);
}
