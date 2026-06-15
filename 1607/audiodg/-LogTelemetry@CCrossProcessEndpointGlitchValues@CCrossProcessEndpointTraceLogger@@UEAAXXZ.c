/*
 * XREFs of ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140015E90
 * Callers:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140014C00 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 * Callees:
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r8
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const void *v8; // rdx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v11[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+88h] [rbp-80h]
  __int64 v14; // [rsp+90h] [rbp-78h]
  __int64 *v15; // [rsp+98h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  _QWORD *v17; // [rsp+A8h] [rbp-60h]
  __int64 v18; // [rsp+B0h] [rbp-58h]
  char *v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  char *v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  char *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  char *v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  char *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  char *v29; // [rsp+108h] [rbp+0h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  char *v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+120h] [rbp+18h]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = 10000 * (**((_QWORD **)this + 3) - TickCount64);
    v10 = 10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v11[0] = v3 + *(_QWORD *)&SystemTimeAsFileTime;
    v4 = (const struct _TlgProvider_t *)**((_QWORD **)this + 4);
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000000uLL) )
      {
        v17 = v11;
        v8 = &unk_140045FE1;
        goto LABEL_8;
      }
    }
    else if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v17 = v11;
      v8 = &unk_140045EB4;
LABEL_8:
      v13 = *((_QWORD *)this + 5);
      v15 = &v10;
      v19 = (char *)this + 48;
      v21 = (char *)this + 52;
      v23 = (char *)this + 56;
      v25 = (char *)this + 60;
      v27 = (char *)this + 64;
      v29 = (char *)this + 68;
      v31 = (char *)this + 72;
      v32 = 4LL;
      v30 = 4LL;
      v28 = 4LL;
      v26 = 4LL;
      v24 = 4LL;
      v22 = 4LL;
      v20 = 4LL;
      v18 = 8LL;
      v16 = 8LL;
      v14 = 16LL;
      TlgWrite(v5, v8, v6, v7, 0xCu, &pData);
    }
  }
}
