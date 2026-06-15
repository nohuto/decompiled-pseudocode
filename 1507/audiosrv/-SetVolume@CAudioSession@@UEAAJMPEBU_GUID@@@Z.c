/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180010860
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800141C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18000EA40 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x1800102B4 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ValidateAudioLevel @ 0x1800322AC (ValidateAudioLevel.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, struct _GUID *a3)
{
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ebx
  void (__fastcall *v8)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rsi
  int v10; // [rsp+20h] [rbp-38h]
  double v11; // [rsp+20h] [rbp-38h]
  char *v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v11 = a2;
    WPP_SF_Sq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      30,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      SLOBYTE(v11));
  }
  if ( !(unsigned __int8)ValidateAudioLevel() )
  {
    v7 = -2147024809;
LABEL_15:
    if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x40) != 0 && *(_BYTE *)(v5 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v5 + 16), 31LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, v7);
    return v7;
  }
  v13 = 0;
  v12 = (char *)this + 720;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v12);
  v6 = v13 == 0;
  *((float *)this + 190) = a2;
  if ( !v6 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v12);
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
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_15;
  }
  return v7;
}
