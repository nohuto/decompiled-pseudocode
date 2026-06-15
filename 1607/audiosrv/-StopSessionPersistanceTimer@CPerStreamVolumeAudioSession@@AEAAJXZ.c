/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008A98
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180008C20 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180009280 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005AD70 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005DD10 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x1800049B0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sq @ 0x18005FC4C (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(
        CPerStreamVolumeAudioSession *this,
        __int64 a2,
        bool a3)
{
  __int64 v5; // rbx
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 1008) )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1064), a3);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        147,
        (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((_QWORD *)this + 107),
        *((_QWORD *)this + 138));
    }
    if ( *((_QWORD *)this + 138) )
    {
      v5 = _InterlockedExchange64((volatile __int64 *)this + 138, 0LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v5,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(ThreadPool, v5, 1LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool, v5);
      if ( *((_QWORD *)this + 139) )
      {
        (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 64LL))(ThreadPool);
        *((_QWORD *)this + 139) = 0LL;
      }
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          148LL,
          &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          *((_QWORD *)this + 107));
      }
      CUnknown::Release((CPerStreamVolumeAudioSession *)((char *)this + 32));
    }
    if ( v6[8] )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v6);
  }
  return 0LL;
}
