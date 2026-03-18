/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 256), a2, a3);
}
