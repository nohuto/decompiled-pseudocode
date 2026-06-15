/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180030040 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18003AE84 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003EEF4 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003EF58 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003F0EC (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

void __fastcall TsSessionIdConnect(DWORD a1)
{
  unsigned int TsAudioProtocol; // edi
  struct TSSession *v3; // rbx
  TraceLoggingHProvider v4; // rcx
  struct TSSession *v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  TsAudioProtocol = GetTsAudioProtocol(a1);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (unsigned int)TsSessionFromSessionId(a1, 1, &v6, &v5) )
    goto LABEL_13;
  v3 = v5;
  TsSessionRefreshSessionInformation(v5);
  TsSessionUpdateAudioProtocol(v3, v6, TsAudioProtocol);
  if ( *((_QWORD *)v3 + 5) != -130LL && *(_WORD *)(*((_QWORD *)v3 + 5) + 130LL) )
    goto LABEL_9;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
      *(_DWORD *)v3);
  }
  *((_DWORD *)v3 + 13) = 0;
  *((_DWORD *)v3 + 90) = 0;
  if ( (int)QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v3) >= 0 )
    goto LABEL_9;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
      *(_DWORD *)v3);
LABEL_9:
    v4 = WPP_GLOBAL_Control;
  }
  if ( TsAudioProtocol )
  {
    if ( TsAudioProtocol != 0xFFFF )
    {
      if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v4 + 7) & 0x40000000) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)v4 + 2), 0x20u, (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids, *(_DWORD *)v3);
      }
      *((_DWORD *)v3 + 13) = 0;
      *((_DWORD *)v3 + 90) = 0;
      if ( (int)QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v3) < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x21u,
          (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
          *(_DWORD *)v3);
      }
    }
  }
  else if ( *(_QWORD *)(*((_QWORD *)v3 + 5) + 200LL) )
  {
    TsSessionNewPrimaryConsoleAudioSession(v3);
  }
LABEL_13:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
