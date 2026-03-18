/*
 * XREFs of ?GetBounds@CSwRenderTargetGetBounds@@UEAAXPEAUMilRectF@@@Z @ 0x180081FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwRenderTargetGetBounds::GetBounds(CSwRenderTargetGetBounds *this, struct MilRectF *a2)
{
  *(_OWORD *)a2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
}
