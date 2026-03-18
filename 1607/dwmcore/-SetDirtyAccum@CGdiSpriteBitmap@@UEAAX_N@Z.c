/*
 * XREFs of ?SetDirtyAccum@CGdiSpriteBitmap@@UEAAX_N@Z @ 0x18002AE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::SetDirtyAccum(CGdiSpriteBitmap *this, char a2)
{
  *((_DWORD *)this + 114) = 2 - (a2 != 0);
}
