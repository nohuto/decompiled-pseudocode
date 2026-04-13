/*
 * XREFs of sub_180018F20 @ 0x180018F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180018F20(_QWORD *a1, char a2)
{
  *a1 = &off_18002D388;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
