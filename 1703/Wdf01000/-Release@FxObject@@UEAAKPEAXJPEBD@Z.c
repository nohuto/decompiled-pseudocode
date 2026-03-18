/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000B310
 * Callers:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C007C580 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

__int64 __fastcall FxObject::Release(FxObject *this, volatile signed __int32 *Tag, __int64 Line, const char *File)
{
  FxObject *v4; // rbx
  unsigned __int32 v5; // edi
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v7; // r15
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rbp
  void (__fastcall *v10)(unsigned __int64, volatile signed __int32 *, __int64, const char *); // rax
  void (__fastcall *v11)(unsigned __int64, volatile signed __int32 *, __int64, const char *); // rax
  unsigned __int16 v12; // ax
  _QWORD *v13; // rcx
  _QWORD *v14; // rbp
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  FxRegKey *(__fastcall *v16)(FxRegKey *, char); // rax
  void *v17; // rcx
  FxObject_vtbl *v18; // rcx
  FX_POOL_TRACKER *Next; // rsi
  _MDL *Flink; // rcx
  FxObject *m_ParentObject; // rcx
  __int64 v23; // rsi
  FxRequestTimer *v24; // rcx
  FxTagTracker *m_Lock; // rcx
  FxObject *v26; // rcx
  FxVerifierLock *v27; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  v4 = this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, (void *)Tag, Line, File, TagRelease, v4->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&v4->m_Refcnt);
  if ( v5 )
    return v5;
  m_ObjectFlags = v4->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
  {
    FxObject::SetObjectStateLocked(v4, FxObjectStateDeferedDestroy);
    FxDisposeList::Add(v4->m_Globals->Driver->m_DisposeList, v4);
    return v5;
  }
  if ( (m_ObjectFlags & 0x80u) != 0 )
  {
    v7 = (FxTagTracker *)v4[-1].m_SpinLock.m_Lock;
    if ( v7 )
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v4[-1].m_SpinLock.m_Lock);
  }
  else
  {
    v7 = 0LL;
  }
  m_ObjectSize = v4->m_ObjectSize;
  if ( m_ObjectSize && (v4->m_ObjectFlags & 8) != 0 )
  {
    for ( i = (FxObject_vtbl **)((char *)&v4->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v10 = (void (__fastcall *)(unsigned __int64, volatile signed __int32 *, __int64, const char *))i[2];
      if ( v10 )
      {
        v10((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
        i[2] = 0LL;
      }
      v11 = (void (__fastcall *)(unsigned __int64, volatile signed __int32 *, __int64, const char *))i[3];
      if ( v11 )
      {
        v11((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
        i[3] = 0LL;
      }
    }
    v12 = v4->m_ObjectSize;
    LOBYTE(Tag) = 1;
    if ( v12 )
    {
      v13 = (FxObject_vtbl **)((char *)&v4->__vftable + v12);
      if ( v13 )
      {
        do
        {
          v14 = (_QWORD *)v13[1];
          if ( !(_BYTE)Tag )
            FxPoolFree(v13);
          LOBYTE(Tag) = 0;
          v13 = v14;
        }
        while ( v14 );
      }
    }
  }
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
  {
    if ( BYTE4(v4[-1].m_ChildEntry.Blink) )
    {
      _InterlockedDecrement(&v4->m_Globals->FxVerifyLeakDetection->ObjectCnt);
      if ( v4->m_Type == 4098
        && _InterlockedExchangeAdd(&v4->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
      {
        Tag = (volatile signed __int32 *)v4->m_Globals->FxVerifyLeakDetection;
        _InterlockedExchangeAdd(Tag + 2, -*((_DWORD *)Tag + 1));
      }
    }
  }
  if ( v7 )
  {
    v4[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::`scalar deleting destructor'(v7, (unsigned int)Tag);
  }
  SelfDestruct = v4->SelfDestruct;
  if ( SelfDestruct != FxObject::SelfDestruct )
  {
    ((void (__fastcall *)(FxObject *, void (__fastcall *)(FxObject *), __int64, const char *))v4->SelfDestruct)(
      v4,
      SelfDestruct,
      Line,
      File);
    return v5;
  }
  v16 = (FxRegKey *(__fastcall *)(FxRegKey *, char))v4->~FxObject;
  if ( v16 == FxRegKey::`scalar deleting destructor' )
  {
    v4->__vftable = (FxObject_vtbl *)FxRegKey::`vftable';
    v17 = *(void **)&v4[1].m_Type;
    if ( v17 )
    {
      ZwClose(v17);
      *(_QWORD *)&v4[1].m_Type = 0LL;
    }
    v18 = v4[1].__vftable;
    v4->__vftable = (FxObject_vtbl *)FxPagedObject::`vftable';
    if ( v18 )
    {
      FxPoolFree(v18);
      v4[1].__vftable = 0LL;
    }
    FxObject::~FxObject(v4);
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      v4 = (FxObject *)((char *)v4 - 48);
    if ( !v4 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
    {
LABEL_34:
      Next = (FX_POOL_TRACKER *)v4[-1].m_DisposeSingleEntry.Next;
      if ( LOBYTE(v4[-1].m_DeviceBase[1].m_ParentObject) )
      {
        if ( FxIsPagedPoolType(Next->PoolType) )
          FxPoolRemovePagedAllocateTracker(Next);
        else
          FxPoolRemoveNonPagedAllocateTracker(Next);
        memset(Next, 0, Next->Size + 64);
      }
      ExFreePoolWithTag(Next, 0);
      return v5;
    }
    goto LABEL_65;
  }
  if ( (char *)v16 == (char *)FxRequest::`scalar deleting destructor' )
  {
    v4->__vftable = (FxObject_vtbl *)FxRequestBase::`vftable';
    Flink = (_MDL *)v4[2].m_ChildListHead.Flink;
    if ( Flink )
    {
      if ( v4->m_Globals->FxVerifierOn )
        FxMdlFreeDebug(v4->m_Globals, (_MDL *)v4[2].m_ChildListHead.Flink);
      else
        IoFreeMdl(Flink);
    }
    m_ParentObject = v4[1].m_ParentObject;
    v23 = *(_QWORD *)&v4[1].m_SpinLock.m_DbgFlagIsInitialized;
    if ( m_ParentObject )
    {
      if ( v23 )
        ((void (__fastcall *)(FxObject *, FxObject *, __int64, const char *))m_ParentObject->AddRefOverride)(
          m_ParentObject,
          v4,
          Line,
          File);
      v26 = v4[1].m_ParentObject;
      if ( v26 )
        ((void (__fastcall *)(FxObject *, __int64, __int64, const char *))v26->SelfDestruct)(v26, 1LL, Line, File);
    }
    if ( v23 && BYTE5(v4[2].__vftable) == 1 )
      IoFreeIrp(*(PIRP *)&v4[1].m_SpinLock.m_DbgFlagIsInitialized);
    v24 = (FxRequestTimer *)v4[1].m_ChildEntry.Flink;
    if ( v24 )
      FxRequestTimer::`scalar deleting destructor'(v24, (unsigned int)SelfDestruct);
    v4->__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    {
      v27 = (FxVerifierLock *)v4[-1].m_ParentObject;
      if ( v27 )
      {
        FxVerifierLock::`scalar deleting destructor'(v27, (unsigned int)SelfDestruct);
        v4[-1].m_ParentObject = 0LL;
      }
    }
    LOBYTE(v4[1].__vftable) = 0;
    FxObject::~FxObject(v4);
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      v4 = (FxObject *)((char *)v4 - 48);
    FxPoolFree(v4);
    return 0LL;
  }
  else
  {
    if ( (char *)v16 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
    {
      v4->__vftable = (FxObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
      v4[1].__vftable = (FxObject_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
      FxObject::~FxObject(v4);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        v4 = (FxObject *)((char *)v4 - 48);
      if ( !v4 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
        goto LABEL_34;
LABEL_65:
      ExFreePoolWithTag(v4, 0);
      return v5;
    }
    ((void (__fastcall *)(FxObject *, __int64, __int64, const char *))v16)(v4, 1LL, Line, File);
    return 0LL;
  }
}
