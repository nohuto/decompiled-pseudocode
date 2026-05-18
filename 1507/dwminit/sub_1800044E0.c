/*
 * XREFs of sub_1800044E0 @ 0x1800044E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 *     sub_180004DC8 @ 0x180004DC8 (sub_180004DC8.c)
 */

_QWORD *__fastcall sub_1800044E0(_QWORD *a1, char a2)
{
  *a1 = off_180008E80;
  sub_180004DC8();
  if ( (a2 & 1) != 0 )
    sub_180003E20((__int64)a1);
  return a1;
}
