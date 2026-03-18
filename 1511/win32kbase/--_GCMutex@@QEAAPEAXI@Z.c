/*
 * XREFs of ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00837C8
 * Callers:
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C0083320 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C0083360 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??1CMutex@@QEAA@XZ @ 0x1C0067B90 (--1CMutex@@QEAA@XZ.c)
 *     sub_1C00837E8 @ 0x1C00837E8 (sub_1C00837E8.c)
 */

void **__fastcall CMutex::`scalar deleting destructor'(void **this)
{
  CMutex::~CMutex(this);
  sub_1C00837E8(this);
  return this;
}
