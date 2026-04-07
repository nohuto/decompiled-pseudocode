/*
 * XREFs of ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18003D6C0
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18003D370 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003D474 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D5B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18004CAA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800795D0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180079604 (_TlgCreateWsz.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StopActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  struct WindowFrameLogging *v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v28[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+7Ch] [rbp-84h]
  void *v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  int *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  DWORD *p_CurrentThreadId; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+100h] [rbp+0h] BYREF
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+120h] [rbp+20h] BYREF
  int *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+140h] [rbp+40h] BYREF
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+170h] [rbp+70h] BYREF
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  int *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1D0h] [rbp+D0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v5 = WindowFrameLogging::Instance();
  if ( v4 )
  {
    if ( **((_DWORD **)v5 + 1) > 5u )
    {
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v19 = v4[1];
      v41 = &v19;
      v42 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v44 = v4 + 14;
      v45 = 4LL;
      TlgCreateSz(&v46, v11);
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v20 = *v4;
      v47 = &v20;
      v48 = 4LL;
      TlgCreateWsz(&v49, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v21 = v4[6];
      v50 = &v21;
      v51 = 4LL;
      TlgCreateSz(&v52, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v22 = v4[18];
      v53 = &v22;
      v54 = 4LL;
      TlgCreateSz(&v55, v14);
      TlgCreateWsz(&v56, *((LPCWSTR *)v4 + 11));
      v15 = (const CHAR *)*((_QWORD *)v4 + 13);
      v23 = v4[24];
      v57 = &v23;
      v58 = 4LL;
      TlgCreateSz(&v59, v15);
      TlgCreateWsz(&v60, *((LPCWSTR *)v4 + 14));
      v16 = v4[2];
      v17 = (const CHAR *)*((_QWORD *)v4 + 5);
      v61 = &v24;
      v25 = v4[15];
      v24 = v16;
      v63 = &v25;
      v62 = 4LL;
      v64 = 4LL;
      TlgCreateSz(&v65, v17);
      TlgWrite(v18, &unk_1800A833E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v6 = *((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v36 = &v26;
      v26 = v7;
      v37 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v39 = 4LL;
      v8 = *((_QWORD *)this + 6) + 8LL;
      v28[1] = 517;
      v30 = *(unsigned __int16 **)(v6 + 8);
      v28[0] = ((unsigned int)&unk_1800A8464 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v9 = *(_QWORD *)(v6 + 32);
      v29 = 0LL;
      v31 = *v30;
      v33 = &unk_1800A846F;
      v32 = 2;
      v34 = 48;
      v35 = 1;
      EtwEventWriteTransfer(v9, v28, v8, 0LL, 4, &v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
