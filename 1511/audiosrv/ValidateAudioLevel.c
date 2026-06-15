/*
 * XREFs of ValidateAudioLevel @ 0x180036428
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180015A60 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x180028660 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x180036390 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x180076830 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x180078A40 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateAudioLevel(float a1)
{
  return a1 >= 0.0 && a1 <= 1.0;
}
