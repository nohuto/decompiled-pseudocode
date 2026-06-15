/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14002EDA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::SetMute(
        CSystemAudioDeviceOffload *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         a2,
         a3,
         a4);
  if ( v4 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x13u,
      (__int64)&WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
