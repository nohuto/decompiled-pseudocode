/*
 * XREFs of ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14002E650
 * Callers:
 *     ?GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x14002FC90 (-GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400316F4 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPipeInstance::GetPlaybackProtectionApo(CPipeInstance *this, struct IAudioProcessingObject **a2)
{
  int v2; // ebx

  *a2 = 0LL;
  v2 = -2147467263;
  if ( !*((_QWORD *)this + 22)
    || (v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioProcessingObject **))this + 22))(
               *((_QWORD *)this + 22),
               &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
               a2),
        v2 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x40u,
        (__int64)&WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::GetPlaybackProtectionApo", 3760, v2);
  }
  return (unsigned int)v2;
}
