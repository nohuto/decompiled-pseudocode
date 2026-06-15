/*
 * XREFs of ValidateAudioLevel @ 0x180029BB0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180009280 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x18000EAD0 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180015BE0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18005EF40 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x180060BD0 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateAudioLevel(float a1)
{
  return a1 >= 0.0 && a1 <= 1.0;
}
