/*
 * XREFs of ?GetCallbackLockPtr@FxDeviceBase@@UEAAPEAVFxCallbackLock@@PEAPEAVFxObject@@@Z @ 0x1C0020C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxCallbackLock *__fastcall FxDeviceBase::GetCallbackLockPtr(FxDeviceBase *this, FxObject **LockObject)
{
  if ( LockObject )
    *LockObject = (FxObject *)this->m_SpinLock.m_Lock;
  return *(FxCallbackLock **)&this->m_SpinLock.m_DbgFlagIsInitialized;
}
