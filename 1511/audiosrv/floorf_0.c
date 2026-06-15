/*
 * XREFs of floorf_0 @ 0x180048C26
 * Callers:
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x18006D4B0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x18006F4D0 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x18006F610 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
