/*
 * XREFs of ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00C54D4
 * Callers:
 *     sub_1C00A07D0 @ 0x1C00A07D0 (sub_1C00A07D0.c)
 *     sub_1C00A1AD0 @ 0x1C00A1AD0 (sub_1C00A1AD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<int>(int a1, int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)(a1 >= a2) - 1;
}
