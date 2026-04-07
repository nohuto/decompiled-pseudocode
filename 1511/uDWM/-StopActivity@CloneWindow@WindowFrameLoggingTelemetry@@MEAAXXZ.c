/*
 * XREFs of ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000FF70
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x18000FD84 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@$00$0A@$04@wil@@QEAAXXZ @ 0x18000FE80 (-zInternalStop@-$ActivityBase@$00$0A@$04@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010460 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800783F0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180078424 (_TlgCreateWsz.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StopActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rdi
  int v7; // eax
  DWORD CurrentThreadId; // eax
  int v9; // eax
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  int v12; // ecx
  const WCHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  int v18; // ecx
  const CHAR *v19; // rdx
  DWORD v20; // ecx
  const CHAR *v21; // rdx
  TraceLoggingHProvider v22; // r10
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+58h] [rbp-B0h] BYREF
  int *v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-88h]
  int v33; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A8h] [rbp-60h] BYREF
  int *v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C8h] [rbp-40h] BYREF
  int *v43; // [rsp+D8h] [rbp-30h]
  int v44; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+E8h] [rbp-20h] BYREF
  int *v47; // [rsp+F8h] [rbp-10h]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+118h] [rbp+10h] BYREF
  int *v52; // [rsp+128h] [rbp+20h]
  int v53; // [rsp+130h] [rbp+28h]
  int v54; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v57; // [rsp+158h] [rbp+50h]
  int v58; // [rsp+160h] [rbp+58h]
  int v59; // [rsp+164h] [rbp+5Ch]
  int *v60; // [rsp+168h] [rbp+60h]
  int v61; // [rsp+170h] [rbp+68h]
  int v62; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+178h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  int *v65; // [rsp+1A8h] [rbp+A0h]
  int v66; // [rsp+1B0h] [rbp+A8h]
  int v67; // [rsp+1B4h] [rbp+ACh]
  DWORD *v68; // [rsp+1B8h] [rbp+B0h]
  int v69; // [rsp+1C0h] [rbp+B8h]
  int v70; // [rsp+1C4h] [rbp+BCh]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[21];
  if ( v3 < 0 && v3 == v1[23] )
    v4 = v1 + 22;
  else
    v4 = 0LL;
  wil::ActivityBase<1,0,5>::zInternalStop((__int64)this);
  v5 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    if ( **(_DWORD **)(v5 + 40) > 5u )
    {
      v9 = v4[1];
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v33 = 0;
      v28 = v9;
      v31 = &v28;
      v32 = 4;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v37 = 0;
      v35 = v4 + 14;
      v36 = 4;
      TlgCreateSz(&v38, v11);
      v12 = *v4;
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v41 = 0;
      v26 = v12;
      v39 = &v26;
      v40 = 4;
      TlgCreateWsz(&v42, v13);
      v14 = v4[6];
      v15 = (const CHAR *)*((_QWORD *)v4 + 8);
      v45 = 0;
      v27 = v14;
      v43 = &v27;
      v44 = 4;
      TlgCreateSz(&v46, v15);
      v16 = v4[18];
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v49 = 0;
      v29 = v16;
      v47 = &v29;
      v48 = 4;
      TlgCreateSz(&v50, v17);
      TlgCreateWsz(&v51, *((LPCWSTR *)v4 + 11));
      v18 = v4[24];
      v19 = (const CHAR *)*((_QWORD *)v4 + 13);
      v54 = 0;
      v25 = v18;
      v52 = &v25;
      v53 = 4;
      TlgCreateSz(&v55, v19);
      TlgCreateWsz(&v56, *((LPCWSTR *)v4 + 14));
      v20 = v4[2];
      v59 = 0;
      v62 = 0;
      v21 = (const CHAR *)*((_QWORD *)v4 + 5);
      v57 = &v24;
      v23 = v4[15];
      v24 = v20;
      v60 = &v23;
      v58 = 4;
      v61 = 4;
      TlgCreateSz(&v63, v21);
      TlgWrite(v22, &unk_1800A9D15, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v30);
    }
  }
  else
  {
    v6 = *(const struct _TlgProvider_t **)(v5 + 40);
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = *(_DWORD *)(v5 + 84);
      v67 = 0;
      v23 = v7;
      v65 = &v23;
      v66 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v70 = 0;
      v24 = CurrentThreadId;
      v69 = 4;
      v68 = &v24;
      TlgWrite(v6, &unk_1800A9E3B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
