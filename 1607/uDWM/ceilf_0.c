/*
 * XREFs of ceilf_0 @ 0x180050552
 * Callers:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DCE0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031750 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800701B8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf_0(float X)
{
  return ceilf(X);
}
