/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800C0FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBits(
        __int64 a1,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        unsigned int a4,
        unsigned int a5)
{
  return CHwDisplayRenderTarget::GetBits((CHwDisplayRenderTarget *)(a1 - 176), a2, a3, a4, a5);
}
