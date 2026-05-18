/*
 * XREFs of sub_180001420 @ 0x180001420
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 */

_DWORD *__fastcall sub_180001420(_DWORD *a1, char a2)
{
  *(_QWORD *)a1 = off_180008E08;
  sub_180001310(a1);
  *(_QWORD *)a1 = &off_180008D90;
  if ( (a2 & 1) != 0 )
    sub_180003E20(a1);
  return a1;
}
