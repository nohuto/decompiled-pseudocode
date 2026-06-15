/*
 * XREFs of ?GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800A2000
 * Callers:
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x1800A1CB8 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A310C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDuckingManager::GetSessionFromSessionId(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        struct IAudioSessionInfo **a3,
        unsigned int a4)
{
  __int64 v4; // rdi
  int v5; // ebx

  v4 = *((_QWORD *)this + 40);
  v5 = 0;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IAudioSessionInfo **, _QWORD))(*(_QWORD *)v4 + 24LL))(
           *((_QWORD *)this + 40),
           a2,
           a3,
           a4);
    if ( v5 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x47u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v5);
    }
  }
  return (unsigned int)v5;
}
