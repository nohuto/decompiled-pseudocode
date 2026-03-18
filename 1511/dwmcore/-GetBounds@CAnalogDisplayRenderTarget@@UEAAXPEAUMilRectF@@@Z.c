/*
 * XREFs of ?GetBounds@CAnalogDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800BD8A0
 * Callers:
 *     ?GetBounds@CAnalogDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z @ 0x1800BD900 (-GetBounds@CAnalogDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogDisplayRenderTarget::GetBounds(CAnalogDisplayRenderTarget *this, struct MilRectF *a2)
{
  *(float *)a2 = (float)*((int *)this + 84);
  *((float *)a2 + 1) = (float)*((int *)this + 85);
  *((float *)a2 + 2) = (float)*((int *)this + 2) + (float)*((int *)this + 84);
  *((float *)a2 + 3) = (float)*((int *)this + 3) + (float)*((int *)this + 85);
}
