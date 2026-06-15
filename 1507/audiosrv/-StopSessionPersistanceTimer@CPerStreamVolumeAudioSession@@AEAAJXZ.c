/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180013698
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800141C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800778C0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007A690 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  __int64 v4; // rsi

  if ( *((_BYTE *)this + 784) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 840);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 21);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_Sq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        192,
        (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((_QWORD *)this + 88),
        *((_QWORD *)this + 110));
    }
    if ( *((_QWORD *)this + 110) )
    {
      v4 = _InterlockedExchange64((volatile __int64 *)this + 110, 0LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v4,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(ThreadPool, v4, 1LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool, v4);
      if ( *((_QWORD *)this + 111) )
      {
        (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
          ThreadPool,
          *((_QWORD *)this + 111));
        *((_QWORD *)this + 111) = 0LL;
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          193LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          *((_QWORD *)this + 88));
      }
      CUnknown::Release((CPerStreamVolumeAudioSession *)((char *)this + 32));
    }
    LeaveCriticalSection(v3);
  }
  return 0LL;
}
