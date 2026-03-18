/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C00E0944
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00E15E8 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C00E0A1C (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(PDEVICE_OBJECT *this)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  DeviceRegKey = 0LL;
  if ( this[5] && ((_BYTE)this[3] & 0x10) != 0 )
  {
    v3 = IoOpenDeviceRegistryKey(this[5], 2u, 0x20019u, &DeviceRegKey);
    v5 = v3;
    if ( v3 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v7 + 24) = v5;
      WdLogEvent5_WdError(v7);
    }
    else
    {
      LODWORD(v5) = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry((DXGMONITOR *)this, DeviceRegKey, 1u);
    }
    v2 = DeviceRegKey;
  }
  else
  {
    LODWORD(v5) = -1073741275;
  }
  if ( v2 )
    ZwClose(v2);
  return (unsigned int)v5;
}
