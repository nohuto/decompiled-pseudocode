/*
 * XREFs of ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x1800360F4
 * Callers:
 *     ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x1800360BC (--_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035594 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(CPerStreamVolumeAudioSession *this)
{
  *(_QWORD *)this = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 96LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this);
  }
  if ( *((_BYTE *)this + 936) )
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  CAudioSession::~CAudioSession(this);
}
