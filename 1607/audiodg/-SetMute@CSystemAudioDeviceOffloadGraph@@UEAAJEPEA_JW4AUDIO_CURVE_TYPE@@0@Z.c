/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14002DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
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
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_05e6a62393a835ce563e39861fdcaf3f_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::SetMute", 334, v4);
  }
  return (unsigned int)v4;
}
