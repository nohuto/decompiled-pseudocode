/*
 * XREFs of ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 *     GetAudioSessionManager @ 0x18002DD50 (GetAudioSessionManager.c)
 *     ??1?$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ @ 0x1800676F8 (--1-$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180088B70 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180075888 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CAudioSessionManagerProvider>::Release(__int64 a1, volatile int *a2)
{
  unsigned int v3; // ebp

  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
  if ( !v3 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v3 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v3;
}
