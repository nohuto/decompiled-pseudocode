/*
 * XREFs of sub_1C009D020 @ 0x1C009D020
 * Callers:
 *     sub_1C009CAA8 @ 0x1C009CAA8 (sub_1C009CAA8.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C009CC74 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     sub_1C009CF24 @ 0x1C009CF24 (sub_1C009CF24.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C009D020(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 72);
  return v1 != 0x80000000 && v1 != -1 && (v1 <= 0 || v1 > 3 && v1 != 6 && (v1 <= 7 || v1 > 9 && (v1 <= 10 || v1 > 14)));
}
