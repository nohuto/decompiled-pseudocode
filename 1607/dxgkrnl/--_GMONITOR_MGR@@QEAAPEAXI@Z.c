/*
 * XREFs of ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0034E24
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C00F5160 (MonitorCreateMonitorManager.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0147394 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C01AE934 (--1MONITOR_MGR@@QEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`scalar deleting destructor'(MONITOR_MGR *this)
{
  MONITOR_MGR::~MONITOR_MGR(this);
  operator delete(this);
  return this;
}
