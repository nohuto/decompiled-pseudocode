/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C021E3F0
 * Callers:
 *     HandlePTPTelemetry @ 0x1C015526C (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int Data1; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *p_Data1; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  int *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]

  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
    {
      v3 = *(_DWORD *)&v2->Data4[4];
      v17 = &v3;
      Data1 = v2->Data1;
      p_Data1 = (int *)&Data1;
      v5 = v2[1].Data1;
      v21 = (int *)&v5;
      v6 = *(_DWORD *)&v2->Data2;
      v23 = &v6;
      v7 = *(_DWORD *)&v2[1].Data2;
      v25 = &v7;
      v8 = *(_DWORD *)v2->Data4;
      v27 = &v8;
      v9 = *(_DWORD *)v2[1].Data4;
      v29 = &v9;
      v10 = *(_DWORD *)&v2[1].Data4[4];
      v31 = &v10;
      v11 = v2[2].Data1;
      v33 = (int *)&v11;
      v12 = *(_DWORD *)&v2[2].Data2;
      v35 = &v12;
      v13 = *(_DWORD *)v2[2].Data4;
      v37 = &v13;
      v14 = *(_DWORD *)&v2[2].Data4[4];
      v39 = &v14;
      v15 = v2[3].Data1;
      v41 = (int *)&v15;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EEDCD, v1, v2, 0xFu, &pData);
    }
  }
}
