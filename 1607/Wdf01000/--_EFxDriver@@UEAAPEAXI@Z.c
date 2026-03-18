/*
 * XREFs of ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0020E90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0019324 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C001C1D4 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C001D0AC (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

FxDriver *__fastcall FxDriver::`vector deleting destructor'(FxDriver *this, char a2)
{
  unsigned int v4; // edx
  unsigned __int64 v5; // rdi
  wchar_t *Buffer; // rcx
  FxDisposeList *m_DisposeList; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r8d
  FxDriver *v10; // rcx
  const void *_a2; // rax

  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxDriver::`vftable'{for `IFxHasCallbacks'};
  v5 = 0LL;
  if ( !FxObject::IsDisposed(this) )
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x11u, 0xAu, WPP_FxDriver_cpp_Traceguids, this, _a2);
    if ( this->m_ObjectSize )
      v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v5, (unsigned __int64)this);
  }
  Buffer = this->m_RegistryPath.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    m_DisposeList->DeleteObject(m_DisposeList);
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock, v4);
  FxNonPagedObject::~FxNonPagedObject(this, v8, v9);
  if ( (a2 & 1) != 0 )
  {
    v10 = (FxDriver *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v10 = this;
    FxPoolFree(v10);
  }
  return this;
}
