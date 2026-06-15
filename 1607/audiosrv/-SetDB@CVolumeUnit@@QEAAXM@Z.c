/*
 * XREFs of ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180027010
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800266A0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18002D5F4 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800568F0 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180057174 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18005744C (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180057DA0 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180057F10 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180058090 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180058350 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVolumeUnit::SetDB(CVolumeUnit *this, float a2)
{
  if ( *((float *)this + 5) <= a2 )
    a2 = *((float *)this + 5);
  if ( a2 <= *((float *)this + 2) )
    a2 = *((float *)this + 2);
  *((float *)this + 1) = a2;
}
