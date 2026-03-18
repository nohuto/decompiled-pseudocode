/*
 * XREFs of ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ @ 0x1800BF3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 472));
}
