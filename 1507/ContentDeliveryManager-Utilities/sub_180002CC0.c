/*
 * XREFs of sub_180002CC0 @ 0x180002CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180002CC0(_QWORD *a1, char a2)
{
  *a1 = &off_18002C1F8;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
