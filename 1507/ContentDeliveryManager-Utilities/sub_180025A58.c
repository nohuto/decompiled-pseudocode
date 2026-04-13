/*
 * XREFs of sub_180025A58 @ 0x180025A58
 * Callers:
 *     sub_180024A0C @ 0x180024A0C (sub_180024A0C.c)
 *     sub_180024EA4 @ 0x180024EA4 (sub_180024EA4.c)
 *     sub_1800251C0 @ 0x1800251C0 (sub_1800251C0.c)
 *     sub_180025724 @ 0x180025724 (sub_180025724.c)
 * Callees:
 *     sub_180025730 @ 0x180025730 (sub_180025730.c)
 */

__int64 __fastcall sub_180025A58(_WORD *a1, unsigned __int16 *a2)
{
  __int16 v3; // ax
  __int64 result; // rax

  v3 = (a2[3] >> 4) & 0x7FF;
  if ( v3 == 2047 )
  {
    *a1 = 0;
    if ( (a2[3] & 0xF) != 0 )
      return 2LL;
    if ( a2[2] )
      return 2LL;
    if ( a2[1] )
      return 2LL;
    result = 1LL;
    if ( *a2 )
      return 2LL;
  }
  else if ( ((a2[3] >> 4) & 0x7FF) != 0 || (v3 = sub_180025730(a2), v3 <= 0) )
  {
    a2[3] &= 0xBFEFu;
    a2[3] |= 0x3FE0u;
    *a1 = v3 - 1022;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = 0;
    return 0LL;
  }
  return result;
}
