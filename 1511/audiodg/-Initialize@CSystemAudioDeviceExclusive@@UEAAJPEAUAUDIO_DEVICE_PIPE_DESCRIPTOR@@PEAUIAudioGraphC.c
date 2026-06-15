/*
 * XREFs of ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B920
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140002A38 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000506C (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002A034 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x14002A548 (WPP_SF_Ds.c)
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
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 33);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 42) = *((_QWORD *)a2 + 4);
    *((_QWORD *)this + 43) = *((_QWORD *)a2 + 5);
    *((_DWORD *)this + 88) = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 18);
    v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
    *((_DWORD *)this + 89) = v9;
    if ( v9 )
    {
      v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
      goto LABEL_5;
    }
    v8 = -2147024882;
  }
  (*(void (__fastcall **)(CSystemAudioDeviceExclusive *))(*(_QWORD *)this + 200LL))(this);
LABEL_5:
  LeaveCriticalSection(v4);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_c56ec536faef012c7fc5216e19ea82f9_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceExclusive::Initialize");
  }
  return (unsigned int)v8;
}
