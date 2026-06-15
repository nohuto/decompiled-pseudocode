/*
 * XREFs of floorf_0 @ 0x1800449D6
 * Callers:
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x18006EBD0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x180070E00 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x180070F40 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
