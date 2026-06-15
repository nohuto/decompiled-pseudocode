/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceShared@@UEAAJXZ @ 0x14002D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::PumpPaused(CSystemAudioDeviceShared *this)
{
  int v1; // ebx

  v1 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 34) + 128LL))((char *)this - 272);
  if ( v1 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x30u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v1,
      (__int64)"CSystemAudioDeviceShared::PumpPaused");
  }
  return (unsigned int)v1;
}
