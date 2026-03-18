/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00A1AC0
 * Callers:
 *     sub_1C00A07D0 @ 0x1C00A07D0 (sub_1C00A07D0.c)
 *     sub_1C00A1B7C @ 0x1C00A1B7C (sub_1C00A1B7C.c)
 *     sub_1C00A6E28 @ 0x1C00A6E28 (sub_1C00A6E28.c)
 *     sub_1C01827C0 @ 0x1C01827C0 (sub_1C01827C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
