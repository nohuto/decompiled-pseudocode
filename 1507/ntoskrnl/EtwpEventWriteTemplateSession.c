/*
 * XREFs of EtwpEventWriteTemplateSession @ 0x1406E6B70
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406EA9E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSession(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  ULONG v3; // r9d
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  __int64 v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+6Ch] [rbp-94h]
  void *v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+8Ch] [rbp-74h]
  void *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  __int64 v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]

  UserData.Ptr = a3 + 292;
  *(_QWORD *)&UserData.Size = 16LL;
  v9 = 4LL;
  v8 = a3 + 12;
  v10 = *(_QWORD *)(a3 + 160);
  v3 = 6;
  v11 = *(unsigned __int16 *)(a3 + 152);
  v15 = *(_QWORD *)(a3 + 176);
  v16 = *(unsigned __int16 *)(a3 + 168);
  v12 = 0;
  v13 = &EtwpNull;
  v14 = 2LL;
  v17 = 0;
  v18 = &EtwpNull;
  v19 = 2LL;
  if ( a2 == &ETW_EVENT_START_TRACE
    || a2 == &ETW_EVENT_STOP_TRACE
    || a2 == (const EVENT_DESCRIPTOR *)&ETW_EVENT_SESSION_INFO )
  {
    v21 = 4LL;
    v20 = a3 + 240;
    v3 = 12;
    v23 = 4LL;
    v22 = a3 + 252;
    v24 = a3 + 4;
    v6 = *(_DWORD *)(a3 + 260);
    v5 = *(_DWORD *)(a3 + 248);
    v26 = &v6;
    v28 = &v5;
    v30 = a3 + 228;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
  }
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, v3, &UserData);
}
