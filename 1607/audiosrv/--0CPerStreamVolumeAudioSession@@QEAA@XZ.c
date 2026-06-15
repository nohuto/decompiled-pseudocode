/*
 * XREFs of ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x180008B80
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180014FD0 (--0CAudioSession@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(
        CPerStreamVolumeAudioSession *this)
{
  CAudioSession::CAudioSession(this);
  *(_QWORD *)this = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_BYTE *)this + 1008) = 1;
  ATL::CCriticalSection::CCriticalSection((CPerStreamVolumeAudioSession *)((char *)this + 1016));
  *((_QWORD *)this + 132) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CPerStreamVolumeAudioSession *)((char *)this + 1064));
  *((_QWORD *)this + 138) = 0LL;
  return this;
}
