/*
 * XREFs of sub_1C01827C0 @ 0x1C01827C0
 * Callers:
 *     sub_1C00A6D34 @ 0x1C00A6D34 (sub_1C00A6D34.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A2A0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00A1AC0 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     sub_1C00A1B7C @ 0x1C00A1B7C (sub_1C00A1B7C.c)
 */

__int64 __fastcall sub_1C01827C0(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned int v7; // r9d

  if ( a1 == a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
  }
  result = sub_1C00A1B7C(a1 + 21, a2 + 21);
  if ( !(_DWORD)result )
  {
    DMMVIDEOSIGNALMODE::DivideAndRound(a2[23], a2[24]);
    v6 = DMMVIDEOSIGNALMODE::DivideAndRound(a1[23], a1[24]);
    return BmlCompareValues<unsigned int>(v6, v7);
  }
  return result;
}
