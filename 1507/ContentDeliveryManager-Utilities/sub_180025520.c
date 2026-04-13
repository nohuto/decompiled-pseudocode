/*
 * XREFs of sub_180025520 @ 0x180025520
 * Callers:
 *     sub_18002340C @ 0x18002340C (sub_18002340C.c)
 *     sub_180023890 @ 0x180023890 (sub_180023890.c)
 *     sub_180023E14 @ 0x180023E14 (sub_180023E14.c)
 *     sub_1800241F4 @ 0x1800241F4 (sub_1800241F4.c)
 *     sub_180024A0C @ 0x180024A0C (sub_180024A0C.c)
 *     sub_180024EA4 @ 0x180024EA4 (sub_180024EA4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180025520(char a1)
{
  if ( (a1 & 5) != 0 )
  {
    *errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *errno() = 34;
  }
}
