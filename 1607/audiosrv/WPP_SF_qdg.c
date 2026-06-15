/*
 * XREFs of WPP_SF_qdg @ 0x180058FD8
 * Callers:
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x1800164F0 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800266A0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180026B60 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180026BFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180056A90 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18005744C (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180058350 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BB40 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180065164 (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x180072030 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, va1);
}
