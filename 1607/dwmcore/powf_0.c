/*
 * XREFs of powf_0 @ 0x1800BF686
 * Callers:
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1800809F4 (-scRGBTosRGB@@YAMM@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x18015B968 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?UnboundedValueAtTime@CScrollPositionAnimation@@MEBAMM@Z @ 0x18015F900 (-UnboundedValueAtTime@CScrollPositionAnimation@@MEBAMM@Z.c)
 *     ?VelocityAtTime@CScrollPositionAnimation@@MEBAMM@Z @ 0x18015FF90 (-VelocityAtTime@CScrollPositionAnimation@@MEBAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf_0(float X, float Y)
{
  return powf(X, Y);
}
