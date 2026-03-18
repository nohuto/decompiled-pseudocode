/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x14063B648
 * Callers:
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rdi
  _DWORD *v4; // rdx
  _DWORD *v5; // rcx
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C8h] BYREF
  int v10; // [rsp+44h] [rbp-C4h] BYREF
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+5Ch] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  int *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  int *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  int *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v1 = &retaddr;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v4 = *(_DWORD **)(a1 + 24184);
      v5 = *(_DWORD **)(a1 + 24176);
      v16 = *(unsigned __int8 *)(a1 + 24218);
      if ( v4 )
      {
        v15 = v4[6];
        v10 = v4[7];
        v14 = v4[13];
      }
      else
      {
        v15 = 100;
        v10 = 100;
        v14 = 100;
      }
      if ( v5 )
      {
        v8 = v5[90];
        v9 = v5[89];
        v11 = v5[92];
        v12 = v5[73];
        v13 = *(_DWORD *)(a1 + 24220);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 1524);
        v8 = 100;
        v9 = 100;
        v11 = 100;
        v13 = 100;
      }
      LOWORD(v7) = *(unsigned __int8 *)(a1 + 1616);
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v7;
      v19 = 1LL;
      v18 = a1 + 1617;
      v21 = 4LL;
      v20 = &v16;
      v22 = &v15;
      v24 = &v10;
      v26 = &v14;
      v28 = &v12;
      v30 = &v8;
      v32 = &v9;
      v34 = &v11;
      v36 = &v13;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      LOBYTE(v1) = EtwWrite(v3, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v1;
}
