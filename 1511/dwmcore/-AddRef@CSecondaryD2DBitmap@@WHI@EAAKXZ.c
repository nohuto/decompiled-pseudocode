/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800BF440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 120));
}
