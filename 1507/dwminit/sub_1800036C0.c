/*
 * XREFs of sub_1800036C0 @ 0x1800036C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003610 @ 0x180003610 (sub_180003610.c)
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 */

_QWORD *__fastcall sub_1800036C0(_QWORD *a1, char a2)
{
  *a1 = off_180008DB8;
  sub_180003610((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_180003E20(a1);
  return a1;
}
