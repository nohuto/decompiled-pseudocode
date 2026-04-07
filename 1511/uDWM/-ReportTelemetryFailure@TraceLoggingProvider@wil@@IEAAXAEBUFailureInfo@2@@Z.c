/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800776BC
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180077280 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800783F0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180078424 (_TlgCreateWsz.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r10
  int v3; // eax
  const CHAR *v4; // rdx
  __int64 v5; // r11
  const CHAR *v6; // rdx
  int *v7; // r11
  int v8; // ecx
  const WCHAR *v9; // rdx
  __int64 v10; // r11
  int v11; // ecx
  const CHAR *v12; // rdx
  __int64 v13; // r11
  int v14; // ecx
  const CHAR *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r11
  int v18; // ecx
  const CHAR *v19; // rdx
  __int64 v20; // r11
  TraceLoggingHProvider v21; // r10
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-60h] BYREF
  int *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+C0h] [rbp-40h] BYREF
  int *v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+E0h] [rbp-20h] BYREF
  int *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+10h] BYREF
  int *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 5u
    && (*(_QWORD *)(v2 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = *((_DWORD *)a2 + 1);
    v4 = (const CHAR *)*((_QWORD *)a2 + 6);
    v30 = 0;
    v26 = v3;
    v28 = &v26;
    v29 = 4;
    TlgCreateSz(&pDesc, v4);
    v6 = *(const CHAR **)(v5 + 120);
    v34 = 0;
    v32 = v5 + 56;
    v33 = 4;
    TlgCreateSz(&v35, v6);
    v8 = *v7;
    v9 = (const WCHAR *)*((_QWORD *)v7 + 2);
    v38 = 0;
    v24 = v8;
    v36 = &v24;
    v37 = 4;
    TlgCreateWsz(&v39, v9);
    v11 = *(_DWORD *)(v10 + 24);
    v12 = *(const CHAR **)(v10 + 64);
    v42 = 0;
    v22 = v11;
    v40 = &v22;
    v41 = 4;
    TlgCreateSz(&v43, v12);
    v14 = *(_DWORD *)(v13 + 72);
    v15 = *(const CHAR **)(v13 + 80);
    v46 = 0;
    v23 = v14;
    v44 = &v23;
    v45 = 4;
    TlgCreateSz(&v47, v15);
    TlgCreateWsz(&v48, *(LPCWSTR *)(v16 + 88));
    v18 = *(_DWORD *)(v17 + 96);
    v19 = *(const CHAR **)(v17 + 104);
    v51 = 0;
    v25 = v18;
    v49 = &v25;
    v50 = 4;
    TlgCreateSz(&v52, v19);
    TlgCreateWsz(&v53, *(LPCWSTR *)(v20 + 112));
    TlgWrite(v21, &unk_1800A933D, 0LL, 0LL, 0x10u, &pData);
  }
}
