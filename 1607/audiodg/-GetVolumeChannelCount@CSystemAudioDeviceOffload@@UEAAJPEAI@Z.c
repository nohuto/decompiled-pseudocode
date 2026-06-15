/*
 * XREFs of ?GetVolumeChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x14002C830
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetVolumeChannelCount(CSystemAudioDeviceOffload *this, unsigned int *a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14), a2);
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_e6e3cf044f7b3ed66ff982009b51436b_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetVolumeChannelCount", 674, v2);
  }
  return (unsigned int)v2;
}
