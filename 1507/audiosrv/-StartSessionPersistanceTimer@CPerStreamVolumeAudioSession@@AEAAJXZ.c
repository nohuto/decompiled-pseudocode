/*
 * XREFs of ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001372C
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180013660 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800141C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x18007B730 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x18007B970 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003543C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  unsigned int v1; // esi
  __int64 v4; // rax
  __int64 v5; // rax
  signed int LastError; // eax
  signed int v7; // eax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+54h] [rbp+Ch]

  v1 = 0;
  if ( *((_BYTE *)this + 784) )
  {
    v1 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
    if ( (v1 & 0x80000000) != 0 )
      goto LABEL_28;
    EnterCriticalSection((LPCRITICAL_SECTION)this + 21);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        188LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((_QWORD *)this + 88));
    }
    if ( !*((_QWORD *)this + 110) )
    {
      v4 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool
                                                                                                 + 8LL))(
             ThreadPool,
             CPerStreamVolumeAudioSession::PersistanceTimerCallback,
             this);
      *((_QWORD *)this + 110) = v4;
      if ( v4 )
      {
        v5 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool + 56LL))(
               ThreadPool,
               CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed,
               this);
        *((_QWORD *)this + 111) = v5;
        if ( v5 )
        {
          v8 = -50000000;
          v9 = -1;
          _InterlockedIncrement((volatile signed __int32 *)this + 10);
          (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
            ThreadPool,
            *((_QWORD *)this + 110),
            &v8,
            0LL,
            100);
        }
        else
        {
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              189LL,
              &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
              v1);
          }
          (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
            ThreadPool,
            *((_QWORD *)this + 110));
          *((_QWORD *)this + 110) = 0LL;
        }
      }
      else
      {
        v7 = GetLastError();
        v1 = v7;
        if ( v7 > 0 )
          v1 = (unsigned __int16)v7 | 0x80070000;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            190LL,
            &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
            v1);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 21);
    if ( (v1 & 0x80000000) != 0 )
    {
LABEL_28:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          191LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          v1);
      }
    }
  }
  return v1;
}
