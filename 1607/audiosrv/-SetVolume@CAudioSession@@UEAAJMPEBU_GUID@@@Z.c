/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180015BE0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180009280 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180015318 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180029A08 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ValidateAudioLevel @ 0x180029BB0 (ValidateAudioLevel.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sg @ 0x18005FBC8 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, struct _GUID *a3)
{
  int v5; // xmm6_4
  bool v6; // zf
  int v7; // eax
  char *v8; // rcx
  int v9; // ebx
  void (__fastcall *v10)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rax
  int v12; // [rsp+20h] [rbp-58h]
  double v13; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+48h] [rbp-30h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v13 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 19, (_DWORD)a3, *((_QWORD *)this + 107), SLOBYTE(v13));
  }
  if ( !(unsigned __int8)ValidateAudioLevel() )
  {
    v9 = -2147024809;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetVolume", 0x3A3u, v9);
    return (unsigned int)v9;
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *((_DWORD *)this + 228);
  AudioSrvVolumeTelemetry::Update((CAudioSession *)((char *)this + 928));
  v6 = v15 == 0;
  *((_DWORD *)this + 243) = v5;
  *((float *)this + 244) = a2;
  *((float *)this + 228) = a2;
  if ( !v6 )
    LeaveCriticalSection(lpCriticalSection);
  v7 = CAudioSession::ResetPolicyGainStages(this);
  v8 = (char *)this + 16;
  v9 = v7;
  LOBYTE(v12) = 0;
  v10 = *(void (__fastcall **)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *))(*((_QWORD *)this + 2)
                                                                                            + 24LL);
  if ( v10 == CAudioSession::RecalculateSessionVolume )
    CAudioSession::RecalculateSessionVolume((__int64)v8, 0, a3, 0xFFFFFFFF, 0, 0LL);
  else
    v10((__int64)v8, 0, a3, 0xFFFFFFFF, v12, 0LL);
  if ( v9 < 0 )
    goto LABEL_13;
  return (unsigned int)v9;
}
