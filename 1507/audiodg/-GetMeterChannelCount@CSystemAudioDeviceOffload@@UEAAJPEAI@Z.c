/*
 * XREFs of ?GetMeterChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x1400018E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetMeterChannelCount(CSystemAudioDeviceOffload *this, unsigned int *a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14), a2);
  if ( v2 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      21LL,
      &WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      (unsigned int)v2);
  }
  return (unsigned int)v2;
}
