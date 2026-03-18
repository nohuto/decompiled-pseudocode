/*
 * XREFs of ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C00028C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

FxFileObject *__fastcall FxFileObject::`vector deleting destructor'(FxFileObject *this, char a2)
{
  FX_POOL_TRACKER *p_m_FileObject; // rax
  FX_POOL_TRACKER *CallersAddress; // rdi
  FX_POOL_TRACKER *v6; // rcx
  FxVerifierLock *m_PkgContext; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
  this->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_PkgContext = (FxVerifierLock *)this[-1].m_PkgContext;
    if ( m_PkgContext )
    {
      FxVerifierLock::`scalar deleting destructor'(m_PkgContext, a2);
      this[-1].m_PkgContext = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_m_FileObject = (FX_POOL_TRACKER *)&this[-1].m_FileObject;
    else
      p_m_FileObject = (FX_POOL_TRACKER *)this;
    if ( !p_m_FileObject )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_FileObject & 0xFFF) != 0 )
    {
      CallersAddress = (FX_POOL_TRACKER *)p_m_FileObject[-1].CallersAddress;
      if ( *(_BYTE *)(*((_QWORD *)&p_m_FileObject[-1].CallersAddress + 1) + 264LL) )
      {
        if ( FxIsPagedPoolType(CallersAddress->PoolType) )
          FxPoolRemovePagedAllocateTracker(CallersAddress);
        else
          FxPoolRemoveNonPagedAllocateTracker(CallersAddress);
        memset(CallersAddress, 0, CallersAddress->Size + 64);
      }
      v6 = CallersAddress;
    }
    else
    {
      v6 = p_m_FileObject;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return this;
}
