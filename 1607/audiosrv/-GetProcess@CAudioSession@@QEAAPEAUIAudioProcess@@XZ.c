/*
 * XREFs of ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180012E30
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009BD0 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?PrepareForDisconnect@CAudioStream@@QEAAJXZ @ 0x180064C58 (-PrepareForDisconnect@CAudioStream@@QEAAJXZ.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078B30 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

struct IAudioProcess *__fastcall CAudioSession::GetProcess(CAudioSession *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 108);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return (struct IAudioProcess *)*((_QWORD *)this + 108);
}
