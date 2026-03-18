/*
 * XREFs of ?MarkInactive@CGdiSpriteBitmap@@UEAAXXZ @ 0x18002ADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::MarkInactive(CGdiSpriteBitmap *this)
{
  *((_BYTE *)this + 372) |= 4u;
}
