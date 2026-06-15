/*
 * XREFs of ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C
 * Callers:
 *     ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x18006E620 (-GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18006EA50 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18006F7C8 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006FF60 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x1800700E0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180070290 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x1800704F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180070980 (-UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x180070AB0 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CVolumeUnit::GetDB(CVolumeUnit *this)
{
  float result; // xmm0_4

  result = *((float *)this + 1);
  if ( *((float *)this + 3) <= result )
    result = *((float *)this + 3);
  if ( result <= *((float *)this + 2) )
    return *((float *)this + 2);
  return result;
}
