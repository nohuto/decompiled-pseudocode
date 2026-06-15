/*
 * XREFs of ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x18000EAD0
 * Callers:
 *     AudioSessionSetVolume @ 0x180029C90 (AudioSessionSetVolume.c)
 * Callees:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180009280 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ValidateAudioLevel @ 0x180029BB0 (ValidateAudioLevel.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SSg @ 0x1800616AC (WPP_SF_SSg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetVolume(
        CServerAudioSessionControl *this,
        float a2,
        const struct _GUID *a3)
{
  int v3; // edx
  CPerStreamVolumeAudioSession *v6; // rcx
  __int64 (__fastcall *v7)(CPerStreamVolumeAudioSession *, float, const struct _GUID *); // rax
  double v9; // [rsp+28h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_SSg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, (_DWORD)a3, 0, 0LL, SLOBYTE(v9));
  }
  if ( (unsigned __int8)ValidateAudioLevel() )
  {
    v6 = (CPerStreamVolumeAudioSession *)*((_QWORD *)this + 9);
    v7 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *, float, const struct _GUID *))(*(_QWORD *)v6 + 312LL);
    if ( v7 == CPerStreamVolumeAudioSession::SetVolume )
      return CPerStreamVolumeAudioSession::SetVolume(v6, a2, a3);
    else
      return ((__int64 (__fastcall *)(CPerStreamVolumeAudioSession *, __int64 (__fastcall *)(CPerStreamVolumeAudioSession *, float, const struct _GUID *), const struct _GUID *))v7)(
               v6,
               CPerStreamVolumeAudioSession::SetVolume,
               a3);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetVolume", 0x3E0u, -2147024809);
    return 2147942487LL;
  }
}
