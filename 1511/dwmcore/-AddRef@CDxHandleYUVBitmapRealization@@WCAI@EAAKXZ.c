/*
 * XREFs of ?AddRef@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ @ 0x1800BF430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 520));
}
