/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800024FC
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180002290 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x18007C374 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z @ 0x180082048 (-DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180085620 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FC64 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800025A8 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007ADA8 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18007B798 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  TraceLoggingHProvider v6; // rcx
  __int64 StartPosition; // rax
  _QWORD *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, a1);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v6 + 28) & 0x40) != 0
      && *((_BYTE *)v6 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v6 + 2), 66LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
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
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 184LL))(v9, a1);
      (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v9 + 184LL))(v9, g_PolicyEventsHandler);
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
  }
  else
  {
    v13 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(a1 + 64);
    while ( v13 )
    {
      v11 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                         a1 + 64,
                         &v13);
      if ( v11 )
      {
        LOBYTE(v12) = a3;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v11 + 16) + 32LL))(v11 + 16, a2, v12);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return 0LL;
}
