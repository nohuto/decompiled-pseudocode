/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C0189A40
 * Callers:
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01869FC (MonitorDisableMonitorVirtualModeSuport.c)
 * Callees:
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0188DE4 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DisableVirtualModeSupport(DXGMONITOR *this, char a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax

  v4 = (*((_DWORD *)this + 6) >> 7) & 1;
  if ( (*((_DWORD *)this + 6) & 2) != 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ ((a2 != 0) << 7)) & 0x80;
  result = DXGMONITOR::_SaveVirtualModeSupportToRegistry((UNICODE_STRING *)this);
  if ( (int)result < 0 )
    *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (v4 << 7)) & 0x80;
  return result;
}
