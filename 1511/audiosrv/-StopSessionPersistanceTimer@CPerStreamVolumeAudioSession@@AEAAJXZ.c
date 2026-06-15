/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800352A8
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180036390 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180072540 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180075AD0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  __int64 v4; // rsi

  if ( *((_BYTE *)this + 936) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 992);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        192,
        (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        *((_QWORD *)this + 107),
        *((_QWORD *)this + 129));
    }
    if ( *((_QWORD *)this + 129) )
    {
      v4 = _InterlockedExchange64((volatile __int64 *)this + 129, 0LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v4,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(ThreadPool, v4, 1LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool, v4);
      if ( *((_QWORD *)this + 130) )
      {
        (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
          ThreadPool,
          *((_QWORD *)this + 130));
        *((_QWORD *)this + 130) = 0LL;
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          193LL,
          &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          *((_QWORD *)this + 107));
      }
      CUnknown::Release((CPerStreamVolumeAudioSession *)((char *)this + 32));
    }
    LeaveCriticalSection(v3);
  }
  return 0LL;
}
