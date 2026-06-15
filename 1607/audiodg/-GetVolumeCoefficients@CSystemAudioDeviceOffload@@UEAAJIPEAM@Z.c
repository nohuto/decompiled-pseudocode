/*
 * XREFs of ?GetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAM@Z @ 0x14002C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetVolumeCoefficients(
        CSystemAudioDeviceOffload *this,
        __int64 a2,
        float *a3)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 14) + 40LL))(
         *((_QWORD *)this + 14),
         a2,
         a3);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_e6e3cf044f7b3ed66ff982009b51436b_Traceguids, v3);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetVolumeCoefficients", 580, v3);
  }
  return (unsigned int)v3;
}
