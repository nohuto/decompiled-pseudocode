/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0008F40
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C000E720 (-Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007DF48 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxObject::ProcessDestroy(FxObject *this, unsigned int a2, unsigned int a3)
{
  FxRegKey *v3; // rbx
  _LIST_ENTRY *Flink; // rbp
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v7)(unsigned __int64); // rax
  void (__fastcall *v8)(unsigned __int64); // rax
  unsigned __int16 v9; // ax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  void (__fastcall *SelfDestruct)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v13)(FxRegKey *, char); // rax
  void *m_Key; // rcx
  FxObject_vtbl *m_Lock; // rcx
  FX_POOL_TRACKER *v16; // rdi
  _MDL *v17; // rcx
  FxObject *Blink; // rcx
  __int64 v19; // rdi
  FxRequestTimer *v20; // rcx
  FxVerifierLock *v21; // rcx
  FxObject *v22; // rcx
  FxVerifierLock *v23; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  v3 = (FxRegKey *)this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_ChildEntry.Flink);
  }
  else
  {
    Flink = 0LL;
  }
  m_ObjectSize = v3->m_ObjectSize;
  if ( m_ObjectSize && (v3->m_ObjectFlags & 8) != 0 )
  {
    for ( i = (FxRegKey_vtbl **)((char *)&v3->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v7 = (void (__fastcall *)(unsigned __int64))i[2];
      if ( v7 )
      {
        v7((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[2] = 0LL;
      }
      v8 = (void (__fastcall *)(unsigned __int64))i[3];
      if ( v8 )
      {
        v8((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[3] = 0LL;
      }
    }
    v9 = v3->m_ObjectSize;
    LOBYTE(a2) = 1;
    if ( v9 )
    {
      v10 = (FxRegKey_vtbl **)((char *)&v3->__vftable + v9);
      if ( v10 )
      {
        do
        {
          v11 = (_QWORD *)v10[1];
          if ( !(_BYTE)a2 )
            FxPoolFree(v10);
          LOBYTE(a2) = 0;
          v10 = v11;
        }
        while ( v11 );
      }
    }
  }
  if ( Flink )
  {
    v3[-1].m_DeviceBase = 0LL;
    FxTagTracker::`scalar deleting destructor'((FxTagTracker *)Flink, a2);
  }
  SelfDestruct = (void (__fastcall *)(FxObject *, unsigned int))v3->SelfDestruct;
  if ( SelfDestruct != FxObject::SelfDestruct )
  {
    v3->SelfDestruct(v3);
    return;
  }
  v13 = (FxRegKey *(__fastcall *)(FxRegKey *, char))v3->~FxObject;
  if ( v13 == FxRegKey::`scalar deleting destructor' )
  {
    v3->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
    m_Key = v3->m_Key;
    if ( m_Key )
    {
      ZwClose(m_Key);
      v3->m_Key = 0LL;
    }
    m_Lock = (FxObject_vtbl *)v3->m_Lock;
    v3->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
    if ( m_Lock )
    {
      FxPoolFree(m_Lock);
      v3->m_Lock = 0LL;
    }
    FxObject::~FxObject(v3, (unsigned int)SelfDestruct, a3);
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      v3 = (FxRegKey *)((char *)v3 - 32);
    if ( !v3 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v3 & 0xFFF) != 0 )
    {
LABEL_28:
      v16 = (FX_POOL_TRACKER *)v3[-1].m_Key;
      if ( v3[-1].m_Globals->FxPoolTrackingOn )
      {
        if ( FxIsPagedPoolType(v16->PoolType) )
          FxPoolRemovePagedAllocateTracker(v16);
        else
          FxPoolRemoveNonPagedAllocateTracker(v16);
        memset(v16, 0, v16->Size + 64);
      }
      ExFreePoolWithTag(v16, 0);
      return;
    }
LABEL_53:
    ExFreePoolWithTag(v3, 0);
    return;
  }
  if ( (char *)v13 == (char *)FxFileObject::`vector deleting destructor' )
  {
    v3->m_Globals = (_FX_DRIVER_GLOBALS *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
    v3->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
    {
      v21 = (FxVerifierLock *)v3[-1].m_Lock;
      if ( v21 )
      {
        FxVerifierLock::`scalar deleting destructor'(v21, (unsigned int)SelfDestruct);
        v3[-1].m_Lock = 0LL;
      }
    }
    LOBYTE(v3->m_Lock) = 0;
    FxObject::~FxObject(v3, (unsigned int)SelfDestruct, a3);
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      v3 = (FxRegKey *)((char *)v3 - 32);
    if ( !v3 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v3 & 0xFFF) != 0 )
      goto LABEL_28;
    goto LABEL_53;
  }
  if ( (char *)v13 == (char *)FxRequest::`scalar deleting destructor' )
  {
    v17 = (_MDL *)v3[1].m_Key;
    v3->__vftable = (FxRegKey_vtbl *)&FxRequestBase::`vftable';
    if ( v17 )
    {
      if ( v3->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
        FxMdlFreeDebug(v3->FxPagedObject::FxObject::m_Globals, v17);
      else
        IoFreeMdl(v17);
    }
    Blink = (FxObject *)v3[1].m_ChildListHead.Blink;
    v19 = *(_QWORD *)&v3[1].m_ObjectFlags;
    if ( Blink )
    {
      if ( v19 )
        ((void (__fastcall *)(FxObject *, FxRegKey *))Blink->AddRefOverride)(Blink, v3);
      v22 = (FxObject *)v3[1].m_ChildListHead.Blink;
      if ( v22 )
        ((void (__fastcall *)(FxObject *, __int64))v22->SelfDestruct)(v22, 1LL);
    }
    if ( v19 && BYTE5(v3[1].m_ChildEntry.Blink) == 1 )
      IoFreeIrp(*(PIRP *)&v3[1].m_ObjectFlags);
    v20 = *(FxRequestTimer **)&v3[1].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v20 )
      FxRequestTimer::`scalar deleting destructor'(v20, (unsigned int)SelfDestruct);
    v3->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
    {
      v23 = (FxVerifierLock *)v3[-1].m_Lock;
      if ( v23 )
      {
        FxVerifierLock::`scalar deleting destructor'(v23, (unsigned int)SelfDestruct);
        v3[-1].m_Lock = 0LL;
      }
    }
    LOBYTE(v3->m_Lock) = 0;
    FxObject::~FxObject(v3, (unsigned int)SelfDestruct, a3);
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      v3 = (FxRegKey *)((char *)v3 - 32);
    FxPoolFree(v3);
  }
  else
  {
    v13(v3, 1);
  }
}
