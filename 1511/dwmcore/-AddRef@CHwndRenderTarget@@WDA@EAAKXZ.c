/*
 * XREFs of ?AddRef@CHwndRenderTarget@@WDA@EAAKXZ @ 0x1800BCB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 48));
}
