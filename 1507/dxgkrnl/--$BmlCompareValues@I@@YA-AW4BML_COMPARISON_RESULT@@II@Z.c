/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0099764
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00995C4 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C0099774 (BmlCompareModeRegions.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C009A69C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareMonitorRegions @ 0x1C017E31C (BmlCompareMonitorRegions.c)
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
