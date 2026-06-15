/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18002D440
 * Callers:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002998C (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::Fire(AudioSrvVolumeTelemetrySessionVolume *this, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r11
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  __int64 v10; // [rsp+70h] [rbp-9h]
  int v11; // [rsp+78h] [rbp-1h]
  int v12; // [rsp+7Ch] [rbp+3h]
  __int64 v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  __int64 v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  __int64 *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  __int64 *v22; // [rsp+B0h] [rbp+37h]
  int v23; // [rsp+B8h] [rbp+3Fh]
  int v24; // [rsp+BCh] [rbp+43h]
  __int64 v25; // [rsp+E8h] [rbp+6Fh] BYREF

  v25 = a2;
  if ( dword_1800CA040 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(v2 + 32));
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v13 = v3 + 44;
      v16 = v3 + 48;
      v19 = &v7;
      v22 = &v25;
      v10 = v3 + 40;
      v11 = 4;
      v14 = 4;
      v17 = 4;
      v7 = v4;
      v20 = 8;
      v23 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7A49, v5, v6, 8u, &pData);
    }
  }
}
