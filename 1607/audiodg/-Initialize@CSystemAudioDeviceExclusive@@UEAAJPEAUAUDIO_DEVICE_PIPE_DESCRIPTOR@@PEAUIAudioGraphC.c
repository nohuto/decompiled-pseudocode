/*
 * XREFs of ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000364C (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140028DB0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::Initialize(
        CSystemAudioDeviceExclusive *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v8; // ebx
  int v9; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  *((_DWORD *)this + 54) = a4;
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 34);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 < 0 )
    goto LABEL_4;
  *((_QWORD *)this + 42) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 43) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 18);
  v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 89) = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_4:
    (*(void (__fastcall **)(CSystemAudioDeviceExclusive *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_5;
  }
  v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
LABEL_5:
  LeaveCriticalSection(v4);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_9057bc299ae43b117cc58bcfd1dc47e8_Traceguids,
        v8,
        (__int64)"CSystemAudioDeviceExclusive::Initialize");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::Initialize", 126, v8);
  }
  return (unsigned int)v8;
}
