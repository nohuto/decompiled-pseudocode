/*
 * XREFs of ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0096194
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C00960C0 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009A3F8 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C0085958 (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxRelatedDeviceList *__fastcall FxRelatedDeviceList::`scalar deleting destructor'(FxRelatedDeviceList *this)
{
  this->m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(this);
  FxPoolFree(this);
  return this;
}
