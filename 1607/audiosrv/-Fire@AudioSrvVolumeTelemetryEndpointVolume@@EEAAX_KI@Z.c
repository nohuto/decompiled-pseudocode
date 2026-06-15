/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x180051AC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::Fire(AudioSrvVolumeTelemetryEndpointVolume *this, __int64 a2)
{
  __int64 v2; // r10
  const WCHAR *v3; // rdx
  __int64 v4; // r10
  int v5; // ecx
  __int64 v6; // r11
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v9; // [rsp+30h] [rbp-69h] BYREF
  __int64 v10; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  __int64 v12; // [rsp+60h] [rbp-39h]
  int v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+6Ch] [rbp-2Dh]
  __int64 v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  __int64 v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+7h] BYREF
  int *v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  __int64 *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]
  __int64 *v31; // [rsp+D0h] [rbp+37h]
  int v32; // [rsp+D8h] [rbp+3Fh]
  int v33; // [rsp+DCh] [rbp+43h]
  __int64 v34; // [rsp+108h] [rbp+6Fh] BYREF

  v34 = a2;
  if ( dword_1800CA040 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
    {
      v3 = *(const WCHAR **)(v2 + 48);
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v12 = v2 + 32;
      v15 = v2 + 36;
      v18 = v2 + 40;
      v21 = v2 + 44;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      TlgCreateWsz(&pDesc, v3);
      v27 = 0;
      v30 = 0;
      v5 = *(_DWORD *)(v4 + 56);
      v33 = 0;
      v25 = &v9;
      v28 = &v10;
      v31 = &v34;
      v9 = v5;
      v26 = 4;
      v10 = v6;
      v29 = 8;
      v32 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7BA6, v7, v8, 0xAu, &pData);
    }
  }
}
