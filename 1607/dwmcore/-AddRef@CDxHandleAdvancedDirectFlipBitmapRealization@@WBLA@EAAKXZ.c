/*
 * XREFs of ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800C2880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 432));
}
