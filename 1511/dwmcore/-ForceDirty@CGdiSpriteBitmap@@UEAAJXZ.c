/*
 * XREFs of ?ForceDirty@CGdiSpriteBitmap@@UEAAJXZ @ 0x1800876D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x180086554 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ForceDirty(CGdiSpriteBitmap *this)
{
  if ( *((_DWORD *)this + 124) == 1 )
    CGdiSpriteBitmap::Dirty((CGdiSpriteBitmap *)((char *)this - 72));
  return 0LL;
}
