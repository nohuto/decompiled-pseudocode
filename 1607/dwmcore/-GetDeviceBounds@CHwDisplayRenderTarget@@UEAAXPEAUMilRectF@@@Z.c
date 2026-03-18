/*
 * XREFs of ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18008F600
 * Callers:
 *     ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@_N@Z @ 0x180064110 (-GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::GetDeviceBounds(CHwDisplayRenderTarget *this, struct MilRectF *a2)
{
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((float *)a2 + 2) = (float)*((int *)this - 42);
  *((float *)a2 + 3) = (float)*((int *)this - 41);
}
