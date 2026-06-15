/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14002F570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::SetMute(
        CSystemAudioDeviceOffloadGraph *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 10) + 24LL))(
         *((_QWORD *)this + 10),
         a2,
         a3,
         a4);
  if ( v4 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids, v4);
  }
  return (unsigned int)v4;
}
