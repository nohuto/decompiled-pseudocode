/*
 * XREFs of ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C000DEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00090B0 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C002E38C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0059930 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C006C92C (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

FxFileObject *__fastcall FxFileObject::`vector deleting destructor'(FxFileObject *this, char a2, unsigned int a3)
{
  FxFileObject *v5; // rax
  FX_POOL_TRACKER *Flink; // rdi
  FX_POOL_TRACKER *v7; // rcx
  FxVerifierLock *m_PkgContext; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxObject::`vftable'.WdfBindInfo;
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
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v5 = (FxFileObject *)((char *)this - 32);
    else
      v5 = this;
    if ( !v5 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v5 & 0xFFF) != 0 )
    {
      Flink = (FX_POOL_TRACKER *)v5[-1].m_Link.Flink;
      if ( LOBYTE(v5[-1].m_Link.Blink[16].Blink) )
      {
        if ( FxIsPagedPoolType(Flink->PoolType) )
          FxPoolRemovePagedAllocateTracker(Flink);
        else
          FxPoolRemoveNonPagedAllocateTracker(Flink);
        memset(Flink, 0, Flink->Size + 64);
      }
      v7 = Flink;
    }
    else
    {
      v7 = (FX_POOL_TRACKER *)v5;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return this;
}
