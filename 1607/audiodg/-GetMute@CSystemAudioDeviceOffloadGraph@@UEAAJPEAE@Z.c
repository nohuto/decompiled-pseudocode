/*
 * XREFs of ?GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z @ 0x14002D760
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMute(CSystemAudioDeviceOffloadGraph *this, unsigned __int8 *a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 10) + 32LL))(
         *((_QWORD *)this + 10),
         a2);
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetMute", 293, v2);
  }
  return (unsigned int)v2;
}
