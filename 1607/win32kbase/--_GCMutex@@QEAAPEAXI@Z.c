/*
 * XREFs of ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00BD5C4
 * Callers:
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C0084CE0 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BD500 (--1CMonitorPDO@@UEAA@XZ.c)
 * Callees:
 *     ??1CMutex@@QEAA@XZ @ 0x1C0052F80 (--1CMutex@@QEAA@XZ.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 */

void **__fastcall CMutex::`scalar deleting destructor'(void **this)
{
  CMutex::~CMutex(this);
  OPMFreeMemory(this);
  return this;
}
