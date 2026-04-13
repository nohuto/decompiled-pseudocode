/*
 * XREFs of sub_18000B510 @ 0x18000B510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002185C @ 0x18002185C (sub_18002185C.c)
 */

_QWORD *__fastcall sub_18000B510(_QWORD *a1, char a2)
{
  *a1 = off_18002E178;
  sub_18002185C();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
