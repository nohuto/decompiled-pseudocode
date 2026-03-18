/*
 * XREFs of ?Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ @ 0x1800BDD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Release(__int64 a1)
{
  return CSwRenderTargetGetBounds::Release((CSwRenderTargetGetBounds *)(a1 - 256));
}
