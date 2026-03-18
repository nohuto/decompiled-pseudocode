/*
 * XREFs of ?GetBounds@CAnalogDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800C0FB0
 * Callers:
 *     ?GetBounds@CAnalogDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z @ 0x1800C1010 (-GetBounds@CAnalogDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogDisplayRenderTarget::GetBounds(CAnalogDisplayRenderTarget *this, struct MilRectF *a2)
{
  *(float *)a2 = (float)*((int *)this + 86);
  *((float *)a2 + 1) = (float)*((int *)this + 87);
  *((float *)a2 + 2) = (float)*((int *)this + 2) + (float)*((int *)this + 86);
  *((float *)a2 + 3) = (float)*((int *)this + 3) + (float)*((int *)this + 87);
}
