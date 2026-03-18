/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032EB0
 * Callers:
 *     ?QueryInterface@CHwndBitmap@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0600 (-QueryInterface@CHwndBitmap@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0660 (-QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0670 (-QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0680 (-QueryInterface@CCachedVisualImage@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::QueryInterface(CCachedVisualImage *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCachedVisualImage *)((char *)this + 16), a2, a3);
}
