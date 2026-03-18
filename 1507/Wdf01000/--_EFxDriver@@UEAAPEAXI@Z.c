/*
 * XREFs of ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0010B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C000A8CC (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C00157EC (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

FxDriver *__fastcall FxDriver::`vector deleting destructor'(FxDriver *this, char a2)
{
  unsigned int v4; // edx
  unsigned __int64 v5; // rdi
  unsigned __int16 *Buffer; // rcx
  FxDisposeList *m_DisposeList; // rcx
  FxDriver *v8; // rcx
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
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
  {
    v8 = (FxDriver *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v8 = this;
    FxPoolFree(v8);
  }
  return this;
}
