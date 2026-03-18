/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCachedVisualImage::QueryInterface((CCachedVisualImage *)(a1 - 72), a2, a3);
}
