/*
 * XREFs of ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180003050
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180014FD0 (--0CAudioSession@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CPerEndpointVolumeAudioSession *__fastcall CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(
        CPerEndpointVolumeAudioSession *this)
{
  CAudioSession::CAudioSession(this);
  *(_QWORD *)this = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 126) = &CPerEndpointVolumeAudioSession::`vftable';
  ATL::CCriticalSection::CCriticalSection((CPerEndpointVolumeAudioSession *)((char *)this + 1016));
  *((_QWORD *)this + 132) = 0LL;
  return this;
}
