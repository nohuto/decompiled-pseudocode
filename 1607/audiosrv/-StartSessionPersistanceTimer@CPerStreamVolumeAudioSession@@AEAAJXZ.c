/*
 * XREFs of ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008AD0
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180008A60 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180009280 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x18005F090 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x18005F280 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005DD8C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  signed int v1; // ebx
  bool v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  signed int LastError; // eax
  signed int v8; // eax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v1 = 0;
  if ( *((_BYTE *)this + 1008) )
  {
    v1 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
    if ( v1 < 0 )
      goto LABEL_28;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1064), v4);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        144LL,
        &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((_QWORD *)this + 107));
    }
    if ( !*((_QWORD *)this + 138) )
    {
      v5 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool
                                                                                                 + 8LL))(
             ThreadPool,
             CPerStreamVolumeAudioSession::PersistanceTimerCallback,
             this);
      *((_QWORD *)this + 138) = v5;
      if ( v5 )
      {
        v6 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool + 56LL))(
               ThreadPool,
               CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed,
               this);
        *((_QWORD *)this + 139) = v6;
        if ( v6 )
        {
          v10 = -50000000;
          v11 = -1;
          _InterlockedIncrement((volatile signed __int32 *)this + 10);
          (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
            ThreadPool,
            *((_QWORD *)this + 138),
            &v10,
            0LL,
            100);
        }
        else
        {
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              145LL,
              &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
              (unsigned int)v1);
          }
          (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
            ThreadPool,
            *((_QWORD *)this + 138));
          *((_QWORD *)this + 138) = 0LL;
        }
      }
      else
      {
        v8 = GetLastError();
        v1 = v8;
        if ( v8 > 0 )
          v1 = (unsigned __int16)v8 | 0x80070000;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            146LL,
            &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            (unsigned int)v1);
        }
      }
    }
    if ( v9[8] )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
    if ( v1 < 0 )
LABEL_28:
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::StartSessionPersistanceTimer", 0x1596u, v1);
  }
  return (unsigned int)v1;
}
