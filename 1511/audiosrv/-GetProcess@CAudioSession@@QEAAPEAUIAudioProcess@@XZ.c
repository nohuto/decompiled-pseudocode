/*
 * XREFs of ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180001504
 * Callers:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180001238 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18007D90C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x18007DAC4 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FDB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

struct IAudioProcess *__fastcall CAudioSession::GetProcess(CAudioSession *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 108);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 108));
  return (struct IAudioProcess *)*((_QWORD *)this + 108);
}
