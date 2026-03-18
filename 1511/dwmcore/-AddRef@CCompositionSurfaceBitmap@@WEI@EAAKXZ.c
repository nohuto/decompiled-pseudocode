/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WEI@EAAKXZ @ 0x1800BCDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 72));
}
