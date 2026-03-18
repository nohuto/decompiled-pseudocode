/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WII@EAAKXZ @ 0x1800BFC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 136));
}
