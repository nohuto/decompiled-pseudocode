/*
 * XREFs of ?GetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAM@Z @ 0x14002EBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetVolumeCoefficients(
        CSystemAudioDeviceOffload *this,
        unsigned int a2,
        float *a3)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 14) + 40LL))(
         *((_QWORD *)this + 14),
         a2,
         a3);
  if ( v3 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xFu,
      (__int64)&WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
