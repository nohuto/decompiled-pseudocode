/*
 * XREFs of ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18006FD60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180004560 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18006E5A0 (-IgnoreCurrentThread@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x180070184 (-zInternalStop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x1800701C0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1800701F4 (_TlgCreateWsz.c)
 */

void __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::StopActivity(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // r10
  int v6; // eax
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  int v9; // ecx
  const WCHAR *v10; // rdx
  int v11; // ecx
  const CHAR *v12; // rdx
  DWORD v13; // ecx
  const CHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  __int64 v18; // rdx
  const struct _TlgProvider_t *v19; // rdi
  int v20; // eax
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
  v3 = v1[21];
  if ( v3 < 0 && v3 == v1[23] )
    v4 = v1 + 22;
  else
    v4 = 0LL;
  wil::ActivityBase<1,35184372088832,5>::zInternalStop();
  if ( v4 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 40LL);
    if ( *(_DWORD *)v5 > 5u
      && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = v4[1];
      v7 = (const CHAR *)*((_QWORD *)v4 + 6);
      v37 = 0;
      v24 = v6;
      v35 = &v24;
      v36 = 4;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v4 + 15);
      v41 = 0;
      v39 = v4 + 14;
      v40 = 4;
      TlgCreateSz(&v42, v8);
      v9 = *v4;
      v10 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v45 = 0;
      v26 = v9;
      v43 = &v26;
      v44 = 4;
      TlgCreateWsz(&v46, v10);
      v11 = v4[6];
      v12 = (const CHAR *)*((_QWORD *)v4 + 8);
      v49 = 0;
      v25 = v11;
      v47 = &v25;
      v48 = 4;
      TlgCreateSz(&v50, v12);
      v13 = v4[18];
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v53 = 0;
      v22 = v13;
      v51 = &v22;
      v52 = 4;
      TlgCreateSz(&v54, v14);
      TlgCreateWsz(&v55, *((LPCWSTR *)v4 + 11));
      v15 = v4[24];
      v16 = (const CHAR *)*((_QWORD *)v4 + 13);
      v58 = 0;
      v23 = v15;
      v56 = &v23;
      v57 = 4;
      TlgCreateSz(&v59, v16);
      TlgCreateWsz(&v60, *((LPCWSTR *)v4 + 14));
      TlgWrite(v17, &unk_1800A7297, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v18 = *((_QWORD *)this + 6);
    v19 = *(const struct _TlgProvider_t **)(v18 + 40);
    if ( *(_DWORD *)v19 > 5u
      && (*((_QWORD *)v19 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v19 + 3) & 0x200000000000LL) == *((_QWORD *)v19 + 3) )
    {
      v20 = *(_DWORD *)(v18 + 84);
      v30 = 0;
      v23 = v20;
      v28 = &v23;
      v29 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 0;
      v22 = CurrentThreadId;
      v32 = 4;
      v31 = &v22;
      TlgWrite(v19, &unk_1800A73A3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v27);
    }
  }
  wil::ActivityBase<1,35184372088832,5>::IgnoreCurrentThread((__int64)this);
}
