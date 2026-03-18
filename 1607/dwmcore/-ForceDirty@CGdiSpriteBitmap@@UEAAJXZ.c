/*
 * XREFs of ?ForceDirty@CGdiSpriteBitmap@@UEAAJXZ @ 0x18002AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ForceDirty(CGdiSpriteBitmap *this)
{
  if ( *((_DWORD *)this + 124) == 1 )
    CGdiSpriteBitmap::Dirty((CGdiSpriteBitmap *)((char *)this - 144));
  return 0LL;
}
