/*
 * XREFs of ?GetMargins@CGdiSpriteBitmap@@UEAA?AU_MARGINS@@XZ @ 0x18009A740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall CGdiSpriteBitmap::GetMargins(CGdiSpriteBitmap *this, struct _MARGINS *__return_ptr retstr)
{
  struct _MARGINS *result; // rax

  result = retstr;
  *retstr = *(struct _MARGINS *)((char *)this + 56);
  return result;
}
