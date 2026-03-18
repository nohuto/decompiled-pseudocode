/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x180033D30
 * Callers:
 *     ?Release@CHwndBitmap@@WJA@EAAKXZ @ 0x1800C0610 (-Release@CHwndBitmap@@WJA@EAAKXZ.c)
 *     ?Release@CFlipChain@@W7EAAKXZ @ 0x1800C0690 (-Release@CFlipChain@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800C06A0 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800C06B0 (-Release@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CMILCOMBase::InternalRelease((CHwndBitmap *)((char *)this + 16));
}
