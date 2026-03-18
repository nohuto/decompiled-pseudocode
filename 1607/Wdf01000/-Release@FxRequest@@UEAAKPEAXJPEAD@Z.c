/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00073B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, void *Tag, __int64 Line, char *File)
{
  unsigned __int8 m_Reserved; // r14
  bool v6; // si
  unsigned __int8 m_CanComplete; // r13
  unsigned __int32 v8; // ebp
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v11; // r12
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v14)(unsigned __int64, void *, __int64, char *); // rax
  void (__fastcall *v15)(unsigned __int64, void *, __int64, char *); // rax
  unsigned __int16 v16; // ax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  void (__fastcall *v19)(FxRequestFromLookaside *); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // r15
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v26; // r15
  __int64 v27; // rax
  _SLIST_ENTRY *v28; // r15
  MxLock *p_m_SpinLock; // rdi
  void (__fastcall *v30)(FxObject *); // rdx
  void (__fastcall *v31)(FxObject *); // rax
  void *m_Lock; // rcx
  void *v33; // rcx
  FxRequest *v34; // rax
  FX_POOL_TRACKER *v35; // rdi
  _MDL *v36; // rcx
  FxRequestContext *v37; // rcx
  _IRP *v38; // rdi
  FxRequestTimer *v39; // rcx
  FxRequest *v40; // rcx
  _SLIST_ENTRY *m_InternalContext; // r15
  _LIST_ENTRY *Blink; // rcx
  FxRequestContext *v43; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FX_POOL_HEADER *v45; // rax
  FxVerifierLock *v46; // rcx
  FxRequestContext *v47; // rcx
  FxVerifierLock *v48; // rcx
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *v51; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v53; // rcx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  m_Reserved = this->m_Reserved;
  v6 = this->m_IrpAllocation == 0;
  m_CanComplete = this->m_CanComplete;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ForwardProgressList.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v8 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v8 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
      goto LABEL_3;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      v11 = this[-1].m_ForwardProgressList.Blink;
      if ( v11 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_ForwardProgressList.Blink);
    }
    else
    {
      v11 = 0LL;
    }
    m_ObjectSize = this->m_ObjectSize;
    if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
    {
      for ( i = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
      {
        v14 = (void (__fastcall *)(unsigned __int64, void *, __int64, char *))i[2];
        if ( v14 )
        {
          v14((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
          i[2] = 0LL;
        }
        v15 = (void (__fastcall *)(unsigned __int64, void *, __int64, char *))i[3];
        if ( v15 )
        {
          v15((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
          i[3] = 0LL;
        }
      }
      v16 = this->m_ObjectSize;
      LOBYTE(Tag) = 1;
      if ( v16 )
      {
        v17 = (FxRequest_vtbl **)((char *)&this->__vftable + v16);
        if ( v17 )
        {
          do
          {
            v18 = (_QWORD *)v17[1];
            if ( !(_BYTE)Tag )
              FxPoolFree(v17);
            LOBYTE(Tag) = 0;
            v17 = v18;
          }
          while ( v18 );
        }
      }
    }
    if ( v11 )
    {
      this[-1].m_ForwardProgressList.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v11, (unsigned int)Tag);
    }
    v19 = FxRequestFromLookaside::SelfDestruct;
    SelfDestruct = this->SelfDestruct;
    if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
    {
      m_AllocatedMdl = this->m_AllocatedMdl;
      m_DeviceBase = this->m_DeviceBase;
      this->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
      if ( m_AllocatedMdl )
      {
        if ( this->m_Globals->FxVerifierOn )
          FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
        else
          IoFreeMdl(m_AllocatedMdl);
      }
      m_RequestContext = this->m_RequestContext;
      m_Irp = this->m_Irp.m_Irp;
      if ( m_RequestContext )
      {
        if ( m_Irp )
          ((void (__fastcall *)(FxRequestContext *, FxRequest *, __int64, char *))m_RequestContext->ReleaseAndRestore)(
            m_RequestContext,
            this,
            Line,
            File);
        v43 = this->m_RequestContext;
        if ( v43 )
          ((void (__fastcall *)(FxRequestContext *, __int64, __int64, char *))v43->~FxRequestContext)(
            v43,
            1LL,
            Line,
            File);
      }
      if ( m_Irp && this->m_IrpAllocation == 1 )
        IoFreeIrp(this->m_Irp.m_Irp);
      m_Timer = this->m_Timer;
      if ( m_Timer )
        FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v19);
      this->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
        if ( m_ForwardProgressQueue )
        {
          FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, (unsigned int)v19);
          this[-1].m_ForwardProgressQueue = 0LL;
        }
      }
      this->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(this);
      if ( this->m_ForwardRequestToParent )
      {
        v45 = FxObject::_CleanupPointer(this->m_Globals, this);
        ExFreePoolWithTag(v45->Base, 0);
      }
      else
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          v26 = (FxRequest *)((char *)this - 32);
        else
          v26 = this;
        if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
          FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v26[-1].m_InternalContext);
        v27 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
        if ( v27 && *(_WORD *)(v27 + 8) == 4354 && *(_BYTE *)(v27 + 1651) )
        {
          m_InternalContext = (_SLIST_ENTRY *)v26[-1].m_InternalContext;
          if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
            (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
          else
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
        }
        else
        {
          v28 = (_SLIST_ENTRY *)v26[-1].m_InternalContext;
          p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
          ++HIDWORD(p_m_SpinLock[1].m_Lock);
          if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
          {
            ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
            ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v28);
          }
          else
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v28);
          }
        }
      }
      goto LABEL_3;
    }
    v30 = FxObject::SelfDestruct;
    if ( SelfDestruct != FxObject::SelfDestruct )
    {
      ((void (__fastcall *)(FxRequest *, void (__fastcall *)(FxObject *), __int64, char *))SelfDestruct)(
        this,
        FxObject::SelfDestruct,
        Line,
        File);
      goto LABEL_3;
    }
    v31 = this->~FxObject;
    if ( (char *)v31 == (char *)FxRegKey::`scalar deleting destructor' )
    {
      this->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
      m_Lock = (void *)this->m_NPLock.m_Lock;
      if ( m_Lock )
      {
        ZwClose(m_Lock);
        this->m_NPLock.m_Lock = 0LL;
      }
      v33 = *(void **)&this->m_NPLock.m_DbgFlagIsInitialized;
      this->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
      if ( v33 )
      {
        FxPoolFree(v33);
        *(_QWORD *)&this->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(this);
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        v34 = (FxRequest *)((char *)this - 32);
      else
        v34 = this;
      if ( !v34 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    }
    else
    {
      if ( (char *)v31 != (char *)FxFileObject::`vector deleting destructor' )
      {
        if ( (char *)v31 == (char *)FxRequest::`scalar deleting destructor' )
        {
          this->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
          v36 = this->m_AllocatedMdl;
          if ( v36 )
          {
            if ( this->m_Globals->FxVerifierOn )
              FxMdlFreeDebug(this->m_Globals, this->m_AllocatedMdl);
            else
              IoFreeMdl(v36);
          }
          v37 = this->m_RequestContext;
          v38 = this->m_Irp.m_Irp;
          if ( v37 )
          {
            if ( v38 )
              ((void (__fastcall *)(FxRequestContext *, FxRequest *, __int64, char *))v37->ReleaseAndRestore)(
                v37,
                this,
                Line,
                File);
            v47 = this->m_RequestContext;
            if ( v47 )
              ((void (__fastcall *)(FxRequestContext *, __int64, __int64, char *))v47->~FxRequestContext)(
                v47,
                1LL,
                Line,
                File);
          }
          if ( v38 && this->m_IrpAllocation == 1 )
            IoFreeIrp(this->m_Irp.m_Irp);
          v39 = this->m_Timer;
          if ( v39 )
            FxRequestTimer::`scalar deleting destructor'(v39, (unsigned int)v30);
          this->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          {
            v48 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
            if ( v48 )
            {
              FxVerifierLock::`scalar deleting destructor'(v48, (unsigned int)v30);
              this[-1].m_ForwardProgressQueue = 0LL;
            }
          }
          this->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(this);
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            v40 = (FxRequest *)((char *)this - 32);
          else
            v40 = this;
          FxPoolFree(v40);
        }
        else
        {
          ((void (__fastcall *)(FxRequest *, __int64, __int64, char *))v31)(this, 1LL, Line, File);
        }
        goto LABEL_3;
      }
      this->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
      this->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        v46 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
        if ( v46 )
        {
          FxVerifierLock::`scalar deleting destructor'(v46, (unsigned int)FxObject::SelfDestruct);
          this[-1].m_ForwardProgressQueue = 0LL;
        }
      }
      this->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(this);
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        v34 = (FxRequest *)((char *)this - 32);
      else
        v34 = this;
      if ( !v34 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    }
    if ( ((unsigned __int16)v34 & 0xFFF) != 0 )
    {
      v35 = (FX_POOL_TRACKER *)v34[-1].m_InternalContext;
      if ( *(_BYTE *)(*(_QWORD *)&v34[-1].m_Presented + 264LL) )
      {
        if ( FxIsPagedPoolType(v35->PoolType) )
          FxPoolRemovePagedAllocateTracker(v35);
        else
          FxPoolRemoveNonPagedAllocateTracker(v35);
        memset(v35, 0, v35->Size + 64);
      }
      ExFreePoolWithTag(v35, 0);
    }
    else
    {
      ExFreePoolWithTag(v34, 0);
    }
  }
LABEL_3:
  if ( m_Reserved && v8 == 1 && this->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
  }
  else if ( !v6 && m_CanComplete && v8 == 1 && this->m_Completed )
  {
    m_CompletionState = this->m_CompletionState;
    m_IoQueue = this->m_IoQueue;
    v51 = this->m_Irp.m_Irp;
    m_PriorityBoost = this->m_PriorityBoost;
    this->m_CompletionState = 0;
    this->m_IoQueue = 0LL;
    this->m_Irp.m_Irp = 0LL;
    IofCompleteRequest(v51, m_PriorityBoost);
    FxRequest::PostProcessCompletionForDriverRequest(v53, m_CompletionState, m_IoQueue);
  }
  return v8;
}
