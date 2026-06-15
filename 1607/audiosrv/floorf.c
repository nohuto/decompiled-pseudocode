/*
 * XREFs of floorf @ 0x180036D00
 * Callers:
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180056C00 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x180058C60 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x180058D60 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
