/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A1858
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800303A4 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetdBFromUserPreference@CDuckingManager@@AEAAMXZ @ 0x1800646A0 (-GetdBFromUserPreference@CDuckingManager@@AEAAMXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A1520 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x1800A1CB8 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800A3BB4 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(CDuckingManager *this, const unsigned __int16 *a2)
{
  int DuckableSessionsList; // esi
  TraceLoggingHProvider v3; // rcx
  __int128 v5; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h]
  __int128 v7; // [rsp+48h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  v8 = 10;
  v7 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this);
  if ( DuckableSessionsList < 0 )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Bu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v3 + 7) & 0x8000000) != 0
      && *((_BYTE *)v3 + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)v3 + 2),
        0x3Cu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64 *)&v5);
  return (unsigned int)DuckableSessionsList;
}
