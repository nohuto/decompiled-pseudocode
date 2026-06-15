/*
 * XREFs of ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180008A60
 * Callers:
 *     ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x18000EA60 (-SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005CECC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008AD0 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetMute(
        CPerStreamVolumeAudioSession *this,
        int a2,
        const struct _GUID *a3,
        int a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = CAudioSession::SetMute(this, a2, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetMute", 0x3DEu, v5);
  else
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
  return v6;
}
