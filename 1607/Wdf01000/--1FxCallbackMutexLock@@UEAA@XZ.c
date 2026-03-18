/*
 * XREFs of ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C001D0AC
 * Callers:
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0020E90 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0077290 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C009003C (--1FxIoQueue@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
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
