/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C02257F8
 * Callers:
 *     HandlePTPTelemetry @ 0x1C014F8EC (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *v19; // [rsp+A0h] [rbp-60h]
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

  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = *((_DWORD *)v1 + 3);
      v15 = &v5;
      v13 = *(_DWORD *)v1;
      v17 = &v13;
      v7 = *((_DWORD *)v1 + 4);
      v19 = &v7;
      v11 = *((_DWORD *)v1 + 1);
      v21 = &v11;
      v9 = *((_DWORD *)v1 + 5);
      v23 = &v9;
      v4 = *((_DWORD *)v1 + 2);
      v25 = &v4;
      v6 = *((_DWORD *)v1 + 6);
      v27 = &v6;
      v8 = *((_DWORD *)v1 + 7);
      v29 = &v8;
      v10 = *((_DWORD *)v1 + 8);
      v31 = &v10;
      v12 = *((_DWORD *)v1 + 9);
      v33 = &v12;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      TlgWrite(v1, &unk_1C02E9919, v2, v3, 0xCu, &pData);
    }
  }
}
