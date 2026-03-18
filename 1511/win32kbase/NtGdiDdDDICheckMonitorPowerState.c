/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C00716E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C01040B0)();
  else
    return 3223191558LL;
}
