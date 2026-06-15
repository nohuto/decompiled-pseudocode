/*
 * XREFs of WPP_SF_qdg @ 0x180071214
 * Callers:
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002F1A0 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180031B60 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18006EA50 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006F158 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x1800704F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180078240 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180082B38 (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x18008C060 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
