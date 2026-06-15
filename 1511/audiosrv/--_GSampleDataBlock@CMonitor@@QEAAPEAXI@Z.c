/*
 * XREFs of ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18009675C
 * Callers:
 *     ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x180096478 (--1-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180098DE8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1800996B0 (-Stop@CMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

void **__fastcall CMonitor::SampleDataBlock::`scalar deleting destructor'(void **this)
{
  free(this[3]);
  this[3] = 0LL;
  operator delete(this);
  return this;
}
