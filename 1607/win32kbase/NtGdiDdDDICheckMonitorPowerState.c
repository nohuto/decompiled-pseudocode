/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C0075AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C011B3F0)();
  else
    return 3223191558LL;
}
