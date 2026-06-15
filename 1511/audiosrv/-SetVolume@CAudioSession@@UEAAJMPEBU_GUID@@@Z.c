/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180028660
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180036390 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180027F58 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     ValidateAudioLevel @ 0x180036428 (ValidateAudioLevel.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, struct _GUID *a3)
{
  TraceLoggingHProvider v5; // rcx
  bool v6; // zf
  unsigned int v7; // ebx
  void (__fastcall *v8)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rsi
  int v10; // [rsp+20h] [rbp-38h]
  double v11; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = a2;
    WPP_SF_Sq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      SLOBYTE(v11));
  }
  if ( !(unsigned __int8)ValidateAudioLevel() )
  {
    v7 = -2147024809;
LABEL_15:
    if ( v5 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v5 + 28) & 0x40) != 0
      && *((_BYTE *)v5 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v5 + 2), 31LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v7);
    }
    return v7;
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = v13 == 0;
  *((float *)this + 228) = a2;
  if ( !v6 )
    LeaveCriticalSection(lpCriticalSection);
  v7 = CAudioSession::ResetPolicyGainStages(this);
  v8 = *(void (__fastcall **)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *))(*((_QWORD *)this + 2) + 24LL);
  if ( v8 == CAudioSession::RecalculateSessionVolume )
  {
    CAudioSession::RecalculateSessionVolume((__int64)this + 16, 0, a3, 0xFFFFFFFF, 0, 0LL);
  }
  else
  {
    LOBYTE(v10) = 0;
    v8((__int64)this + 16, 0, a3, 0xFFFFFFFF, v10, 0LL);
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    v5 = WPP_GLOBAL_Control;
    goto LABEL_15;
  }
  return v7;
}
