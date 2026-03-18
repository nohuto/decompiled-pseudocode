/*
 * XREFs of ?GetUpdateIdToken@CGdiSpriteBitmap@@UEAAPEAUConfirmPresentHistoryToken@@XZ @ 0x1800BD3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ConfirmPresentHistoryToken *__fastcall CGdiSpriteBitmap::GetUpdateIdToken(CGdiSpriteBitmap *this)
{
  *((_BYTE *)this + 372) &= ~0x10u;
  return (CGdiSpriteBitmap *)((char *)this + 376);
}
