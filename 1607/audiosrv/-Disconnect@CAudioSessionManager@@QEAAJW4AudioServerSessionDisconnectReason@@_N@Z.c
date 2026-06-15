/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18000182C
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800015D0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180052F70 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x180063A9C (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18006AD08 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18006F1B0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078A08 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800018E4 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18006265C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180063020 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, bool a3)
{
  CAudioSession *v6; // rcx
  __int64 StartPosition; // rax
  _QWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v13[48]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, a1, -2LL);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v6 + 2), 57LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v13, (struct _RTL_CRITICAL_SECTION *)(a1 + 24), a3);
  if ( a2 == 1 )
  {
    while ( 1 )
    {
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(a1 + 64);
      if ( !StartPosition )
        break;
      v9 = *(_QWORD **)(StartPosition + 80);
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
        a1 + 64,
        StartPosition);
      LOBYTE(v10) = a3;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v9[2] + 32LL))(v9 + 2, 1LL, v10);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 184LL))(v9, a1);
      (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v9 + 184LL))(v9, g_PolicyEventsHandler);
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
  }
  else
  {
    v14 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(a1 + 64);
    while ( v14 )
    {
      v11 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                         a1 + 64,
                         &v14);
      if ( v11 )
      {
        LOBYTE(v12) = a3;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v11 + 16) + 32LL))(v11 + 16, a2, v12);
      }
    }
  }
  if ( v13[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v13);
  return 0LL;
}
