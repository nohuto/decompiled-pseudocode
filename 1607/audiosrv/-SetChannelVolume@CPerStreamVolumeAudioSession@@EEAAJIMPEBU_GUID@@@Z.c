/*
 * XREFs of ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x18005F280
 * Callers:
 *     <none>
 * Callees:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180008AD0 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x18005F160 (-SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetChannelVolume(
        CPerStreamVolumeAudioSession *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = CAudioSession::SetChannelVolume(this, a2, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetChannelVolume", 1199, v5);
  else
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
  return v6;
}
