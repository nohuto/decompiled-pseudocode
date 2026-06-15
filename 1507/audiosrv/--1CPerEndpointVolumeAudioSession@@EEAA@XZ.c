/*
 * XREFs of ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180076D64
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x180076F48 (--_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(CPerEndpointVolumeAudioSession *this)
{
  __int64 v2; // rsi

  *(_QWORD *)this = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 98) = &CPerEndpointVolumeAudioSession::`vftable';
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x61u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this);
  }
  v2 = *((_QWORD *)this + 104);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 104));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 792));
  CAudioSession::~CAudioSession(this);
}
