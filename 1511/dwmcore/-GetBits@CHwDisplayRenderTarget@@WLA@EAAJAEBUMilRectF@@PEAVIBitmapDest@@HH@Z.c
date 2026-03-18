/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800BD890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBits(
        __int64 a1,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CHwDisplayRenderTarget::GetBits((CHwDisplayRenderTarget *)(a1 - 176), a2, a3, a4, a5);
}
