/*
 * XREFs of ?AddRef@CDxHandleYUVBitmapRealization@@WBKA@EAAKXZ @ 0x1800C2900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleYUVBitmapRealization::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 416));
}
