/*
 * XREFs of powf @ 0x18009D81A
 * Callers:
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180033A24 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180033E2C (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
