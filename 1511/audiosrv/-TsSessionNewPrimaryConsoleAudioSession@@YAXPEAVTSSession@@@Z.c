/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC70
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003E6B0 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EBD4 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetNext@?$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z @ 0x18003963C (-GetNext@-$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003F0EC (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  unsigned int *v2; // r9
  unsigned int v3; // edi
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v4 = qword_1800E68A0;
    while ( (unsigned int)TList<TSSession>::GetNext((__int64)a1, &v4, &v5) )
    {
      if ( *v5 != (_DWORD)v2 && v5[90] != (_DWORD)v2 )
      {
        v2 = v5;
        break;
      }
    }
    if ( v2 != (unsigned int *)a1 )
    {
      v3 = -2;
      if ( v2 )
      {
        v2[90] = 0;
        v3 = *v2;
        if ( g_MaxSessions <= 1 )
          v2[13] = 1;
      }
      *((_DWORD *)a1 + 13) = 0;
      *((_DWORD *)a1 + 90) = 1;
      if ( g_MaxSessions <= 1 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            15LL,
            &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
            v3,
            *(_DWORD *)a1);
        }
        if ( (int)QueueSessionMuteUnmute(v3, *(_DWORD *)a1) < 0
          && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids);
        }
      }
    }
  }
}
