/*
 * XREFs of sub_18000DF28 @ 0x18000DF28
 * Callers:
 *     sub_180026FA5 @ 0x180026FA5 (sub_180026FA5.c)
 * Callees:
 *     sub_180013CE8 @ 0x180013CE8 (sub_180013CE8.c)
 */

__int64 __fastcall sub_18000DF28(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 144);
  sub_180013CE8(a1 + 144);
  *v1 = off_18002E178;
  return sub_18002185C(v1);
}
