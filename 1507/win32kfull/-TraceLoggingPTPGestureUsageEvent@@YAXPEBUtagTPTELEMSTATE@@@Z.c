/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C022445C
 * Callers:
 *     HandlePTPTelemetry @ 0x1C01319BC (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]

  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v12 = *((_DWORD *)v1 + 3);
      v14 = &v12;
      v6 = *(_DWORD *)v1;
      v16 = &v6;
      v10 = *((_DWORD *)v1 + 4);
      v18 = &v10;
      v8 = *((_DWORD *)v1 + 1);
      v20 = &v8;
      v4 = *((_DWORD *)v1 + 5);
      v22 = &v4;
      v5 = *((_DWORD *)v1 + 2);
      v24 = &v5;
      v7 = *((_DWORD *)v1 + 6);
      v26 = &v7;
      v9 = *((_DWORD *)v1 + 7);
      v28 = &v9;
      v11 = *((_DWORD *)v1 + 8);
      v30 = &v11;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      TlgWrite(v1, &unk_1C02EA918, v2, v3, 0xBu, &pData);
    }
  }
}
