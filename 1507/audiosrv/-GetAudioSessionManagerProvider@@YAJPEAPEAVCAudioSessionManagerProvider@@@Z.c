/*
 * XREFs of ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 *     GetAudioSessionManager @ 0x18002DD50 (GetAudioSessionManager.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     s_RevokeDeviceAccessForPackage @ 0x1800817E0 (s_RevokeDeviceAccessForPackage.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180088B70 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000AF90 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManagerProvider(struct CAudioSessionManagerProvider **a1)
{
  __int64 (__fastcall *v2)(__int64); // rdi
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    *a1 = g_SingletonAudioSessionManagerProvider;
    v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v2 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
      ATL::CComObject<CAudioSessionManagerProvider>::AddRef((__int64)g_SingletonAudioSessionManagerProvider);
    else
      v2((__int64)g_SingletonAudioSessionManagerProvider);
    v3 = 0;
  }
  else
  {
    v3 = -2147467259;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
