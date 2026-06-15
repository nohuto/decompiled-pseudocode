/*
 * XREFs of ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B520
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140010960 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140010B68 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140010F40 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::Initialize(
        CSystemAudioDeviceExclusive *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v8; // esi
  int v9; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  *((_DWORD *)this + 54) = a4;
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 31);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 42) = *((_QWORD *)a2 + 4);
    *((_QWORD *)this + 43) = *((_QWORD *)a2 + 5);
    *((_DWORD *)this + 88) = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 16);
    v9 = CSystemAudioDeviceCollection::Add(*((_QWORD *)a2 + 7), this);
    *((_DWORD *)this + 89) = v9;
    if ( v9 )
    {
      v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
      goto LABEL_5;
    }
    v8 = -2147024882;
  }
  (*(void (__fastcall **)(CSystemAudioDeviceExclusive *))(*(_QWORD *)this + 184LL))(this);
LABEL_5:
  LeaveCriticalSection(v4);
  if ( v8 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xAu,
      (__int64)&WPP_d3b4cdd49e8fc862a9bb16878894ce0c_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceExclusive::Initialize");
  }
  return (unsigned int)v8;
}
