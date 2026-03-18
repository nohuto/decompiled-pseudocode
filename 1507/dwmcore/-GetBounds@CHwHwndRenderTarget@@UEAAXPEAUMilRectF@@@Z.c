/*
 * XREFs of ?GetBounds@CHwHwndRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18009B580
 * Callers:
 *     ?GetBounds@CAnalogDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z @ 0x18009AC30 (-GetBounds@CAnalogDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwHwndRenderTarget::GetBounds(CHwHwndRenderTarget *this, struct MilRectF *a2)
{
  *(float *)a2 = (float)*((int *)this + 82);
  *((float *)a2 + 1) = (float)*((int *)this + 83);
  *((float *)a2 + 2) = (float)*((int *)this + 2) + (float)*((int *)this + 82);
  *((float *)a2 + 3) = (float)*((int *)this + 3) + (float)*((int *)this + 83);
}
