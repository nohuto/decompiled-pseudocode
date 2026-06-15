/*
 * XREFs of ?SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x14002F600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::SetVolumeCoefficients(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int a2,
        float *a3,
        __int64 *a4,
        enum AUDIO_CURVE_TYPE a5,
        __int64 *a6)
{
  int v6; // ebx

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, __int64 *))(**((_QWORD **)this + 10) + 32LL))(
         *((_QWORD *)this + 10),
         a2,
         a3,
         (unsigned int)a5,
         a6);
  if ( v6 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids, v6);
  }
  return (unsigned int)v6;
}
