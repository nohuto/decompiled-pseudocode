/*
 * XREFs of ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00A0D14
 * Callers:
 *     sub_1C009CAA8 @ 0x1C009CAA8 (sub_1C009CAA8.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C009CC74 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     sub_1C00A0948 @ 0x1C00A0948 (sub_1C00A0948.c)
 *     sub_1C00A0A40 @ 0x1C00A0A40 (sub_1C00A0A40.c)
 *     sub_1C00A6C58 @ 0x1C00A6C58 (sub_1C00A6C58.c)
 *     sub_1C0182824 @ 0x1C0182824 (sub_1C0182824.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeExtents(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = *a1;
  if ( (unsigned int)*a1 > *a2 )
    return 1LL;
  v3 = a1[1];
  v4 = a2[1];
  if ( v3 > v4 )
    return 1LL;
  if ( v2 == *a2 && v3 == v4 )
    return 0LL;
  return 0xFFFFFFFFLL;
}
