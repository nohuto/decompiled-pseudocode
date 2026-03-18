/*
 * XREFs of ?AddRef@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ @ 0x18009C000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleYUVBitmapRealization::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 520));
}
