/*
 * XREFs of ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C011F05C
 * Callers:
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01823AC (MonitorDisableMonitorVirtualModeSuport.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGMONITOR::_IsVirtualModeSuportDisabled(DXGMONITOR *this)
{
  char v1; // r8

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 133LL) || *((char *)this + 24) < 0 )
    return 1;
  return v1;
}
