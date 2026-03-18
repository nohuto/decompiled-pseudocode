/*
 * XREFs of ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C001FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00058A0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C00232D4 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C003181C (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

FxDriver *__fastcall FxDriver::`vector deleting destructor'(FxDriver *this, char a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int16 *Buffer; // rcx
  FxDisposeList *m_DisposeList; // rcx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  FxDriver *v9; // rcx
  const void *_a2; // rax

  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxDriver::`vftable'{for `IFxHasCallbacks'};
  v4 = 0LL;
  if ( !FxObject::IsDisposed(this) )
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x11u, 0xAu, WPP_FxDriver_cpp_Traceguids, this, _a2);
    if ( this->m_ObjectSize )
      v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v4, (unsigned __int64)this);
  }
  Buffer = this->m_RegistryPath.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    m_DisposeList->DeleteObject(m_DisposeList);
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxNonPagedObject::~FxNonPagedObject(this, v7, v8);
  if ( (a2 & 1) != 0 )
  {
    v9 = (FxDriver *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v9 = this;
    FxPoolFree(v9);
  }
  return this;
}
