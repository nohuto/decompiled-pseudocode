/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18014B1A0
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z @ 0x1800BDF50 (-DiscardRectangle@CHwTextureRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(
        CHwSurfaceRenderTarget *this,
        const struct MilRectF *a2,
        __int64 a3,
        unsigned int a4)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2, a3, a4);
}
