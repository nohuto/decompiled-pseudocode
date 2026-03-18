/*
 * XREFs of ?GetBounds@CBaseRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800BDFB0
 * Callers:
 *     ?GetBounds@CHwTextureRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z @ 0x1800BDFE0 (-GetBounds@CHwTextureRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseRenderTarget::GetBounds(CBaseRenderTarget *this, struct MilRectF *a2)
{
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((float *)a2 + 2) = (float)*((int *)this + 2);
  *((float *)a2 + 3) = (float)*((int *)this + 3);
}
