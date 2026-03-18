/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18017B810
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z @ 0x1800C1740 (-DiscardRectangle@CHwTextureRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(CHwTextureRenderTarget *this, const struct MilRectF *a2)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2);
}
