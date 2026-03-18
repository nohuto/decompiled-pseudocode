/*
 * XREFs of ?QueryInterface@COffScreenRenderTarget@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 80), a2, a3);
}
