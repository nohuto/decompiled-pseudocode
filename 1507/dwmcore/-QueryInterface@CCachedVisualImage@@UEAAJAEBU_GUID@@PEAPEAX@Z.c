/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000EF20
 * Callers:
 *     ?QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A8A0 (-QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A8B0 (-QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A950 (-QueryInterface@CGdiSpriteBitmap@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::QueryInterface(CCachedVisualImage *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCachedVisualImage *)((char *)this + 16), a2, a3);
}
