/*
 * XREFs of ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C00087E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxObject::SelfDestruct(FxObject *this, unsigned int a2)
{
  FxObject *v2; // rbx
  void (__fastcall *v3)(FxObject *); // rax
  void *v4; // rcx
  FxObject_vtbl *v5; // rcx
  FX_POOL_TRACKER *Next; // rdi
  _MDL *Flink; // rcx
  FxObject *m_ParentObject; // rcx
  __int64 v9; // rdi
  FxRequestTimer *v10; // rcx
  _LIST_ENTRY *Blink; // rcx
  FxObject *v12; // rcx
  FxVerifierLock *v13; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !this )
    return;
  v2 = this;
  v3 = this->~FxObject;
  if ( (char *)v3 == (char *)FxRegKey::`scalar deleting destructor' )
  {
    v4 = *(void **)&this[1].m_Type;
    v2->__vftable = (FxObject_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
    if ( v4 )
    {
      ZwClose(v4);
      *(_QWORD *)&v2[1].m_Type = 0LL;
    }
    v5 = v2[1].__vftable;
    v2->__vftable = (FxObject_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
    if ( v5 )
    {
      FxPoolFree(v5);
      v2[1].__vftable = 0LL;
    }
    FxObject::~FxObject(v2);
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      v2 = (FxObject *)((char *)v2 - 32);
    if ( !v2 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
    {
LABEL_11:
      Next = (FX_POOL_TRACKER *)v2[-1].m_DisposeSingleEntry.Next;
      if ( LOBYTE(v2[-1].m_DeviceBase[1].m_ParentObject) )
      {
        if ( FxIsPagedPoolType(Next->PoolType) )
          FxPoolRemovePagedAllocateTracker(Next);
        else
          FxPoolRemoveNonPagedAllocateTracker(Next);
        memset(Next, 0, Next->Size + 64);
      }
      ExFreePoolWithTag(Next, 0);
      return;
    }
LABEL_40:
    ExFreePoolWithTag(v2, 0);
    return;
  }
  if ( (char *)v3 == (char *)FxFileObject::`vector deleting destructor' )
  {
    this[1].m_Globals = (_FX_DRIVER_GLOBALS *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
    this->__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      Blink = this[-1].m_ChildEntry.Blink;
      if ( Blink )
      {
        FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
        v2[-1].m_ChildEntry.Blink = 0LL;
      }
    }
    LOBYTE(v2[1].__vftable) = 0;
    FxObject::~FxObject(v2);
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      v2 = (FxObject *)((char *)v2 - 32);
    if ( !v2 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
      goto LABEL_11;
    goto LABEL_40;
  }
  if ( (char *)v3 == (char *)FxRequest::`scalar deleting destructor' )
  {
    Flink = (_MDL *)this[2].m_ChildListHead.Flink;
    v2->__vftable = (FxObject_vtbl *)&FxRequestBase::`vftable';
    if ( Flink )
    {
      if ( v2->m_Globals->FxVerifierOn )
        FxMdlFreeDebug(v2->m_Globals, Flink);
      else
        IoFreeMdl(Flink);
    }
    m_ParentObject = v2[1].m_ParentObject;
    v9 = *(_QWORD *)&v2[1].m_SpinLock.m_DbgFlagIsInitialized;
    if ( m_ParentObject )
    {
      if ( v9 )
        ((void (__fastcall *)(FxObject *, FxObject *))m_ParentObject->AddRefOverride)(m_ParentObject, v2);
      v12 = v2[1].m_ParentObject;
      if ( v12 )
        ((void (__fastcall *)(FxObject *, __int64))v12->SelfDestruct)(v12, 1LL);
    }
    if ( v9 && BYTE5(v2[2].__vftable) == 1 )
      IoFreeIrp(*(PIRP *)&v2[1].m_SpinLock.m_DbgFlagIsInitialized);
    v10 = (FxRequestTimer *)v2[1].m_ChildEntry.Flink;
    if ( v10 )
      FxRequestTimer::`scalar deleting destructor'(v10, a2);
    v2->__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
    {
      v13 = (FxVerifierLock *)v2[-1].m_ChildEntry.Blink;
      if ( v13 )
      {
        FxVerifierLock::`scalar deleting destructor'(v13, a2);
        v2[-1].m_ChildEntry.Blink = 0LL;
      }
    }
    LOBYTE(v2[1].__vftable) = 0;
    FxObject::~FxObject(v2);
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      v2 = (FxObject *)((char *)v2 - 32);
    FxPoolFree(v2);
  }
  else
  {
    ((void (__fastcall *)(FxObject *, __int64))v3)(this, 1LL);
  }
}
