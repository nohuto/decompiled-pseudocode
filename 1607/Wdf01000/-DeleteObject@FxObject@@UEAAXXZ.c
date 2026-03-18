/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004990 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0020F40 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0062670 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C0079A30 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C009B090 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008E30 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0008F40 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00140F4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C001C048 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001C214 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     FxFreeToNPagedLookasideListNoTracking @ 0x1C0038660 (FxFreeToNPagedLookasideListNoTracking.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003A718 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003A78C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003B6E0 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003BE40 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  FxRequest *_a1; // rbx
  KIRQL v2; // al
  KIRQL v3; // bp
  int m_ObjectState; // eax
  FxObject *v5; // rdi
  KIRQL v6; // r15
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  bool v11; // zf
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v14; // rsi
  __int64 v15; // rdx
  __int64 (__fastcall *Release)(FxObject *, void *, __int64, char *); // rax
  unsigned __int16 v17; // cx
  FxTagTracker *v18; // rbp
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v21)(unsigned __int64); // rax
  void (__fastcall *v22)(unsigned __int64); // rax
  unsigned __int16 v23; // ax
  char v24; // dl
  _QWORD *v25; // rcx
  _QWORD *v26; // rdi
  void (__fastcall *v27)(FxObject *); // rax
  void *m_Lock; // rcx
  FxObject_vtbl *v29; // rcx
  FX_POOL_TRACKER *m_InternalContext; // rdi
  FX_POOL_TRACKER *v31; // rcx
  unsigned __int8 m_Reserved; // bp
  bool v33; // si
  unsigned __int8 m_CanComplete; // r15
  signed __int32 v35; // edi
  unsigned __int16 v36; // ax
  _MDL *m_AllocatedMdl; // rdx
  FxObject *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  unsigned __int16 v41; // cx
  FxTagTracker *v42; // r8
  unsigned __int16 v43; // cx
  _QWORD *v44; // r14
  void (__fastcall *v45)(unsigned __int64, __int64, FxTagTracker *); // rax
  void (__fastcall *v46)(unsigned __int64, __int64, FxTagTracker *); // rax
  unsigned __int16 v47; // ax
  char v48; // dl
  _QWORD *v49; // rcx
  _QWORD *v50; // r14
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *v52; // rdx
  FxDeviceBase *m_DeviceBase; // r14
  FxObject *v54; // rcx
  _IRP *v55; // r13
  FxRequestTimer *v56; // rcx
  FxRequest *v57; // r13
  __int64 v58; // rax
  _SLIST_ENTRY *v59; // r13
  MxLock *p_m_SpinLock; // r14
  unsigned __int64 v61; // rbp
  KIRQL v62; // al
  KIRQL v63; // r15
  __int16 v64; // cx
  unsigned __int8 v65; // al
  void (__fastcall *v66)(FxObject *); // rax
  void *v67; // rcx
  FxObject_vtbl *v68; // rcx
  _LIST_ENTRY *p_Blink; // rax
  FX_POOL_TRACKER *v70; // r14
  FxObject *m_ParentObject; // rcx
  _MDL *v72; // rdx
  FxObject *v73; // rcx
  _IRP *v74; // r14
  FxRequestTimer *v75; // rcx
  _LIST_ENTRY *v76; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v79; // r10
  const void *v80; // rax
  _FX_DRIVER_GLOBALS *v81; // rcx
  const void *v82; // rax
  _FX_DRIVER_GLOBALS *v83; // r10
  const void *v84; // rcx
  KIRQL v85; // di
  _FX_DRIVER_GLOBALS *v86; // r10
  const void *v87; // rcx
  FxTagTracker *v88; // rcx
  FxVerifierLock *v89; // rcx
  FxObject *v90; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FxTagTracker *v92; // rcx
  FxObject *v93; // rcx
  FxVerifierLock *v94; // rcx
  FX_POOL_HEADER *v95; // rax
  FxVerifierLock *v96; // rcx
  FxObject *v97; // rcx
  FxVerifierLock *v98; // rcx
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *v101; // rcx
  CCHAR m_PriorityBoost; // dl
  FxTagTracker *v103; // rcx
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxTagTracker *v105; // [rsp+80h] [rbp+8h]

  _a1 = (FxRequest *)this;
  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a1->m_ObjectFlags |= 4u;
  v3 = v2;
  m_ObjectState = _a1->m_ObjectState;
  if ( m_ObjectState != 1 )
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v3);
      return;
    }
    m_ParentObject = _a1->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, _a1) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v3);
        return;
      }
      _a1->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(_a1, v3, 1u);
    return;
  }
  v5 = _a1->m_ParentObject;
  if ( v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&v5->m_SpinLock.m_Lock);
    if ( v5->m_ObjectState != 1 )
    {
      FxObject::TraceDroppedEvent(v5, FxObjectDroppedEventRemoveChildObjectInternal);
      KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v6);
      FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForEarlyDispose);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v3);
      return;
    }
    Flink = _a1->m_ChildEntry.Flink;
    p_m_ChildEntry = &_a1->m_ChildEntry;
    Blink = _a1->m_ChildEntry.Blink;
    if ( Flink->Blink != &_a1->m_ChildEntry || Blink->Flink != p_m_ChildEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    _a1->m_ChildEntry.Blink = &_a1->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v6);
    _a1->m_ParentObject = 0LL;
  }
  m_ObjectFlags = _a1->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v3 )
    goto LABEL_196;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = _a1->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( _a1->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a1->m_ObjectState, 9u);
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Presented) - 16) = 9;
  }
  v11 = (_a1->m_ObjectFlags & 0x20) == 0;
  _a1->m_ObjectState = 9;
  if ( !v11 )
  {
    if ( v3 )
      goto LABEL_196;
  }
  v12 = _a1->m_ChildListHead.Flink;
  p_m_ChildListHead = &_a1->m_ChildListHead;
  if ( v12 != &_a1->m_ChildListHead )
  {
    while ( !v3 || ((__int64)v12[-3].Flink & 0x10) == 0 )
    {
      v12 = v12->Flink;
      if ( v12 == p_m_ChildListHead )
        goto LABEL_13;
    }
LABEL_196:
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v3);
    return;
  }
