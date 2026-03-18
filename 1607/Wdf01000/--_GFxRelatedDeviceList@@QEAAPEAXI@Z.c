/*
 * XREFs of ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0091FFC
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C0091F38 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C008139C (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxRelatedDeviceList *__fastcall FxRelatedDeviceList::`scalar deleting destructor'(FxRelatedDeviceList *this)
{
  this->m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(this);
  FxPoolFree(this);
  return this;
}
