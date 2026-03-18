/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 264), a2, a3);
}
