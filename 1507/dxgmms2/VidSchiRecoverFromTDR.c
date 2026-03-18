/*
 * XREFs of VidSchiRecoverFromTDR @ 0x1C007AB08
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0011DE4 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 */

char __fastcall VidSchiRecoverFromTDR(__int64 a1, ULONGLONG a2)
{
  __int64 v3; // rcx
  const GUID *v4; // r9
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rdi
  const CHAR *v9; // rsi
  char result; // al
  ULONGLONG v11; // rdx
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rax
  TraceLoggingHProvider v15; // rcx
  LPCGUID v16; // r9
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  const struct _TlgProvider_t *v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  const struct _TlgProvider_t **v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-48h] BYREF
  int v30; // [rsp+C4h] [rbp-44h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  const struct _TlgProvider_t **v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1C0027010 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, a2) )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v19 = *(_QWORD *)(v5 + 252);
    v24 = (const struct _TlgProvider_t **)&v19;
    v25 = 8LL;
    v6 = *(unsigned __int16 **)(v5 + 976);
    v26 = &v29;
    v27 = 2LL;
    LODWORD(v5) = *v6;
    v28 = *((_QWORD *)v6 + 1);
    v29 = v5;
    v7 = *(const struct _TlgProvider_t **)(a1 + 2488);
    v30 = 0;
    LODWORD(v20) = *((_DWORD *)v7 + 4);
    v31 = &v20;
    v33 = &v18;
    LODWORD(v17) = *(_DWORD *)(a1 + 2504);
    v35 = &v17;
    v32 = 4LL;
    v18 = v7;
    v34 = 8LL;
    v36 = 4LL;
    TlgWrite(v7, &unk_1C0020F0C, 0LL, v4, 8u, &pData);
  }
  v8 = *(_QWORD *)(a1 + 2488);
  v21 = *(_QWORD *)(v8 + 2792);
  v9 = *(const CHAR **)(v8 + 80);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(*(_QWORD *)(a1 + 2488) + 2872LL) = &Event;
  TdrResetFromTimeoutAsync(*(struct _TDR_RECOVERY_CONTEXT **)(a1 + 2488));
  result = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned int)dword_1C0027010 > 5 )
  {
    result = TlgKeywordOn(v12, v11);
    if ( result )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v18 = *(const struct _TlgProvider_t **)(v13 + 252);
      v24 = &v18;
      v25 = 8LL;
      v14 = *(unsigned __int16 **)(v13 + 976);
      v26 = &v29;
      v27 = 2LL;
      LODWORD(v13) = *v14;
      v28 = *((_QWORD *)v14 + 1);
      v31 = &v19;
      LODWORD(v17) = *(_DWORD *)(a1 + 2504);
      v33 = (const struct _TlgProvider_t **)&v17;
      v29 = v13;
      v35 = &v21;
      v30 = 0;
      v19 = v8;
      v32 = 8LL;
      v34 = 4LL;
      v36 = 8LL;
      TlgCreateSz(&pDesc, v9);
      return TlgWrite(v15, &unk_1C0020E95, 0LL, v16, 9u, &pData);
    }
  }
  return result;
}
