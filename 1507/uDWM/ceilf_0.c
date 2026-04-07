/*
 * XREFs of ceilf_0 @ 0x180049872
 * Callers:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CE7C (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D8E0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800392E4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180067BA4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf_0(float X)
{
  return ceilf(X);
}
