/*
 * XREFs of ?CalculateVerticalActivePixelsFrom@@YAJGGGPEAG@Z @ 0x1C000C228
 * Callers:
 *     ?EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIMING@@EW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000BCFC (-EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateVerticalActivePixelsFrom(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  v4 = a3 * a1;
  v5 = a2;
  *a4 = 0;
  v7 = v4 % a2;
  v6 = v4 / v5;
  if ( v7 )
    return 3223126020LL;
  *a4 = v6;
  return 0LL;
}
