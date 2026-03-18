/*
 * XREFs of BmlIsLowResAnalogTvOutput @ 0x1C00C05DC
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00BEC0C (BmlFillPreferredMonitorMode.c)
 *     BmlGetMonitorModePreference @ 0x1C00BF098 (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsLowResAnalogTvOutput(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 72);
  return v1 == -1 || v1 > 0 && (v1 <= 3 || v1 == 14);
}
