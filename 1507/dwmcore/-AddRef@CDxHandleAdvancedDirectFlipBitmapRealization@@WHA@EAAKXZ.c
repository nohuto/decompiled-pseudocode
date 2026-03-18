/*
 * XREFs of ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ @ 0x18009C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 112));
}
