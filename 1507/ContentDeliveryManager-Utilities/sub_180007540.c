/*
 * XREFs of sub_180007540 @ 0x180007540
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006440 @ 0x180006440 (sub_180006440.c)
 */

_QWORD *__fastcall sub_180007540(_QWORD *a1, RTL_SRWLOCK *a2)
{
  char v2; // bl

  *a1 = off_18002CB48;
  v2 = (char)a2;
  sub_180006440((__int64)a1, a2, 1);
  qword_18003AC80 = 0LL;
  byte_18003AE40 = 0;
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
