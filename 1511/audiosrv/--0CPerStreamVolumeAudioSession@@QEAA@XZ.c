/*
 * XREFs of ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800357E0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180027C70 (--0CAudioSession@@IEAA@XZ.c)
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
  *((_BYTE *)this + 936) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 944));
  *((_QWORD *)this + 123) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 992));
  *((_QWORD *)this + 129) = 0LL;
  return this;
}
