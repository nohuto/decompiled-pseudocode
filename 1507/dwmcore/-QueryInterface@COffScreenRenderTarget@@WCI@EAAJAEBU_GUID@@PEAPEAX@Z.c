/*
 * XREFs of ?QueryInterface@COffScreenRenderTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009AAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 40), a2, a3);
}
