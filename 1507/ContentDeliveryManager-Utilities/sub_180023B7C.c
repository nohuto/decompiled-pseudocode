/*
 * XREFs of sub_180023B7C @ 0x180023B7C
 * Callers:
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 * Callees:
 *     sub_18002340C @ 0x18002340C (sub_18002340C.c)
 *     sub_180023890 @ 0x180023890 (sub_180023890.c)
 *     sub_180023C04 @ 0x180023C04 (sub_180023C04.c)
 */

__int64 __fastcall sub_180023B7C(__int64 a1, unsigned int a2, int a3)
{
  int v6; // ebx

  v6 = a3 / 10000;
  sub_180023C04(a1, a2);
  sub_180023890(a1, a2, 10000.0);
  sub_18002340C(a1, a2, (float)(a3 - 10000 * v6));
  return a1;
}
