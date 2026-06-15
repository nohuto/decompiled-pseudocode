/*
 * XREFs of ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400308F0
 * Callers:
 *     ?GetOta@CStreamInstanceNew@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14001403C (-GetOta@CStreamInstanceNew@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProte.c)
 *     ?GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x1400329B0 (-GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::GetPlaybackProtectionApo(CPipeInstance *this, struct IAudioProcessingObject **a2)
{
  int v2; // ebx

  *a2 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioProcessingObject **))this + 22))(
         *((_QWORD *)this + 22),
         &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
         a2);
  if ( v2 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x45u,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
