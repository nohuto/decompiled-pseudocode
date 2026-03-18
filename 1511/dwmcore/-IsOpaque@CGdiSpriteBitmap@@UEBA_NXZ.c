/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180087340
 * Callers:
 *     ?IsOpaque@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x1800BD410 (-IsOpaque@CGdiSpriteBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  return *((_DWORD *)this + 23) == 3;
}