LABEL_13:
  KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v3);
  v14 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_14:
    if ( ((_a1->m_ObjectFlags & 0x800) == 0 || _a1->Dispose(_a1)) && (_a1->m_ObjectFlags & 0x400) != 0 )
      FxObject::CallCleanupCallbacks(_a1);
    if ( (_a1->m_ObjectFlags & 0x200) != 0 )
    {
      v86 = _a1->m_Globals;
      if ( v86->FxVerboseOn )
      {
        if ( _a1->m_ObjectSize )
          v87 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v87 = 0LL;
        WPP_IFR_SF_qqLL(v86, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, v87, _a1->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Presented) - 16) = 10;
    }
    _a1->m_ObjectState = 10;
    FxObject::DestroyChildren(_a1);
    Release = (__int64 (__fastcall *)(FxObject *, void *, __int64, char *))_a1->Release;
    if ( Release == FxObject::Release )
    {
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v88 = (FxTagTracker *)_a1[-1].m_ForwardProgressList.Blink;
        if ( v88 )
          FxTagTracker::UpdateTagHistory(
            v88,
            0LL,
            1215,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) != 1 )
        return;
      v17 = _a1->m_ObjectFlags;
      if ( (v17 & 0x20) == 0 && ((v17 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        if ( (v17 & 0x80u) != 0 )
        {
          v18 = (FxTagTracker *)_a1[-1].m_ForwardProgressList.Blink;
          if ( v18 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_ForwardProgressList.Blink);
        }
        else
        {
          v18 = 0LL;
        }
        m_ObjectSize = _a1->m_ObjectSize;
        if ( m_ObjectSize && (_a1->m_ObjectFlags & 8) != 0 )
        {
          for ( i = (FxRequest_vtbl **)((char *)&_a1->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
          {
            v21 = (void (__fastcall *)(unsigned __int64))i[2];
            if ( v21 )
            {
              v21((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              i[2] = 0LL;
            }
            v22 = (void (__fastcall *)(unsigned __int64))i[3];
            if ( v22 )
            {
              v22((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              i[3] = 0LL;
            }
          }
          v23 = _a1->m_ObjectSize;
          v24 = 1;
          if ( v23 )
          {
            v25 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v23);
            if ( v25 )
            {
              do
              {
                v26 = (_QWORD *)v25[1];
                if ( !v24 )
                  FxPoolFree(v25);
                v24 = 0;
                v25 = v26;
              }
              while ( v26 );
            }
          }
        }
        if ( v18 )
        {
          _a1[-1].m_ForwardProgressList.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'(v18, 1u);
        }
        if ( _a1->SelfDestruct != FxObject::SelfDestruct )
        {
          _a1->SelfDestruct(_a1);
          return;
        }
        v27 = _a1->~FxObject;
        if ( (char *)v27 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          m_Lock = (void *)_a1->m_NPLock.m_Lock;
          if ( m_Lock )
          {
            ZwClose(m_Lock);
            _a1->m_NPLock.m_Lock = 0LL;
          }
          v29 = *(FxObject_vtbl **)&_a1->m_NPLock.m_DbgFlagIsInitialized;
          _a1->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
          if ( v29 )
          {
            FxPoolFree(v29);
            *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = 0LL;
          }
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRequest *)((char *)_a1 - 32);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
          {
LABEL_52:
            m_InternalContext = (FX_POOL_TRACKER *)_a1[-1].m_InternalContext;
            if ( *(_BYTE *)(*(_QWORD *)&_a1[-1].m_Presented + 264LL) )
            {
              if ( FxIsPagedPoolType(m_InternalContext->PoolType) )
                FxPoolRemovePagedAllocateTracker(m_InternalContext);
              else
                FxPoolRemoveNonPagedAllocateTracker(m_InternalContext);
              memset(m_InternalContext, 0, m_InternalContext->Size + 64);
            }
            v31 = m_InternalContext;
            goto LABEL_54;
          }
        }
        else
        {
          if ( (char *)v27 != (char *)FxFileObject::`vector deleting destructor' )
          {
            if ( (char *)v27 == (char *)FxRequest::`scalar deleting destructor' )
            {
              _a1->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
              m_AllocatedMdl = _a1->m_AllocatedMdl;
              if ( m_AllocatedMdl )
                FxMdlFree(_a1->m_Globals, m_AllocatedMdl);
              m_RequestContext = (FxObject *)_a1->m_RequestContext;
              m_Irp = _a1->m_Irp.m_Irp;
              if ( m_RequestContext )
              {
                if ( m_Irp )
                  ((void (__fastcall *)(FxObject *, FxRequest *))m_RequestContext->AddRefOverride)(
                    m_RequestContext,
                    _a1);
                v90 = (FxObject *)_a1->m_RequestContext;
                if ( v90 )
                  ((void (__fastcall *)(FxObject *, __int64))v90->SelfDestruct)(v90, 1LL);
              }
              if ( m_Irp && _a1->m_IrpAllocation == 1 )
                IoFreeIrp(_a1->m_Irp.m_Irp);
              m_Timer = _a1->m_Timer;
              if ( m_Timer )
                FxRequestTimer::`scalar deleting destructor'(m_Timer, 1u);
              _a1->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              {
                m_ForwardProgressQueue = (FxVerifierLock *)_a1[-1].m_ForwardProgressQueue;
                if ( m_ForwardProgressQueue )
                {
                  FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, 1u);
                  _a1[-1].m_ForwardProgressQueue = 0LL;
                }
              }
              _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
              FxObject::~FxObject(_a1);
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                _a1 = (FxRequest *)((char *)_a1 - 32);
              FxPoolFree(_a1);
            }
            else
            {
              ((void (__fastcall *)(FxRequest *, __int64))v27)(_a1, 1LL);
            }
            return;
          }
          _a1->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
          _a1->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v89 = (FxVerifierLock *)_a1[-1].m_ForwardProgressQueue;
            if ( v89 )
            {
              FxVerifierLock::`scalar deleting destructor'(v89, 1u);
              _a1[-1].m_ForwardProgressQueue = 0LL;
            }
          }
          _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRequest *)((char *)_a1 - 32);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
            goto LABEL_52;
        }
        v31 = (FX_POOL_TRACKER *)_a1;
LABEL_54:
        ExFreePoolWithTag(v31, 0);
        return;
      }
LABEL_296:
      FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(_a1->m_Globals->Driver->m_DisposeList, _a1);
      return;
    }
    if ( (char *)Release == (char *)FxRequest::Release )
    {
      m_Reserved = _a1->m_Reserved;
      v33 = _a1->m_IrpAllocation == 0;
      m_CanComplete = _a1->m_CanComplete;
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v92 = (FxTagTracker *)_a1[-1].m_ForwardProgressList.Blink;
        if ( v92 )
          FxTagTracker::UpdateTagHistory(
            v92,
            0LL,
            1215,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      v35 = _InterlockedDecrement(&_a1->m_Refcnt);
      if ( v35 )
        goto LABEL_58;
      v41 = _a1->m_ObjectFlags;
      if ( (v41 & 0x20) != 0 || (v41 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(_a1->m_Globals->Driver->m_DisposeList, _a1);
      }
      else
      {
        if ( (v41 & 0x80u) != 0 )
        {
          v42 = (FxTagTracker *)_a1[-1].m_ForwardProgressList.Blink;
          v105 = v42;
          if ( v42 )
          {
            FxTagTracker::CheckForAbandondedTags(v42);
            v42 = v105;
          }
        }
        else
        {
          v42 = 0LL;
          v105 = 0LL;
        }
        v43 = _a1->m_ObjectSize;
        if ( v43 && (_a1->m_ObjectFlags & 8) != 0 )
        {
          v44 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v43);
          if ( v44 )
          {
            do
            {
              v45 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v44[2];
              if ( v45 )
              {
                v45((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, v15, v42);
                v44[2] = 0LL;
              }
              v46 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v44[3];
              if ( v46 )
              {
                v46((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, v15, v42);
                v44[3] = 0LL;
              }
              v44 = (_QWORD *)v44[1];
            }
            while ( v44 );
            v42 = v105;
          }
          v47 = _a1->m_ObjectSize;
          v48 = 1;
          if ( v47 )
          {
            v49 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v47);
            if ( v49 )
            {
              do
              {
                v50 = (_QWORD *)v49[1];
                if ( !v48 )
                  FxPoolFree(v49);
                v48 = 0;
                v49 = v50;
              }
              while ( v50 );
              v42 = v105;
            }
          }
        }
        if ( v42 )
        {
          _a1[-1].m_ForwardProgressList.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'(v42, 1u);
        }
        SelfDestruct = _a1->SelfDestruct;
        if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
        {
          v52 = _a1->m_AllocatedMdl;
          m_DeviceBase = _a1->m_DeviceBase;
          _a1->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
          if ( v52 )
            FxMdlFree(_a1->m_Globals, v52);
          v54 = (FxObject *)_a1->m_RequestContext;
          v55 = _a1->m_Irp.m_Irp;
          if ( v54 )
          {
            if ( v55 )
              ((void (__fastcall *)(FxObject *, FxRequest *))v54->AddRefOverride)(v54, _a1);
            v93 = (FxObject *)_a1->m_RequestContext;
            if ( v93 )
              ((void (__fastcall *)(FxObject *, __int64))v93->SelfDestruct)(v93, 1LL);
          }
          if ( v55 && _a1->m_IrpAllocation == 1 )
            IoFreeIrp(_a1->m_Irp.m_Irp);
          v56 = _a1->m_Timer;
          if ( v56 )
            FxRequestTimer::`scalar deleting destructor'(v56, 1u);
          _a1->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v94 = (FxVerifierLock *)_a1[-1].m_ForwardProgressQueue;
            if ( v94 )
            {
              FxVerifierLock::`scalar deleting destructor'(v94, 1u);
              _a1[-1].m_ForwardProgressQueue = 0LL;
            }
          }
          _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(_a1);
          if ( _a1->m_ForwardRequestToParent )
          {
            v95 = FxObject::_CleanupPointer(_a1->m_Globals, _a1);
            ExFreePoolWithTag(v95->Base, 0);
          }
          else
          {
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v57 = (FxRequest *)((char *)_a1 - 32);
            else
              v57 = _a1;
            if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
              FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v57[-1].m_InternalContext);
            v58 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v58 && *(_WORD *)(v58 + 8) == 4354 && *(_BYTE *)(v58 + 1651) )
            {
              FxFreeToNPagedLookasideListNoTracking(
                (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
                v57[-1].m_InternalContext);
            }
            else
            {
              v59 = (_SLIST_ENTRY *)v57[-1].m_InternalContext;
              p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
              ++HIDWORD(p_m_SpinLock[1].m_Lock);
              if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
              {
                ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
                ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v59);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v59);
              }
            }
          }
        }
        else if ( SelfDestruct == FxObject::SelfDestruct )
        {
          v66 = _a1->~FxObject;
          if ( (char *)v66 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            v67 = (void *)_a1->m_NPLock.m_Lock;
            if ( v67 )
            {
              ZwClose(v67);
              _a1->m_NPLock.m_Lock = 0LL;
            }
            v68 = *(FxObject_vtbl **)&_a1->m_NPLock.m_DbgFlagIsInitialized;
            _a1->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
            if ( v68 )
            {
              FxPoolFree(v68);
              *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = 0LL;
            }
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              p_Blink = (_LIST_ENTRY *)&_a1[-1].m_ForwardProgressList.Blink;
            else
              p_Blink = (_LIST_ENTRY *)_a1;
            if ( !p_Blink )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v66 != (char *)FxFileObject::`vector deleting destructor' )
            {
              if ( (char *)v66 == (char *)FxRequest::`scalar deleting destructor' )
              {
                _a1->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
                v72 = _a1->m_AllocatedMdl;
                if ( v72 )
                  FxMdlFree(_a1->m_Globals, v72);
                v73 = (FxObject *)_a1->m_RequestContext;
                v74 = _a1->m_Irp.m_Irp;
                if ( v73 )
                {
                  if ( v74 )
                    ((void (__fastcall *)(FxObject *, FxRequest *))v73->AddRefOverride)(v73, _a1);
                  v97 = (FxObject *)_a1->m_RequestContext;
                  if ( v97 )
                    ((void (__fastcall *)(FxObject *, __int64))v97->SelfDestruct)(v97, 1LL);
                }
                if ( v74 && _a1->m_IrpAllocation == 1 )
                  IoFreeIrp(_a1->m_Irp.m_Irp);
                v75 = _a1->m_Timer;
                if ( v75 )
                  FxRequestTimer::`scalar deleting destructor'(v75, 1u);
                _a1->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                {
                  v98 = (FxVerifierLock *)_a1[-1].m_ForwardProgressQueue;
                  if ( v98 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v98, 1u);
                    _a1[-1].m_ForwardProgressQueue = 0LL;
                  }
                }
                _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
                FxObject::~FxObject(_a1);
                if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                  v76 = (_LIST_ENTRY *)&_a1[-1].m_ForwardProgressList.Blink;
                else
                  v76 = (_LIST_ENTRY *)_a1;
                FxPoolFree(v76);
              }
              else
              {
                ((void (__fastcall *)(FxRequest *, __int64))v66)(_a1, 1LL);
              }
              goto LABEL_58;
            }
            _a1->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
            _a1->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            {
              v96 = (FxVerifierLock *)_a1[-1].m_ForwardProgressQueue;
              if ( v96 )
              {
                FxVerifierLock::`scalar deleting destructor'(v96, 1u);
                _a1[-1].m_ForwardProgressQueue = 0LL;
              }
            }
            _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              p_Blink = (_LIST_ENTRY *)&_a1[-1].m_ForwardProgressList.Blink;
            else
              p_Blink = (_LIST_ENTRY *)_a1;
            if ( !p_Blink )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
          {
            v70 = (FX_POOL_TRACKER *)p_Blink[-1].Flink;
            if ( LOBYTE(p_Blink[-1].Blink[16].Blink) )
            {
              if ( FxIsPagedPoolType(v70->PoolType) )
                FxPoolRemovePagedAllocateTracker(v70);
              else
                FxPoolRemoveNonPagedAllocateTracker(v70);
              memset(v70, 0, v70->Size + 64);
            }
            ExFreePoolWithTag(v70, 0);
          }
          else
          {
            ExFreePoolWithTag(p_Blink, 0);
          }
        }
        else
        {
          SelfDestruct(_a1);
        }
      }
LABEL_58:
      if ( m_Reserved && v35 == 1 && _a1->m_Completed )
      {
        FxIoQueue::ReturnReservedRequest(_a1->m_ForwardProgressQueue, _a1);
      }
      else if ( !v33 && m_CanComplete && v35 == 1 && _a1->m_Completed )
      {
        m_CompletionState = _a1->m_CompletionState;
        m_IoQueue = _a1->m_IoQueue;
        v101 = _a1->m_Irp.m_Irp;
        m_PriorityBoost = _a1->m_PriorityBoost;
        _a1->m_CompletionState = 0;
        _a1->m_IoQueue = 0LL;
        _a1->m_Irp.m_Irp = 0LL;
        IofCompleteRequest(v101, m_PriorityBoost);
        FxRequest::PostProcessCompletionForDriverRequest(_a1, m_CompletionState, m_IoQueue);
      }
      return;
    }
    if ( (char *)Release != (char *)FxMemoryObject::Release )
    {
      Release(_a1, 0LL, 1215LL, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      return;
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
    {
      v103 = (FxTagTracker *)_a1[-1].m_ForwardProgressList.Blink;
      if ( v103 )
        FxTagTracker::UpdateTagHistory(
          v103,
          0LL,
          1215,
          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
          TagRelease,
          _a1->m_Refcnt - 1);
    }
    if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) == 1 )
    {
      v36 = _a1->m_ObjectFlags;
      if ( (v36 & 0x20) == 0 && ((v36 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        FxObject::ProcessDestroy(_a1);
        return;
      }
      goto LABEL_296;
    }
  }
  else
  {
    while ( 1 )
    {
      v61 = (unsigned __int64)&v14[-5].Blink;
      v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v14[-1]);
      v63 = v62;
      if ( WORD1(v14[-3].Flink) != 1 )
      {
        switch ( WORD1(v14[-3].Flink) )
        {
          case 5:
            v65 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v14[-5].Blink, v62, 0);
            goto LABEL_141;
          case 7:
            v65 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v14[-5].Blink, v62, 0);
            goto LABEL_141;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v14[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)(v61 + 56), v63);
            goto LABEL_142;
        }
      }
      if ( (*(_WORD *)(v61 + 24) & 0x200) != 0 )
      {
        v79 = *(_FX_DRIVER_GLOBALS **)(v61 + 16);
        if ( v79->FxVerboseOn )
        {
          if ( *(_WORD *)(v61 + 10) )
            v80 = (const void *)(v61 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v80 = 0LL;
          WPP_IFR_SF_qqLL(v79, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v14[-5].Blink, v80, 1u, 3u);
        }
        if ( *(char *)(v61 + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v14[-5]) + v61 - 16) = 3;
      }
      *(_WORD *)(v61 + 26) = 3;
      if ( (*(_WORD *)(v61 + 24) & 0x200) != 0 )
      {
        v81 = *(_FX_DRIVER_GLOBALS **)(v61 + 16);
        if ( v81->FxVerboseOn )
        {
          if ( *(_WORD *)(v61 + 10) )
            v82 = (const void *)(v61 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v82 = 0LL;
          WPP_IFR_SF_qqLL(v81, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v14[-5].Blink, v82, 3u, 4u);
        }
        if ( *(char *)(v61 + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v14[-5]) + v61 - 16) = 4;
      }
      *(_WORD *)(v61 + 26) = 4;
      if ( FxObject::DisposeChildrenWorker((FxObject *)&v14[-5].Blink, FxObjectStateDeferedDisposing, v63, 0) )
      {
        v64 = *(_WORD *)(v61 + 24);
        if ( (v64 & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v14[-5].Blink, v63, 0);
        }
        else
        {
          if ( (v64 & 0x200) != 0 )
          {
            v83 = *(_FX_DRIVER_GLOBALS **)(v61 + 16);
            if ( v83->FxVerboseOn )
            {
              if ( *(_WORD *)(v61 + 10) )
                v84 = (const void *)(v61 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v84 = 0LL;
              WPP_IFR_SF_qqLL(
                v83,
                5u,
                0x14u,
                0xAu,
                WPP_FxObject_hpp_Traceguids,
                &v14[-5].Blink,
                v84,
                *(unsigned __int16 *)(v61 + 26),
                2u);
            }
            if ( *(char *)(v61 + 24) < 0 )
              *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v14[-5]) + v61 - 16) = 2;
          }
          *(_WORD *)(v61 + 26) = 2;
        }
        v65 = 1;
      }
      else
      {
        v65 = 0;
      }
LABEL_141:
      if ( !v65 )
        break;
LABEL_142:
      v14 = v14->Flink;
      if ( v14 == p_m_ChildListHead )
        goto LABEL_14;
    }
    v85 = KeAcquireSpinLockRaiseToDpc(&_a1->m_SpinLock.m_Lock);
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v85);
  }
}
