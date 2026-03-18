/*
 * XREFs of ?Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ @ 0x18009B0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Release(__int64 a1)
{
  return CSwRenderTargetGetBounds::Release((CSwRenderTargetGetBounds *)(a1 - 40));
}
