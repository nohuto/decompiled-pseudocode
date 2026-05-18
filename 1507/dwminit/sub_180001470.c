/*
 * XREFs of sub_180001470 @ 0x180001470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 */

_QWORD *__fastcall sub_180001470(_QWORD *a1, char a2)
{
  *a1 = &off_180008D90;
  if ( (a2 & 1) != 0 )
    sub_180003E20(a1);
  return a1;
}
