/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x1800BF210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 24));
}
