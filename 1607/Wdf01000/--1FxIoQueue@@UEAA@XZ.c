/*
 * XREFs of ??1FxIoQueue@@UEAA@XZ @ 0x1C009003C
 * Callers:
 *     ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1C00900A0 (--_EFxIoQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C001D0AC (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C00771AC (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

void __fastcall FxIoQueue::~FxIoQueue(FxIoQueue *this, unsigned int a2)
{
  bool v2; // zf
  unsigned int v4; // edx
  unsigned int v5; // r8d

  v2 = this->m_PkgIo == 0LL;
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxIoQueue::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxIoQueue::`vftable'{for `IFxHasCallbacks'};
  if ( !v2 )
    this->m_PkgIo = 0LL;
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock, a2);
  FxCallbackSpinLock::~FxCallbackSpinLock(&this->m_CallbackSpinLock);
  FxNonPagedObject::~FxNonPagedObject(this, v4, v5);
}
