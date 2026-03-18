/*
 * XREFs of ?GetVisualAlpha@CVisual@@QEBAMXZ @ 0x1800DCD68
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetVisualAlpha(CVisual *this)
{
  float v1; // xmm1_4
  float result; // xmm0_4

  v1 = *((float *)this + 100);
  result = FLOAT_1_0;
  if ( v1 <= 1.0 )
  {
    result = 0.0;
    if ( v1 >= 0.0 )
      return *((float *)this + 100);
  }
  return result;
}
