/*
 * XREFs of ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 104), a2, a3);
}
