/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C018522C
 * Callers:
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01823AC (MonitorDisableMonitorVirtualModeSuport.c)
 * Callees:
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C018469C (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DisableVirtualModeSupport(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v6; // ebx
  __int64 v7; // rax
  __int64 result; // rax

  v4 = a2;
  v6 = (*((_DWORD *)this + 6) >> 7) & 1;
  if ( (*((_DWORD *)this + 6) & 2) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ ((v4 != 0) << 7)) & 0x80;
  result = DXGMONITOR::_SaveVirtualModeSupportToRegistry((UNICODE_STRING *)this, a2, a3, a4);
  if ( (int)result < 0 )
    *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (v6 << 7)) & 0x80;
  return result;
}
