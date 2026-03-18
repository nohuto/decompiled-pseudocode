/*
 * XREFs of sub_1C00A94AC @ 0x1C00A94AC
 * Callers:
 *     sub_1C00A6D34 @ 0x1C00A6D34 (sub_1C00A6D34.c)
 * Callees:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C009CC74 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 */

__int64 __fastcall sub_1C00A94AC(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int TargetModePreferenceOnMonitor; // ebp
  int v8; // eax

  TargetModePreferenceOnMonitor = BmlGetTargetModePreferenceOnMonitor(a1, a3, a4);
  v8 = BmlGetTargetModePreferenceOnMonitor(a2, a3, a4);
  if ( TargetModePreferenceOnMonitor > v8 )
    return 1LL;
  else
    return (unsigned int)(TargetModePreferenceOnMonitor >= v8) - 1;
}
