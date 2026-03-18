/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C000F230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C0101290)();
  else
    return 3223191558LL;
}
