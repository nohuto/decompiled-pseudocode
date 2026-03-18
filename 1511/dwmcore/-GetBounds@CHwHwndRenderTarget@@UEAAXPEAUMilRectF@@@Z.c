/*
 * XREFs of ?GetBounds@CHwHwndRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800BE2D0
 * Callers:
 *     ?GetBounds@CHwHwndRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z @ 0x1800BE330 (-GetBounds@CHwHwndRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z.c)
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
