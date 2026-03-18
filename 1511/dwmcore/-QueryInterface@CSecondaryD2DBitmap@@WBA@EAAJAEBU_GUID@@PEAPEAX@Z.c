/*
 * XREFs of ?QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 16), a2, a3);
}
