/*
 * XREFs of ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180071794
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x180071990 (--_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(CPerEndpointVolumeAudioSession *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(CVolumeStrip *); // rsi

  *(_QWORD *)this = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 117) = &CPerEndpointVolumeAudioSession::`vftable';
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x61u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (__int64)this);
  }
  v2 = *((_QWORD *)this + 123);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == CVolumeStrip::Release )
      CVolumeStrip::Release(*((CVolumeStrip **)this + 123));
    else
      v3(*((CVolumeStrip **)this + 123));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  CAudioSession::~CAudioSession(this);
}
