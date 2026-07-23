/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x1406745C4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x140673A78 (PpmEventHiddenProcessorPerformance.c)
 */

void __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  REGHANDLE v2; // rsi
  _DWORD *v3; // rcx
  __int64 v4; // rbx
  unsigned int i; // esi
  __int64 v6; // rcx
  __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  BOOL *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN) )
    {
      v3 = *(_DWORD **)(a1 + 24184);
      v4 = *(_QWORD *)(a1 + 24176);
      v17 = *(unsigned __int8 *)(a1 + 24218);
      if ( v3 )
      {
        v8 = v3[8];
        v9 = v3[9];
        v10 = v3[15];
      }
      else
      {
        v8 = 100;
        v9 = 100;
        v10 = 100;
      }
      if ( v4 )
      {
        v12 = *(_DWORD *)(v4 + 368);
        v13 = *(_DWORD *)(v4 + 364);
        v14 = *(_DWORD *)(v4 + 376);
        v11 = *(_DWORD *)(v4 + 300);
        v15 = *(_DWORD *)(a1 + 24220);
        v16 = *(_BYTE *)(v4 + 340) != 0;
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1524);
        v12 = 100;
        v13 = 100;
        v14 = 100;
        v15 = 100;
        v16 = 0;
      }
      v7 = *(unsigned __int8 *)(a1 + 1616);
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v7;
      v20 = 1LL;
      v19 = a1 + 1617;
      v22 = 4LL;
      v21 = &v17;
      v23 = &v8;
      v25 = &v9;
      v27 = &v10;
      v29 = &v11;
      v31 = &v12;
      v33 = &v13;
      v35 = &v14;
      v37 = &v15;
      v39 = a1 + 23858;
      v41 = a1 + 23859;
      v43 = &v16;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 4LL;
      EtwWrite(v2, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0xEu, &UserData);
      if ( v4 )
      {
        if ( *(_QWORD *)(v4 + 16) == a1 )
        {
          for ( i = 0; i < *(_DWORD *)(v4 + 192); ++i )
          {
            v6 = *(_QWORD *)(v4 + 200) + 96LL * i;
            if ( *(_BYTE *)(v6 + 16) )
              PpmEventHiddenProcessorPerformance(a1, *(_DWORD *)(v6 + 20), *(_DWORD *)(v6 + 32), *(_DWORD *)(v6 + 36));
          }
        }
      }
    }
  }
}
