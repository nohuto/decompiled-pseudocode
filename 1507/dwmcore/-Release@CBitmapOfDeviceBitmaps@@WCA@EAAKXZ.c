/*
 * XREFs of ?Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ @ 0x18009B0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Release(__int64 a1)
{
  return CSwRenderTargetGetBounds::Release((CSwRenderTargetGetBounds *)(a1 - 32));
}
