/*
 * XREFs of ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180015A60
 * Callers:
 *     AudioSessionSetVolume @ 0x18003A1E0 (AudioSessionSetVolume.c)
 * Callees:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180036390 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ValidateAudioLevel @ 0x180036428 (ValidateAudioLevel.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SSg @ 0x180079B8C (WPP_SF_SSg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetVolume(
        CServerAudioSessionControl *this,
        float a2,
        const struct _GUID *a3)
{
  int v3; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  CPerStreamVolumeAudioSession *v8; // rbx
  __int64 (__fastcall *v9)(CPerStreamVolumeAudioSession *__hidden, float, const struct _GUID *); // rdi
  double v11; // [rsp+28h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = a2;
    WPP_SF_SSg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, (_DWORD)a3, 0, 0LL, SLOBYTE(v11));
  }
  if ( (unsigned __int8)ValidateAudioLevel() )
  {
    v8 = (CPerStreamVolumeAudioSession *)*((_QWORD *)this + 9);
    v9 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, float, const struct _GUID *))(*(_QWORD *)v8 + 312LL);
    if ( v9 == CPerStreamVolumeAudioSession::SetVolume )
      return CPerStreamVolumeAudioSession::SetVolume(v8, a2, a3);
    else
      return ((__int64 (__fastcall *)(CPerStreamVolumeAudioSession *, __int64, const struct _GUID *))v9)(v8, v6, a3);
  }
  else
  {
    if ( (TraceLoggingHProvider *)v7 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(v7 + 28) & 0x40) != 0
      && *(_BYTE *)(v7 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v7 + 16), 35LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 2147942487LL);
    }
    return 2147942487LL;
  }
}
