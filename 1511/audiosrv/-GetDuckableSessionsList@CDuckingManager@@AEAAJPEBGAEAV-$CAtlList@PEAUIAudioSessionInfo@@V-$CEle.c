/*
 * XREFs of ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x1800A1CB8
 * Callers:
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A1858 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800A256C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800A3768 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x1800A398C (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800303A4 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18006637C (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180066B98 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800A2000 (-GetSessionFromSessionId@CDuckingManager@@AEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 */

__int64 __fastcall CDuckingManager::GetDuckableSessionsList(CDuckingManager *this, const wchar_t *a2, __int64 *a3)
{
  __int64 *v3; // r15
  CDuckingManager *v4; // r13
  int v5; // esi
  int v6; // r14d
  unsigned __int64 i; // r12
  const unsigned __int16 ***v8; // rax
  const wchar_t **v9; // rdi
  int SessionFromSessionId; // eax
  const wchar_t *v11; // rax
  __int64 *v12; // rax
  __int64 **v13; // rcx
  int *v15; // rbx
  int v16; // [rsp+20h] [rbp-68h]
  struct IAudioSessionInfo *v17; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  ATL::CAtlException *v20; // [rsp+40h] [rbp-48h] BYREF

  v19 = -2LL;
  v3 = a3;
  v4 = this;
  v5 = 0;
  v6 = 0;
  while ( 2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 32));
    for ( i = 0LL; ; ++i )
    {
      v18 = i;
      if ( i >= *((_QWORD *)v4 + 10) )
        break;
      v8 = (const unsigned __int16 ***)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                                         (_QWORD *)v4 + 9,
                                         i);
      v9 = *v8;
      SessionFromSessionId = CDuckingManager::GetSessionFromSessionId(v4, **v8, &v17, 0);
      v5 = SessionFromSessionId;
      if ( SessionFromSessionId == -2147024795 )
      {
        v6 = 0;
        break;
      }
      v6 = 1;
      if ( SessionFromSessionId < 0 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x44u,
            (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
            *v9);
        }
      }
      else if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v17 + 48LL))(v17)
             || (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v17 + 56LL))(v17) )
      {
        (*(void (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      else
      {
        v11 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v17 + 72LL))(v17);
        if ( !_wcsicmp(a2, v11) )
        {
          v5 = 0;
          try
          {
            v12 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
                    (__int64)v3,
                    (__int64 *)&v17,
                    v3[1],
                    0LL);
            v13 = (__int64 **)v3[1];
            if ( v13 )
              *v13 = v12;
            else
              *v3 = (__int64)v12;
            v3[1] = (__int64)v12;
          }
          catch ( ATL::CAtlException *v20 )
          {
            v15 = (int *)v20;
            if ( *(_DWORD *)v20 == -1073741571 )
              _resetstkoflw();
            v16 = *v15;
            v5 = *v15;
            if ( v16 < 0 )
            {
              if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x43u,
                  (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
                  v16);
              }
              (*(void (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v17 + 16LL))(v17);
              v4 = this;
              v3 = a3;
              v6 = 1;
              break;
            }
            v4 = this;
            v3 = a3;
            v6 = 1;
            i = v18;
          }
        }
      }
    }
    if ( !*((_QWORD *)v4 + 10) )
      v6 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 32));
    if ( !v6 )
    {
      if ( v5 == -2147024795 )
      {
        if ( v3[2] )
          ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(v3);
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x45u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
        }
        Sleep(0x64u);
        v5 = 0;
      }
      continue;
    }
    break;
  }
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x46u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v5);
  }
  return (unsigned int)v5;
}
