/*
 * XREFs of ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00C9AF0
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C00D7524 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00DDE60 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C0008BBC (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000A7A4 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000A808 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C0097EDC (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDiagInfo(
        DXGMONITOR *this,
        struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // r11
  _QWORD *v8; // r11
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 94);
  v10 = 0LL;
  *(_DWORD *)a2 = v4;
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, &v10, a3, a4) >= 0 )
  {
    v6 = v10;
    *((_DWORD *)a2 + 1) = 1;
    EDIDV1_ObtainMonitorManufacturerName(v6);
    EDIDV1_ObtainMonitorProductCodeID(v7);
    EDIDV1_ObtainMonitorSerialNumber(v8, (char *)a2 + 17);
  }
  return 0LL;
}
