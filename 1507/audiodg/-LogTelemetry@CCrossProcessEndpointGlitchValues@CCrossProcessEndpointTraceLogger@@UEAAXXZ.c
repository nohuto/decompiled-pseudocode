/*
 * XREFs of ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140017B80
 * Callers:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140016440 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 * Callees:
 *     _TlgWrite @ 0x140002780 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  __int64 TickCount; // rbx
  const GUID *v3; // r9
  _BYTE *v4; // rax
  const struct _TlgProvider_t *v5; // r8
  const void *v6; // rdx
  __int64 v7; // [rsp+38h] [rbp-D0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-80h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  __int64 *v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  __int64 *v16; // [rsp+A8h] [rbp-60h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  char *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  char *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  char *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  char *v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  char *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  char *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  char *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount = GetTickCount();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v7 = 10000 * (**((_QWORD **)this + 3) - TickCount) + *(_QWORD *)&SystemTimeAsFileTime;
    v4 = (_BYTE *)*((_QWORD *)this + 1);
    v9 = 10000 * (**((_QWORD **)this + 2) - TickCount) + *(_QWORD *)&SystemTimeAsFileTime;
    v10 = v7;
    v5 = (const struct _TlgProvider_t *)**((_QWORD **)this + 4);
    if ( *v4 )
    {
      if ( *(_DWORD *)v5 > 5u
        && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
        && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
      {
        v6 = &unk_140045873;
LABEL_14:
        v12 = *((_QWORD *)this + 5);
        v14 = &v9;
        v18 = (char *)this + 48;
        v20 = (char *)this + 52;
        v22 = (char *)this + 56;
        v24 = (char *)this + 60;
        v26 = (char *)this + 64;
        v28 = (char *)this + 68;
        v30 = (char *)this + 72;
        v31 = 4LL;
        v29 = 4LL;
        v27 = 4LL;
        v25 = 4LL;
        v23 = 4LL;
        v21 = 4LL;
        v19 = 4LL;
        v17 = 8LL;
        v16 = &v10;
        v15 = 8LL;
        v13 = 16LL;
        TlgWrite(v5, v6, (LPCGUID)v5, v3, 0xCu, &pData);
      }
    }
    else if ( *(_DWORD *)v5 > 5u
           && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
           && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &unk_140045746;
      goto LABEL_14;
    }
  }
}
