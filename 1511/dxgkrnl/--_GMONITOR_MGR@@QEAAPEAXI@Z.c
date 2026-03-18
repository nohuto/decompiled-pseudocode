/*
 * XREFs of ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C002C5F4
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01290DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C0185218 (--1MONITOR_MGR@@QEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`scalar deleting destructor'(MONITOR_MGR *this)
{
  MONITOR_MGR::~MONITOR_MGR(this);
  operator delete(this);
  return this;
}
