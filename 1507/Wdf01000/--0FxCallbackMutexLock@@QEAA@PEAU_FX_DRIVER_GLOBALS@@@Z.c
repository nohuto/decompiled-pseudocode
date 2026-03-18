/*
 * XREFs of ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000A76C
 * Callers:
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000F93C (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCallbackMutexLock::FxCallbackMutexLock(
        FxCallbackMutexLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  this->m_Globals = FxDriverGlobals;
  this->m_OwnerThread = 0LL;
  this->m_RecursionCount = 0;
  this->m_Verifier = 0LL;
  this->__vftable = (FxCallbackMutexLock_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Contention;
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->m_Lock.m_Lock.Owner = 0LL;
  this->m_Lock.m_Lock.Contention = 0;
  this->m_Lock.m_Lock.Count = 1;
  KeInitializeEvent(&this->m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_Lock.m_Lock.Owner = 0LL;
  this->m_Lock.m_Lock.Contention = 0;
  this->m_Lock.m_Lock.Count = 1;
  KeInitializeEvent(&this->m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_Lock.m_DbgFlagIsInitialized = 1;
}
