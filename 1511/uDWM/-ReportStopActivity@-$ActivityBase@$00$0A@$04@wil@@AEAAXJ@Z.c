/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x18000FD84
 * Callers:
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x18000FEC0 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180010080 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000FF70 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     _TlgCreateSz @ 0x1800783F0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180078424 (_TlgCreateWsz.c)
 */

void __fastcall wil::ActivityBase<1,0,5>::ReportStopActivity(WindowFrameLoggingTelemetry::CloneWindow *this, int a2)
{
  void (__fastcall *v3)(WindowFrameLoggingTelemetry::CloneWindow *__hidden); // rdi
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // eax
  const CHAR *v9; // rdx
  __int64 v10; // r10
  const CHAR *v11; // rdx
  int *v12; // r10
  int v13; // ecx
  const WCHAR *v14; // rdx
  __int64 v15; // r10
  int v16; // ecx
  const CHAR *v17; // rdx
  __int64 v18; // r10
  DWORD v19; // ecx
  const CHAR *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r10
  int v23; // ecx
  const CHAR *v24; // rdx
  __int64 v25; // r10
  TraceLoggingHProvider v26; // r11
  const struct _TlgProvider_t *v27; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v29; // rdx
  DWORD v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v36; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  __int64 v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+A0h] [rbp-68h]
  int v42; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A8h] [rbp-60h] BYREF
  int *v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+C8h] [rbp-40h] BYREF
  int *v48; // [rsp+D8h] [rbp-30h]
  int v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E8h] [rbp-20h] BYREF
  DWORD *v52; // [rsp+F8h] [rbp-10h]
  int v53; // [rsp+100h] [rbp-8h]
  int v54; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+118h] [rbp+10h] BYREF
  int *v57; // [rsp+128h] [rbp+20h]
  int v58; // [rsp+130h] [rbp+28h]
  int v59; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+148h] [rbp+40h] BYREF
  EVENT_DATA_DESCRIPTOR v62; // [rsp+158h] [rbp+50h] BYREF
  int *v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+180h] [rbp+78h]
  int v65; // [rsp+184h] [rbp+7Ch]
  DWORD *v66; // [rsp+188h] [rbp+80h]
  int v67; // [rsp+190h] [rbp+88h]
  int v68; // [rsp+194h] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1A8h] [rbp+A0h] BYREF

  if ( a2 < 0 )
  {
    v4 = *((_QWORD *)this + 6);
    v5 = *(_DWORD *)(v4 + 84);
    if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 92) )
      v6 = v4 + 88;
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v4 + 40);
      if ( *(_DWORD *)v7 > 5u
        && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
      {
        v8 = *(_DWORD *)(v6 + 4);
        v9 = *(const CHAR **)(v6 + 48);
        v38 = 0;
        v32 = v8;
        v36 = &v32;
        v37 = 4;
        TlgCreateSz(&pDesc, v9);
        v11 = *(const CHAR **)(v10 + 120);
        v42 = 0;
        v40 = v10 + 56;
        v41 = 4;
        TlgCreateSz(&v43, v11);
        v13 = *v12;
        v14 = (const WCHAR *)*((_QWORD *)v12 + 2);
        v46 = 0;
        v34 = v13;
        v44 = &v34;
        v45 = 4;
        TlgCreateWsz(&v47, v14);
        v16 = *(_DWORD *)(v15 + 24);
        v17 = *(const CHAR **)(v15 + 64);
        v50 = 0;
        v33 = v16;
        v48 = &v33;
        v49 = 4;
        TlgCreateSz(&v51, v17);
        v19 = *(_DWORD *)(v18 + 72);
        v20 = *(const CHAR **)(v18 + 80);
        v54 = 0;
        v30 = v19;
        v52 = &v30;
        v53 = 4;
        TlgCreateSz(&v55, v20);
        TlgCreateWsz(&v56, *(LPCWSTR *)(v21 + 88));
        v23 = *(_DWORD *)(v22 + 96);
        v24 = *(const CHAR **)(v22 + 104);
        v59 = 0;
        v31 = v23;
        v57 = &v31;
        v58 = 4;
        TlgCreateSz(&v60, v24);
        TlgCreateWsz(&v61, *(LPCWSTR *)(v25 + 112));
        TlgWrite(v26, &unk_1800A9EA3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      v27 = *(const struct _TlgProvider_t **)(v4 + 40);
      if ( *(_DWORD *)v27 > 5u
        && (*((_QWORD *)v27 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v27 + 3) & 0x200000000000LL) == *((_QWORD *)v27 + 3) )
      {
        v65 = 0;
        v63 = &v31;
        v64 = 4;
        v31 = a2;
        CurrentThreadId = GetCurrentThreadId();
        v29 = *((_QWORD *)this + 6);
        v68 = 0;
        v30 = CurrentThreadId;
        v66 = &v30;
        v67 = 4;
        TlgCreateSz(&v69, *(LPCSTR *)(v29 + 56));
        TlgCreateWsz(&v70, *(LPCWSTR *)(*((_QWORD *)this + 6) + 64LL));
        TlgWrite(v27, &unk_1800A9FAA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v62);
      }
    }
  }
  v3 = *(void (__fastcall **)(WindowFrameLoggingTelemetry::CloneWindow *__hidden))(*(_QWORD *)this + 8LL);
  if ( v3 == WindowFrameLoggingTelemetry::CloneWindow::StopActivity )
    WindowFrameLoggingTelemetry::CloneWindow::StopActivity(this);
  else
    v3(this);
}
