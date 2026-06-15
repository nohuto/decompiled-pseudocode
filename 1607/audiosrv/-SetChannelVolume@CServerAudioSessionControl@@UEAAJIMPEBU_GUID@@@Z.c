/*
 * XREFs of ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x180060BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ValidateAudioLevel @ 0x180029BB0 (ValidateAudioLevel.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdg @ 0x180058EC0 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v7; // r8

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
      0LL,
      a2,
      a3);
  }
  if ( ValidateAudioLevel(a3) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 9) + 344LL))(
             *((_QWORD *)this + 9),
             a2,
             v7,
             a4);
  AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetChannelVolume", 1179, -2147024809);
  return 2147942487LL;
}
