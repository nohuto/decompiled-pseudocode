/*
 * XREFs of ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00B0A68
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00995C4 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareRegionsWithPivot @ 0x1C0099798 (BmlCompareRegionsWithPivot.c)
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
