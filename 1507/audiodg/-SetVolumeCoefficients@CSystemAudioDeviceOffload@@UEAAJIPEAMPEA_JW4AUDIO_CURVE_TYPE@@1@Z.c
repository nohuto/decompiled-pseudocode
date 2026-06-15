/*
 * XREFs of ?SetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x140001980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::SetVolumeCoefficients(
        CSystemAudioDeviceOffload *this,
        unsigned int a2,
        float *a3,
        __int64 *a4,
        enum AUDIO_CURVE_TYPE a5,
        __int64 *a6)
{
  int v6; // ebx

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, __int64 *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         a2,
         a3,
         (unsigned int)a5,
         a6);
  if ( v6 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      16LL,
      &WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
