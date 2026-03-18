/*
 * XREFs of ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00688F8
 * Callers:
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C0068460 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00684A0 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     operator_delete @ 0x1C0068918 (operator_delete.c)
 *     ??1CMutex@@QEAA@XZ @ 0x1C0069EA0 (--1CMutex@@QEAA@XZ.c)
 */

CMutex *__fastcall CMutex::`scalar deleting destructor'(CMutex *this)
{
  CMutex::~CMutex(this);
  operator_delete(this);
  return this;
}
