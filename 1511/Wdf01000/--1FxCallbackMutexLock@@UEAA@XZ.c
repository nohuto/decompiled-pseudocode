/*
 * XREFs of ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C003181C
 * Callers:
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C001FEB0 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0069A70 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C00820CC (--1FxIoQueue@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0059930 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackMutexLock::~FxCallbackMutexLock(FxCallbackMutexLock *this, unsigned int a2)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackMutexLock_vtbl *)&FxCallbackMutexLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier, a2);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackMutexLock_vtbl *)&FxCallbackLock::`vftable';
}
