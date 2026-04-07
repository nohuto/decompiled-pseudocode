/*
 * XREFs of floorf_0 @ 0x180049896
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18001EFBC (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800252C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800392E4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?FloatColorChannelToByte@@YAEM@Z @ 0x180041230 (-FloatColorChannelToByte@@YAEM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
