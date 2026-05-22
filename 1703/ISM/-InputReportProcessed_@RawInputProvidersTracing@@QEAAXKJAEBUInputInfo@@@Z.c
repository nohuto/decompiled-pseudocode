/*
 * XREFs of ?InputReportProcessed_@RawInputProvidersTracing@@QEAAXKJAEBUInputInfo@@@Z @ 0x180076344
 * Callers:
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x18007A4F0 (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::InputReportProcessed_(
        RawInputProvidersTracing *this,
        int a2,
        int a3,
        const struct InputInfo *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-C0h] BYREF
  int *v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+68h] [rbp-98h]
  char *v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  int *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  char *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  char *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  char *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  char *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  char *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  char *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  char *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  int *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+198h] [rbp+98h] BYREF
  int v38; // [rsp+1A0h] [rbp+A0h] BYREF

  v38 = a3;
  v37 = a2;
  if ( a3 >= 0 )
  {
    v6 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 2) != 0 && (*(_QWORD *)(v6 + 24) & 2LL) == *(_QWORD *)(v6 + 24) )
    {
      v11 = 4LL;
      v10 = &v37;
      v12 = (char *)a4 + 712;
      v7 = *((_DWORD *)a4 + 177);
      v14 = &v7;
      v8 = *((_DWORD *)a4 + 176);
      v16 = &v8;
      v18 = (char *)a4 + 1364;
      v20 = (char *)a4 + 1296;
      v22 = (char *)a4 + 1320;
      v24 = (char *)a4 + 1396;
      v26 = (char *)a4 + 1384;
      v28 = (char *)a4 + 1397;
      v30 = (char *)a4 + 1368;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 1LL;
      v21 = 1LL;
      v23 = 4LL;
      v25 = 1LL;
      v27 = 4LL;
      v29 = 1LL;
      v31 = 4LL;
      TlgWrite((TraceLoggingHProvider)v6, &unk_1800B9BD5, 0LL, 0LL, 0xDu, &v9);
    }
  }
  else
  {
    v5 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v5 > 2u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
    {
      v33 = &v37;
      v35 = &v38;
      v34 = 4LL;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)v5, &unk_1800B9B9C, 0LL, 0LL, 4u, &pData);
    }
  }
}
