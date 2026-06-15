/*
 * XREFs of ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180018460
 * Callers:
 *     AudioSessionSetVolume @ 0x1800322D0 (AudioSessionSetVolume.c)
 * Callees:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800141C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ValidateAudioLevel @ 0x1800322AC (ValidateAudioLevel.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SSg @ 0x18007E96C (WPP_SF_SSg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetVolume(CServerAudioSessionControl *this, float a2, struct _GUID *a3)
{
  int v3; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  CPerStreamVolumeAudioSession *v8; // rbx
  __int64 (__fastcall *v9)(CPerStreamVolumeAudioSession *, float, struct _GUID *); // rdi
  double v11; // [rsp+28h] [rbp-20h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v11 = a2;
    WPP_SF_SSg(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v3, (_DWORD)a3, 0, 0LL, SLOBYTE(v11));
  }
  if ( (unsigned __int8)ValidateAudioLevel() )
  {
    v8 = (CPerStreamVolumeAudioSession *)*((_QWORD *)this + 9);
    v9 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *, float, struct _GUID *))(*(_QWORD *)v8 + 312LL);
    if ( v9 == CPerStreamVolumeAudioSession::SetVolume )
      return CPerStreamVolumeAudioSession::SetVolume(v8, a2, a3);
    else
      return ((__int64 (__fastcall *)(CPerStreamVolumeAudioSession *, __int64, struct _GUID *))v9)(v8, v6, a3);
  }
  else
  {
    if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control && (*(_BYTE *)(v7 + 28) & 0x40) != 0 && *(_BYTE *)(v7 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v7 + 16), 35LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 2147942487LL);
    return 2147942487LL;
  }
}
