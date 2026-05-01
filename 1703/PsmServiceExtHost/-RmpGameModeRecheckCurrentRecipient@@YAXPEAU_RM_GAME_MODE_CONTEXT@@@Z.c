/*
 * XREFs of ?RmpGameModeRecheckCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B24
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A550 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030FCC (-RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeRecheckCurrentRecipient(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int64 v1; // rsi
  char v3; // bl
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned __int8 v7; // dl
  char v8; // [rsp+38h] [rbp-29h] BYREF
  char v9; // [rsp+39h] [rbp-28h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v12; // [rsp+68h] [rbp+7h]
  __int64 v13; // [rsp+70h] [rbp+Fh]
  char *v14; // [rsp+78h] [rbp+17h]
  const struct _TlgProvider_t *v15; // [rsp+80h] [rbp+1Fh]
  char *v16; // [rsp+88h] [rbp+27h]
  const struct _TlgProvider_t *v17; // [rsp+90h] [rbp+2Fh]

  v1 = *((_QWORD *)a1 + 3);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v3 = *(_BYTE *)(v1 + 120);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (v3 & 5) != 1 )
  {
    if ( (unsigned int)dword_18004D030 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)1, 1uLL) )
      {
        v7 = *(_BYTE *)(v1 + 120);
        v10 = *(_DWORD *)(v1 + 56);
        v12 = &v10;
        v8 = (unsigned __int8)v4 & v7;
        v13 = 4LL;
        v14 = &v8;
        v16 = &v9;
        v15 = v4;
        v9 = (unsigned __int8)v4 & (v7 >> 2);
        v17 = v4;
        TlgWrite(v4, &unk_180042064, v5, v6, 5u, &pData);
      }
    }
    RmpGameModeRemoveCurrentRecipient(a1);
  }
}
