/*
 * XREFs of ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800141C0
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180018460 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180010860 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180013698 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001372C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ValidateAudioLevel @ 0x1800322AC (ValidateAudioLevel.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetVolume(
        CPerStreamVolumeAudioSession *this,
        float a2,
        struct _GUID *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  double v8; // [rsp+20h] [rbp-28h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v8 = a2;
    WPP_SF_Sq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      28,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      SLOBYTE(v8));
  }
  if ( (unsigned __int8)ValidateAudioLevel() )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    v6 = CAudioSession::SetVolume(this, a2, a3);
    if ( (v6 & 0x80000000) == 0 )
    {
      CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
      return v6;
    }
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  else
  {
    v6 = -2147024809;
  }
  if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x40) != 0 && *(_BYTE *)(v5 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v5 + 16), 29LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, v6);
  return v6;
}
