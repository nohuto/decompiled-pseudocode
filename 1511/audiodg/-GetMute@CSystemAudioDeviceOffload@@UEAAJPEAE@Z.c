/*
 * XREFs of ?GetMute@CSystemAudioDeviceOffload@@UEAAJPEAE@Z @ 0x14002DC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetMute(CSystemAudioDeviceOffload *this, unsigned __int8 *a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         a2);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, (__int64)&WPP_0c9f4c97d2e4db079a99cda1b29d38b3_Traceguids, v2);
  }
  return (unsigned int)v2;
}
