/*
 * XREFs of ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800A3768
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A310C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800303A4 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x1800A1CB8 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800A3BB4 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 */

__int64 __fastcall CDuckingManager::RecalculateSessionVolumes(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  int DuckableSessionsList; // esi
  __int64 v5; // rax
  __int64 v6; // r14
  const wchar_t *v7; // rax
  __int64 v8; // rdi
  TraceLoggingHProvider v9; // rcx
  int v11; // [rsp+20h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int128 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+58h] [rbp-8h]
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  v13 = 0LL;
  v15 = 10;
  v12 = 0LL;
  v14 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, (__int64 *)&v12);
  if ( DuckableSessionsList < 0 )
    goto LABEL_12;
  while ( v13 )
  {
    v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v12);
    v6 = v5;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Du,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v7);
    }
    v16 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
                             v6,
                             &GUID_ec081b02_27c6_4867_9203_959f1731a3e5,
                             &v16);
    if ( DuckableSessionsList >= 0 )
    {
      LOBYTE(v11) = 0;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(*(_QWORD *)v16 + 24LL))(
        v16,
        2LL,
        0LL,
        0xFFFFFFFFLL,
        v11,
        a3);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( DuckableSessionsList < 0 )
  {
LABEL_12:
    while ( v13 )
    {
      v8 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Eu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v9 + 7) & 0x8000000) != 0
      && *((_BYTE *)v9 + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)v9 + 2),
        0x3Fu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64 *)&v12);
  return (unsigned int)DuckableSessionsList;
}
