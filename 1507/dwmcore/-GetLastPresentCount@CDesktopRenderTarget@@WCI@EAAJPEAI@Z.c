/*
 * XREFs of ?GetLastPresentCount@CDesktopRenderTarget@@WCI@EAAJPEAI@Z @ 0x180099D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::GetLastPresentCount(
        __int64 a1,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  return CAnalogRenderTarget::GetBits((CAnalogRenderTarget *)(a1 - 40), a2, a3);
}
