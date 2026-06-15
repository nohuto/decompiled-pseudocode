/*
 * XREFs of ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450
 * Callers:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x1800045E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x1800827F4 (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180082900 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 *     ?RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BE3C (-RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@P.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800924F8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

struct IAudioProcess *__fastcall CAudioSession::GetProcess(CAudioSession *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 89);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 89));
  return (struct IAudioProcess *)*((_QWORD *)this + 89);
}
