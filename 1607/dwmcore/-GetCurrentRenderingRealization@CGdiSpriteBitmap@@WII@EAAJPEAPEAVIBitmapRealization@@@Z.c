/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@WII@EAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C0420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(__int64 a1, struct IRenderTargetBitmap **a2)
{
  return CAnalogDisplayRenderTarget::GetHDRIntermediateTargetBitmap((CAnalogDisplayRenderTarget *)(a1 - 136), a2);
}
