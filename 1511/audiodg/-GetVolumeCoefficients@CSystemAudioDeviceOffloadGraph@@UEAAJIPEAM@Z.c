/*
 * XREFs of ?GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z @ 0x14002F020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetVolumeCoefficients(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int a2,
        float *a3)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 10) + 40LL))(
         *((_QWORD *)this + 10),
         a2,
         a3);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids, v3);
  }
  return (unsigned int)v3;
}
