/*
 * XREFs of ?Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ @ 0x1800C1540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Release(__int64 a1)
{
  return CSwRenderTargetGetBounds::Release((CSwRenderTargetGetBounds *)(a1 - 40));
}
