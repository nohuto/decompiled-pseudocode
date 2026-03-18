/*
 * XREFs of EtwTracPowerOnMonitoreBegin @ 0x1C00704E4
 * Callers:
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00B2224 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall EtwTracPowerOnMonitoreBegin(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &PowerOnMonitorBegin, a3, a1);
  return result;
}
