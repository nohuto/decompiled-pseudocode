/*
 * XREFs of fs_NewContourGridFit @ 0x1C0246EC0
 * Callers:
 *     lGGOBitmap @ 0x1C0246EF8 (lGGOBitmap.c)
 * Callees:
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 */

__int64 __fastcall fs_NewContourGridFit(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = fs__Contour(a1, a2, 1);
  if ( (_DWORD)result )
    return fs__Contour(a1, a2, 0);
  return result;
}
