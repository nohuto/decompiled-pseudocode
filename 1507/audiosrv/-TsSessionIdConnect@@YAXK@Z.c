/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x1800382F0
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002CF10 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800383F8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003FCC8 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040C70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180040EF4 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180040F58 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

void __fastcall TsSessionIdConnect(DWORD a1)
{
  unsigned int TsAudioProtocol; // edi
  struct TSSession *v3; // rbx
  __int64 v4; // rcx
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Eu,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      *(_DWORD *)v3);
  }
  *((_DWORD *)v3 + 13) = 0;
  *((_DWORD *)v3 + 90) = 0;
  if ( (int)QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v3) >= 0 )
    goto LABEL_9;
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Fu,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      *(_DWORD *)v3);
LABEL_9:
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( TsAudioProtocol )
  {
    if ( TsAudioProtocol != 0xFFFF )
    {
      if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v4 + 28) & 0x40000000) != 0
        && *(_BYTE *)(v4 + 25) >= 4u )
      {
        WPP_SF_D(*(_QWORD *)(v4 + 16), 0x20u, (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids, *(_DWORD *)v3);
      }
      *((_DWORD *)v3 + 13) = 0;
      *((_DWORD *)v3 + 90) = 0;
      if ( (int)QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v3) < 0
        && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x21u,
          (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
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
