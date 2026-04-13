/*
 * XREFs of sub_1800145A0 @ 0x1800145A0
 * Callers:
 *     sub_18001FE70 @ 0x18001FE70 (sub_18001FE70.c)
 * Callees:
 *     sub_180013CE8 @ 0x180013CE8 (sub_180013CE8.c)
 *     sub_18002185C @ 0x18002185C (sub_18002185C.c)
 */

_QWORD *__fastcall sub_1800145A0(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi

  v2 = a1 - 18;
  sub_180013CE8((__int64)a1);
  *a1 = off_18002E178;
  sub_18002185C(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
