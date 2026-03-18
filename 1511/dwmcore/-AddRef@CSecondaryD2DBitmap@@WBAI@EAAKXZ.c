/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800BE540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 264));
}
