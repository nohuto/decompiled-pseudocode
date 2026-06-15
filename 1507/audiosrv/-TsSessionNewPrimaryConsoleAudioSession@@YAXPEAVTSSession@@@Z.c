/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040C70
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x1800382F0 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040BD4 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x1800410EC (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GetNext@?$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z @ 0x180008EE0 (-GetNext@-$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003FCC8 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  unsigned int *v2; // r9
  unsigned int v3; // edi
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v4 = qword_1800E88D0;
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
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            15LL,
            &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
            v3,
            *(_DWORD *)a1);
        }
        if ( (int)QueueSessionMuteUnmute(v3, *(_DWORD *)a1) < 0
          && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x10u,
            (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids);
        }
      }
    }
  }
}
