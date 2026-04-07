/*
 * XREFs of ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180079200
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18004CAA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180077E34 (-IgnoreCurrentThread@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180079594 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     _TlgCreateSz @ 0x1800795D0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180079604 (_TlgCreateWsz.c)
 */

void __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::StopActivity(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  struct WindowFrameLogging *v5; // rax
  __int64 v6; // r10
  int v7; // eax
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  int v10; // ecx
  const WCHAR *v11; // rdx
  int v12; // ecx
  const CHAR *v13; // rdx
  DWORD v14; // ecx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  const struct _TlgProvider_t *v19; // rdi
  int v20; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+58h] [rbp-B0h] BYREF
  int *v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h]
  DWORD *v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-78h]
  int v33; // [rsp+94h] [rbp-74h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+E8h] [rbp-20h] BYREF
  int *v43; // [rsp+F8h] [rbp-10h]
  int v44; // [rsp+100h] [rbp-8h]
  int v45; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+108h] [rbp+0h] BYREF
  int *v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  int v49; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+128h] [rbp+20h] BYREF
  DWORD *v51; // [rsp+138h] [rbp+30h]
  int v52; // [rsp+140h] [rbp+38h]
  int v53; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  int *v56; // [rsp+168h] [rbp+60h]
  int v57; // [rsp+170h] [rbp+68h]
  int v58; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+188h] [rbp+80h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v5 = WindowFrameLogging::Instance();
  if ( v4 )
  {
    v6 = *((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v6 > 5u
      && (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x200000000000LL) == *(_QWORD *)(v6 + 24) )
    {
      v7 = v4[1];
      v8 = (const CHAR *)*((_QWORD *)v4 + 6);
      v37 = 0;
      v24 = v7;
      v35 = &v24;
      v36 = 4;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 15);
      v41 = 0;
      v39 = v4 + 14;
      v40 = 4;
      TlgCreateSz(&v42, v9);
      v10 = *v4;
      v11 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v45 = 0;
      v25 = v10;
      v43 = &v25;
      v44 = 4;
      TlgCreateWsz(&v46, v11);
      v12 = v4[6];
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v49 = 0;
      v26 = v12;
      v47 = &v26;
      v48 = 4;
      TlgCreateSz(&v50, v13);
      v14 = v4[18];
      v15 = (const CHAR *)*((_QWORD *)v4 + 10);
      v53 = 0;
      v22 = v14;
      v51 = &v22;
      v52 = 4;
      TlgCreateSz(&v54, v15);
      TlgCreateWsz(&v55, *((LPCWSTR *)v4 + 11));
      v16 = v4[24];
      v17 = (const CHAR *)*((_QWORD *)v4 + 13);
      v58 = 0;
      v23 = v16;
      v56 = &v23;
      v57 = 4;
      TlgCreateSz(&v59, v17);
      TlgCreateWsz(&v60, *((LPCWSTR *)v4 + 14));
      TlgWrite(v18, &unk_1800A7A8E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v19 = (const struct _TlgProvider_t *)*((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v19 > 5u
      && (*((_QWORD *)v19 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v19 + 3) & 0x200000000000LL) == *((_QWORD *)v19 + 3) )
    {
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = 0;
      v28 = &v23;
      v23 = v20;
      v29 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 0;
      v22 = CurrentThreadId;
      v32 = 4;
      v31 = &v22;
      TlgWrite(v19, &unk_1800A7B9A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v27);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
