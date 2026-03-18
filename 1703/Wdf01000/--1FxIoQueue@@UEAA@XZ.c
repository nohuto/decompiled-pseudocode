/*
 * XREFs of ??1FxIoQueue@@UEAA@XZ @ 0x1C00940B4
 * Callers:
 *     ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1C0094110 (--_EFxIoQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C007AF44 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C007AF80 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

void __fastcall FxIoQueue::~FxIoQueue(FxIoQueue *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  unsigned int v4; // r8d

  v1 = this->m_PkgIo == 0LL;
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxIoQueue::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxIoQueue::`vftable'{for `IFxHasCallbacks'};
  if ( !v1 )
    this->m_PkgIo = 0LL;
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxCallbackSpinLock::~FxCallbackSpinLock(&this->m_CallbackSpinLock);
  FxNonPagedObject::~FxNonPagedObject(this, v3, v4);
}
