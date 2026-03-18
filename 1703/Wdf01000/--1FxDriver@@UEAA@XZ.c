/*
 * XREFs of ??1FxDriver@@UEAA@XZ @ 0x1C007E220
 * Callers:
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C007E300 (--_EFxDriver@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C007AF44 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C007DB30 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDriver::~FxDriver(FxDriver *this)
{
  unsigned __int64 v2; // rbx
  const void *_a2; // rax
  wchar_t *Buffer; // rcx
  FxDisposeList *m_DisposeList; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r8d

  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedLock.m_Lock;
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead;
  if ( !FxObject::IsDisposed(this) )
  {
    v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x11u, 0xAu, WPP_FxDriver_cpp_Traceguids, this, _a2);
    if ( !this->m_ObjectSize )
      v2 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v2, (unsigned __int64)this);
  }
  Buffer = this->m_RegistryPath.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    m_DisposeList->DeleteObject(m_DisposeList);
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxNonPagedObject::~FxNonPagedObject(this, v6, v7);
}
