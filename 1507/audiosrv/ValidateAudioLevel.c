/*
 * XREFs of ValidateAudioLevel @ 0x1800322AC
 * Callers:
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180010860 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800141C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180018460 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18007B5A0 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x18007D7E0 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateAudioLevel(float a1)
{
  return a1 >= 0.0 && a1 <= 1.0;
}
