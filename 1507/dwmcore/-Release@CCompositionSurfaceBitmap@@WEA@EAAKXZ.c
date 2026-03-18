/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x18009A360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CBitmapRealization::Release((CBitmapRealization *)(a1 - 64));
}
