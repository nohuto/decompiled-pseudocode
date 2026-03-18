/*
 * XREFs of ?IsCloseRealZero@@YAHMM@Z @ 0x18005CB08
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180104AE8 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCloseRealZero(float a1, float a2)
{
  float v2; // xmm3_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  return a2 > v2;
}
