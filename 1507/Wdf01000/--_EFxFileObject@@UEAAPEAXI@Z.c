/*
 * XREFs of ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0001F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004A00 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031C70 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

FxFileObject *__fastcall FxFileObject::`vector deleting destructor'(FxFileObject *this, char a2)
{
  _LIST_ENTRY *p_m_FileObject; // rax
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v6; // rcx
  FxVerifierLock *m_PkgContext; // rcx
  unsigned __int8 IsPagedPoolType; // al
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *Blink; // rax
  KIRQL v13; // al
  _LIST_ENTRY *v14; // rdx
  _LIST_ENTRY *v15; // rcx
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
      p_m_FileObject = (_LIST_ENTRY *)&this[-1].m_FileObject;
    else
      p_m_FileObject = (_LIST_ENTRY *)this;
    if ( !p_m_FileObject )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_FileObject & 0xFFF) != 0 )
    {
      Flink = p_m_FileObject[-1].Flink;
      if ( LOBYTE(p_m_FileObject[-1].Blink[16].Blink) )
      {
        IsPagedPoolType = FxIsPagedPoolType((_POOL_TYPE)Flink[2].Blink);
        v10 = Flink[1].Flink;
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)&v10[2].Blink);
          v11 = Flink->Flink;
          Blink = Flink->Blink;
          if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
            __fastfail(3u);
          Blink->Flink = v11;
          v11->Blink = Blink;
          Flink[1].Flink[7].Blink = (_LIST_ENTRY *)((char *)Flink[1].Flink[7].Blink - (unsigned __int64)Flink[2].Flink);
          --HIDWORD(Flink[1].Flink[8].Flink);
          ExReleaseFastMutex((PFAST_MUTEX)&Flink[1].Flink[2].Blink);
        }
        else
        {
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v10->Blink);
          v14 = Flink->Flink;
          v15 = Flink->Blink;
          if ( Flink->Flink->Blink != Flink || v15->Flink != Flink )
            __fastfail(3u);
          v15->Flink = v14;
          v14->Blink = v15;
          Flink[1].Flink[7].Flink = (_LIST_ENTRY *)((char *)Flink[1].Flink[7].Flink - (unsigned __int64)Flink[2].Flink);
          --LODWORD(Flink[1].Flink[8].Flink);
          KeReleaseSpinLock((PKSPIN_LOCK)&Flink[1].Flink->Blink, v13);
        }
        memset(Flink, 0, (size_t)&Flink[2].Flink[4]);
      }
      v6 = Flink;
    }
    else
    {
      v6 = p_m_FileObject;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return this;
}
