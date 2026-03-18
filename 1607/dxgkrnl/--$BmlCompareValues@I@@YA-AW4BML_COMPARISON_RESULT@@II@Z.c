/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00C04C4
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C00BE9D4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00BFD08 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C00C058C (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C01AB98C (BmlCompareMonitorRegions.c)
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
