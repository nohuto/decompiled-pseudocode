/*
 * XREFs of ?QueryInterface@CHwndBitmap@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCachedVisualImage::QueryInterface((CCachedVisualImage *)(a1 - 144), a2, a3);
}
