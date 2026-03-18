/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WCI@EAAKXZ @ 0x18009A340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CBitmapRealization::Release((CBitmapRealization *)(a1 - 40));
}
