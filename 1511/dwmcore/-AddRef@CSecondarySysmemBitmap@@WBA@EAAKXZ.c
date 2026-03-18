/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x1800BD0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 16));
}
