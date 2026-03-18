/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008030 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C00655AC (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C007D780 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C007E350 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C009FAC0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000C1C0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000C500 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000C660 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001CF08 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C003E068 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003E0D8 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003E158 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003F20C (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C003F364 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003F998 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003FE38 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // r14
  FxRequest *_a1; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp
  int m_ObjectState; // eax
  FxObject *m_ParentObject; // rdi
  KIRQL v7; // r15
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // cx
  bool v12; // zf
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v15; // rsi
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  __int64 (__fastcall *Release)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  unsigned __int16 v18; // cx
  FxTagTracker *v19; // r14
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rsi
  void (__fastcall *v22)(unsigned __int64); // rax
  void (__fastcall *v23)(unsigned __int64); // rax
  unsigned __int16 v24; // ax
  _QWORD *v25; // rcx
  _QWORD *v26; // rsi
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  FxRequest *(__fastcall *v28)(FxRequest *, char); // rax
  void *m_Lock; // rcx
  FxObject_vtbl *v30; // rcx
  FX_POOL_TRACKER *m_InternalContext; // rdi
  FX_POOL_TRACKER *v32; // rcx
  unsigned __int8 m_Reserved; // r14
  unsigned __int8 m_IrpAllocation; // bp
  unsigned __int8 m_CanComplete; // r13
  signed __int32 v36; // esi
  unsigned __int16 v37; // ax
  _MDL *m_AllocatedMdl; // rcx
  FxObject *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  unsigned __int16 v42; // cx
  FxTagTracker *v43; // r8
  unsigned __int16 v44; // cx
  _QWORD *v45; // r15
  void (__fastcall *v46)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  void (__fastcall *v47)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  unsigned __int16 v48; // ax
  _QWORD *v49; // rcx
  _QWORD *v50; // r15
  FxObject_vtbl *v51; // rdx
  void (__fastcall *v52)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v53; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  FxObject *v55; // rcx
  _IRP *v56; // r15
  FxRequestTimer *v57; // rcx
  FxRequest *v58; // r15
  __int64 v59; // rax
  _SLIST_ENTRY *v60; // r15
  MxLock *p_m_SpinLock; // rdi
  unsigned __int64 v62; // rbp
  KIRQL v63; // r15
  __int16 v64; // cx
  unsigned __int8 v65; // al
  FxRequest *(__fastcall *v66)(FxRequest *, char); // rax
  void *v67; // rcx
  FxObject_vtbl *v68; // rcx
  unsigned __int64 *p_Blink; // rax
  FX_POOL_TRACKER *v70; // rdi
  _MDL *v71; // rcx
  FxObject *v72; // rcx
  _IRP *v73; // rdi
  FxRequestTimer *v74; // rcx
  unsigned __int64 *v75; // rcx
  _SLIST_ENTRY *v76; // r15
  FxObject *v77; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v80; // rcx
  const void *v81; // rdx
  _FX_DRIVER_GLOBALS *v82; // rcx
  const void *v83; // rdx
  _FX_DRIVER_GLOBALS *v84; // rcx
  const void *v85; // rdx
  KIRQL v86; // di
  _FX_DRIVER_GLOBALS *v87; // rcx
  const void *v88; // rdx
  FxTagTracker *v89; // rcx
  FxObject *v90; // rcx
  FxVerifierLock *v91; // rcx
  FxTagTracker *v92; // rcx
  FxObject *v93; // rcx
  FxVerifierLock *v94; // rcx
  _SINGLE_LIST_ENTRY *v95; // rax
  FxObject *v96; // rcx
  FxVerifierLock *v97; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rsi
  _IRP *v100; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v102; // rdx
  FxTagTracker *v103; // rcx
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]
  FxTagTracker *v105; // [rsp+98h] [rbp+10h]

  p_m_Lock = &this->m_SpinLock.m_Lock;
  _a1 = (FxRequest *)this;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a1->m_ObjectFlags |= 4u;
  v4 = v3;
  m_ObjectState = _a1->m_ObjectState;
  if ( m_ObjectState == 1 )
  {
    m_ParentObject = _a1->m_ParentObject;
    if ( m_ParentObject )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&m_ParentObject->m_SpinLock.m_Lock);
      if ( m_ParentObject->m_ObjectState != 1 )
      {
        FxObject::TraceDroppedEvent(m_ParentObject, FxObjectDroppedEventRemoveChildObjectInternal);
        KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v7);
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForEarlyDispose);
        KeReleaseSpinLock(p_m_Lock, v4);
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
      KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v7);
      _a1->m_ParentObject = 0LL;
    }
    m_ObjectFlags = _a1->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v4 )
      goto LABEL_193;
    if ( (m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = _a1->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !_a1->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a1->m_ObjectState, 9u);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_ForwardProgressQueue) - 32) = 9;
    }
    v12 = (_a1->m_ObjectFlags & 0x20) == 0;
    _a1->m_ObjectState = 9;
    if ( !v12 )
    {
      if ( v4 )
        goto LABEL_193;
    }
    v13 = _a1->m_ChildListHead.Flink;
    p_m_ChildListHead = &_a1->m_ChildListHead;
    if ( v13 != &_a1->m_ChildListHead )
    {
      while ( !v4 || ((__int64)v13[-3].Flink & 0x10) == 0 )
      {
        v13 = v13->Flink;
        if ( v13 == p_m_ChildListHead )
          goto LABEL_13;
      }
LABEL_193:
      FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
      KeReleaseSpinLock(p_m_Lock, v4);
      return;
    }
LABEL_13:
    KeReleaseSpinLock(p_m_Lock, v4);
    v15 = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
    {
LABEL_14:
      if ( ((_a1->m_ObjectFlags & 0x800) == 0 || _a1->Dispose(_a1)) && (_a1->m_ObjectFlags & 0x400) != 0 )
        FxObject::CallCleanupCallbacks(_a1);
      if ( (_a1->m_ObjectFlags & 0x200) != 0 )
      {
        v87 = _a1->m_Globals;
        if ( v87->FxVerboseOn )
        {
          v88 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !_a1->m_ObjectSize )
            v88 = 0LL;
          WPP_IFR_SF_qqLL(v87, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, v88, _a1->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_ForwardProgressQueue) - 32) = 10;
      }
      _a1->m_ObjectState = 10;
      FxObject::DestroyChildren(_a1);
      Release = (__int64 (__fastcall *)(FxObject *, volatile signed __int32 *, __int64, const char *))_a1->Release;
      if ( Release == FxObject::Release )
      {
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          v89 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
          if ( v89 )
            FxTagTracker::UpdateTagHistory(
              v89,
              0LL,
              1246,
              "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
              TagRelease,
              _a1->m_Refcnt - 1);
        }
        if ( _InterlockedDecrement(&_a1->m_Refcnt) )
          return;
        v18 = _a1->m_ObjectFlags;
        if ( (v18 & 0x20) == 0 && ((v18 & 0x10) == 0 || !KeGetCurrentIrql()) )
        {
          if ( (v18 & 0x80u) != 0 )
          {
            v19 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
            if ( v19 )
              FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink);
          }
          else
          {
            v19 = 0LL;
          }
          m_ObjectSize = _a1->m_ObjectSize;
          if ( m_ObjectSize && (_a1->m_ObjectFlags & 8) != 0 )
          {
            for ( i = (FxRequest_vtbl **)((char *)&_a1->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
            {
              v22 = (void (__fastcall *)(unsigned __int64))i[2];
              if ( v22 )
              {
                v22((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
                i[2] = 0LL;
              }
              v23 = (void (__fastcall *)(unsigned __int64))i[3];
              if ( v23 )
              {
                v23((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
                i[3] = 0LL;
              }
            }
            v24 = _a1->m_ObjectSize;
            LOBYTE(FxVerifyLeakDetection) = 1;
            if ( v24 )
            {
              v25 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v24);
              if ( v25 )
              {
                do
                {
                  v26 = (_QWORD *)v25[1];
                  if ( !(_BYTE)FxVerifyLeakDetection )
                    FxPoolFree(v25);
                  LOBYTE(FxVerifyLeakDetection) = 0;
                  v25 = v26;
                }
                while ( v26 );
              }
            }
          }
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            if ( BYTE4(_a1[-1].m_ForwardProgressQueue) )
            {
              _InterlockedDecrement(&_a1->m_Globals->FxVerifyLeakDetection->ObjectCnt);
              if ( _a1->m_Type == 4098
                && _InterlockedExchangeAdd(&_a1->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
              {
                FxVerifyLeakDetection = _a1->m_Globals->FxVerifyLeakDetection;
                _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
              }
            }
          }
          if ( v19 )
          {
            _a1[-1].m_OwnerListEntry2.Blink = 0LL;
            FxTagTracker::`scalar deleting destructor'(v19, (unsigned int)FxVerifyLeakDetection);
          }
          SelfDestruct = _a1->SelfDestruct;
          if ( SelfDestruct != FxObject::SelfDestruct )
          {
            _a1->SelfDestruct(_a1);
            return;
          }
          v28 = (FxRequest *(__fastcall *)(FxRequest *, char))_a1->~FxObject;
          if ( (char *)v28 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
            m_Lock = (void *)_a1->m_NPLock.m_Lock;
            if ( m_Lock )
            {
              ZwClose(m_Lock);
              _a1->m_NPLock.m_Lock = 0LL;
            }
            v30 = *(FxObject_vtbl **)&_a1->m_NPLock.m_DbgFlagIsInitialized;
            _a1->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
            if ( v30 )
            {
              FxPoolFree(v30);
              *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = 0LL;
            }
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              _a1 = (FxRequest *)((char *)_a1 - 48);
            if ( !_a1 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
            {
LABEL_53:
              m_InternalContext = (FX_POOL_TRACKER *)_a1[-1].m_InternalContext;
              if ( *(_BYTE *)(*(_QWORD *)&_a1[-1].m_Presented + 264LL) )
              {
                if ( FxIsPagedPoolType(m_InternalContext->PoolType) )
                  FxPoolRemovePagedAllocateTracker(m_InternalContext);
                else
                  FxPoolRemoveNonPagedAllocateTracker(m_InternalContext);
                memset(m_InternalContext, 0, m_InternalContext->Size + 64);
              }
              v32 = m_InternalContext;
              goto LABEL_55;
            }
          }
          else
          {
            if ( v28 == FxRequest::`scalar deleting destructor' )
            {
              _a1->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
              m_AllocatedMdl = _a1->m_AllocatedMdl;
              if ( m_AllocatedMdl )
              {
                if ( _a1->m_Globals->FxVerifierOn )
                  FxMdlFreeDebug(_a1->m_Globals, _a1->m_AllocatedMdl);
                else
                  IoFreeMdl(m_AllocatedMdl);
              }
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
                FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)SelfDestruct);
              _a1->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              {
                v91 = (FxVerifierLock *)_a1[-1].m_ForwardProgressList.Flink;
                if ( v91 )
                {
                  FxVerifierLock::`scalar deleting destructor'(v91, (unsigned int)SelfDestruct);
                  _a1[-1].m_ForwardProgressList.Flink = 0LL;
                }
              }
              _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
              FxObject::~FxObject(_a1);
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                _a1 = (FxRequest *)((char *)_a1 - 48);
              FxPoolFree(_a1);
              return;
            }
            if ( (char *)v28 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
            {
              v28(_a1, 1);
              return;
            }
            _a1->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              _a1 = (FxRequest *)((char *)_a1 - 48);
            if ( !_a1 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
              goto LABEL_53;
          }
          v32 = (FX_POOL_TRACKER *)_a1;
LABEL_55:
          ExFreePoolWithTag(v32, 0);
          return;
        }
LABEL_304:
        FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(_a1->m_Globals->Driver->m_DisposeList, _a1);
        return;
      }
      if ( (char *)Release == (char *)FxRequest::Release )
      {
        m_Reserved = _a1->m_Reserved;
        m_IrpAllocation = _a1->m_IrpAllocation;
        m_CanComplete = _a1->m_CanComplete;
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          v92 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
          if ( v92 )
            FxTagTracker::UpdateTagHistory(
              v92,
              0LL,
              1246,
              "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
              TagRelease,
              _a1->m_Refcnt - 1);
        }
        v36 = _InterlockedDecrement(&_a1->m_Refcnt);
        if ( v36 )
          goto LABEL_59;
        v42 = _a1->m_ObjectFlags;
        if ( (v42 & 0x20) != 0 || (v42 & 0x10) != 0 && KeGetCurrentIrql() )
        {
          FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
          FxDisposeList::Add(_a1->m_Globals->Driver->m_DisposeList, _a1);
          goto LABEL_59;
        }
        if ( (v42 & 0x80u) != 0 )
        {
          v43 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
          v105 = v43;
          if ( v43 )
          {
            FxTagTracker::CheckForAbandondedTags(v43);
            v43 = v105;
          }
        }
        else
        {
          v43 = 0LL;
          v105 = 0LL;
        }
        v44 = _a1->m_ObjectSize;
        if ( v44 && (_a1->m_ObjectFlags & 8) != 0 )
        {
          v45 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v44);
          if ( v45 )
          {
            do
            {
              v46 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v45[2];
              if ( v46 )
              {
                v46((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v43);
                v45[2] = 0LL;
              }
              v47 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v45[3];
              if ( v47 )
              {
                v47((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v43);
                v45[3] = 0LL;
              }
              v45 = (_QWORD *)v45[1];
            }
            while ( v45 );
            v43 = v105;
          }
          v48 = _a1->m_ObjectSize;
          LOBYTE(FxVerifyLeakDetection) = 1;
          if ( v48 )
          {
            v49 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v48);
            if ( v49 )
            {
              do
              {
                v50 = (_QWORD *)v49[1];
                if ( !(_BYTE)FxVerifyLeakDetection )
                  FxPoolFree(v49);
                LOBYTE(FxVerifyLeakDetection) = 0;
                v49 = v50;
              }
              while ( v50 );
              v43 = v105;
            }
          }
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          if ( BYTE4(_a1[-1].m_ForwardProgressQueue) )
          {
            _InterlockedDecrement(&_a1->m_Globals->FxVerifyLeakDetection->ObjectCnt);
            if ( _a1->m_Type == 4098
              && _InterlockedExchangeAdd(&_a1->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
            {
              FxVerifyLeakDetection = _a1->m_Globals->FxVerifyLeakDetection;
              _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
            }
          }
        }
        if ( v43 )
        {
          _a1[-1].m_OwnerListEntry2.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'(v43, (unsigned int)FxVerifyLeakDetection);
        }
        v51 = (FxObject_vtbl *)_a1->__vftable;
        v52 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))_a1->SelfDestruct;
        if ( v52 == FxRequestFromLookaside::SelfDestruct )
        {
          v53 = _a1->m_AllocatedMdl;
          m_DeviceBase = _a1->m_DeviceBase;
          _a1->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
          if ( v53 )
          {
            if ( _a1->m_Globals->FxVerifierOn )
              FxMdlFreeDebug(_a1->m_Globals, v53);
            else
              IoFreeMdl(v53);
          }
          v55 = (FxObject *)_a1->m_RequestContext;
          v56 = _a1->m_Irp.m_Irp;
          if ( v55 )
          {
            if ( v56 )
              ((void (__fastcall *)(FxObject *, FxRequest *))v55->AddRefOverride)(v55, _a1);
            v93 = (FxObject *)_a1->m_RequestContext;
            if ( v93 )
              ((void (__fastcall *)(FxObject *, __int64))v93->SelfDestruct)(v93, 1LL);
          }
          if ( v56 && _a1->m_IrpAllocation == 1 )
            IoFreeIrp(_a1->m_Irp.m_Irp);
          v57 = _a1->m_Timer;
          if ( v57 )
            FxRequestTimer::`scalar deleting destructor'(v57, (unsigned int)v51);
          _a1->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v94 = (FxVerifierLock *)_a1[-1].m_ForwardProgressList.Flink;
            if ( v94 )
            {
              FxVerifierLock::`scalar deleting destructor'(v94, (unsigned int)v51);
              _a1[-1].m_ForwardProgressList.Flink = 0LL;
            }
          }
          _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(_a1);
          if ( _a1->m_ForwardRequestToParent )
          {
            v95 = FxObject::_CleanupPointer(_a1->m_Globals, _a1);
            ExFreePoolWithTag(v95->Next, 0);
          }
          else
          {
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v58 = (FxRequest *)((char *)_a1 - 48);
            else
              v58 = _a1;
            if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
              FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v58[-1].m_InternalContext);
            v59 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v59 && *(_WORD *)(v59 + 8) == 4354 && *(_BYTE *)(v59 + 1667) )
            {
              v76 = (_SLIST_ENTRY *)v58[-1].m_InternalContext;
              if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
                (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v76);
              else
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, v76);
            }
            else
            {
              v60 = (_SLIST_ENTRY *)v58[-1].m_InternalContext;
              p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
              ++HIDWORD(p_m_SpinLock[1].m_Lock);
              if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
              {
                ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
                ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v60);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v60);
              }
            }
          }
          goto LABEL_59;
        }
        if ( (char *)v52 != (char *)FxObject::SelfDestruct )
        {
          ((void (__fastcall *)(FxRequest *))v52)(_a1);
          goto LABEL_59;
        }
        v66 = (FxRequest *(__fastcall *)(FxRequest *, char))v51->~FxObject;
        if ( (char *)v66 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
          v67 = (void *)_a1->m_NPLock.m_Lock;
          if ( v67 )
          {
            ZwClose(v67);
            _a1->m_NPLock.m_Lock = 0LL;
          }
          v68 = *(FxObject_vtbl **)&_a1->m_NPLock.m_DbgFlagIsInitialized;
          _a1->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
          if ( v68 )
          {
            FxPoolFree(v68);
            *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = 0LL;
          }
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            p_Blink = (unsigned __int64 *)&_a1[-1].m_OwnerListEntry2.Blink;
          else
            p_Blink = (unsigned __int64 *)_a1;
          if ( !p_Blink )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        }
        else
        {
          if ( v66 == FxRequest::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
            v71 = _a1->m_AllocatedMdl;
            if ( v71 )
            {
              if ( _a1->m_Globals->FxVerifierOn )
                FxMdlFreeDebug(_a1->m_Globals, _a1->m_AllocatedMdl);
              else
                IoFreeMdl(v71);
            }
            v72 = (FxObject *)_a1->m_RequestContext;
            v73 = _a1->m_Irp.m_Irp;
            if ( v72 )
            {
              if ( v73 )
                ((void (__fastcall *)(FxObject *, FxRequest *))v72->AddRefOverride)(v72, _a1);
              v96 = (FxObject *)_a1->m_RequestContext;
              if ( v96 )
                ((void (__fastcall *)(FxObject *, __int64))v96->SelfDestruct)(v96, 1LL);
            }
            if ( v73 && _a1->m_IrpAllocation == 1 )
              IoFreeIrp(_a1->m_Irp.m_Irp);
            v74 = _a1->m_Timer;
            if ( v74 )
              FxRequestTimer::`scalar deleting destructor'(v74, (unsigned int)v51);
            _a1->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            {
              v97 = (FxVerifierLock *)_a1[-1].m_ForwardProgressList.Flink;
              if ( v97 )
              {
                FxVerifierLock::`scalar deleting destructor'(v97, (unsigned int)v51);
                _a1[-1].m_ForwardProgressList.Flink = 0LL;
              }
            }
            _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v75 = (unsigned __int64 *)&_a1[-1].m_OwnerListEntry2.Blink;
            else
              v75 = (unsigned __int64 *)_a1;
            FxPoolFree(v75);
            goto LABEL_59;
          }
          if ( (char *)v66 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
          {
            v66(_a1, 1);
LABEL_59:
            if ( m_Reserved && v36 == 1 && _a1->m_Completed )
            {
              FxIoQueue::ReturnReservedRequest(_a1->m_ForwardProgressQueue, _a1);
            }
            else if ( m_IrpAllocation )
            {
              if ( m_CanComplete )
              {
                if ( v36 == 1 )
                {
                  if ( _a1->m_Completed )
                  {
                    m_CompletionState = _a1->m_CompletionState;
                    m_IoQueue = _a1->m_IoQueue;
                    v100 = _a1->m_Irp.m_Irp;
                    m_PriorityBoost = _a1->m_PriorityBoost;
                    _a1->m_CompletionState = 0;
                    _a1->m_IoQueue = 0LL;
                    _a1->m_Irp.m_Irp = 0LL;
                    IofCompleteRequest(v100, m_PriorityBoost);
                    if ( m_CompletionState == 1 )
                      FxIoQueue::PostRequestCompletedCallback(m_IoQueue, v102);
                  }
                }
              }
            }
            return;
          }
          _a1->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
          *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            p_Blink = (unsigned __int64 *)&_a1[-1].m_OwnerListEntry2.Blink;
          else
            p_Blink = (unsigned __int64 *)_a1;
          if ( !p_Blink )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        }
        if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
        {
          v70 = (FX_POOL_TRACKER *)*(p_Blink - 2);
          if ( *(_BYTE *)(*(p_Blink - 1) + 264) )
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
        goto LABEL_59;
      }
      if ( (char *)Release != (char *)FxMemoryObject::Release )
      {
        Release(_a1, 0LL, 1246LL, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
        return;
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v103 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
        if ( v103 )
          FxTagTracker::UpdateTagHistory(
            v103,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) == 1 )
      {
        v37 = _a1->m_ObjectFlags;
        if ( (v37 & 0x20) == 0 && ((v37 & 0x10) == 0 || !KeGetCurrentIrql()) )
        {
          FxObject::ProcessDestroy(_a1);
          return;
        }
        goto LABEL_304;
      }
    }
    else
    {
      while ( 1 )
      {
        v62 = (unsigned __int64)&v15[-5].Blink;
        v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v15[-1]);
        if ( WORD1(v15[-3].Flink) != 1 )
        {
          switch ( WORD1(v15[-3].Flink) )
          {
            case 5:
              v65 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v15[-5].Blink, v63, 0);
              goto LABEL_140;
            case 7:
              v65 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v15[-5].Blink, v63, 0);
              goto LABEL_140;
            default:
              FxObject::TraceDroppedEvent((FxObject *)&v15[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
              KeReleaseSpinLock((PKSPIN_LOCK)(v62 + 56), v63);
              goto LABEL_141;
          }
        }
        if ( (*(_WORD *)(v62 + 24) & 0x200) != 0 )
        {
          v80 = *(_FX_DRIVER_GLOBALS **)(v62 + 16);
          if ( v80->FxVerboseOn )
          {
            v81 = (const void *)(v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v62 + 10) )
              v81 = 0LL;
            WPP_IFR_SF_qqLL(v80, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v15[-5].Blink, v81, 1u, 3u);
          }
          if ( *(char *)(v62 + 24) < 0 )
            *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v15[-6]) + v62 - 32) = 3;
        }
        *(_WORD *)(v62 + 26) = 3;
        if ( (*(_WORD *)(v62 + 24) & 0x200) != 0 )
        {
          v82 = *(_FX_DRIVER_GLOBALS **)(v62 + 16);
          if ( v82->FxVerboseOn )
          {
            v83 = (const void *)(v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v62 + 10) )
              v83 = 0LL;
            WPP_IFR_SF_qqLL(v82, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v15[-5].Blink, v83, 3u, 4u);
          }
          if ( *(char *)(v62 + 24) < 0 )
            *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v15[-6]) + v62 - 32) = 4;
        }
        *(_WORD *)(v62 + 26) = 4;
        if ( FxObject::DisposeChildrenWorker((FxObject *)&v15[-5].Blink, FxObjectStateDeferedDisposing, v63, 0) )
        {
          v64 = *(_WORD *)(v62 + 24);
          if ( (v64 & 0x104) == 0x104 )
          {
            FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v15[-5].Blink, v63, 0);
          }
          else
          {
            if ( (v64 & 0x200) != 0 )
            {
              v84 = *(_FX_DRIVER_GLOBALS **)(v62 + 16);
              if ( v84->FxVerboseOn )
              {
                v85 = (const void *)(v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !*(_WORD *)(v62 + 10) )
                  v85 = 0LL;
                WPP_IFR_SF_qqLL(
                  v84,
                  5u,
                  0x14u,
                  0xAu,
                  WPP_FxObject_hpp_Traceguids,
                  &v15[-5].Blink,
                  v85,
                  *(unsigned __int16 *)(v62 + 26),
                  2u);
              }
              if ( *(char *)(v62 + 24) < 0 )
                *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v15[-6]) + v62 - 32) = 2;
            }
            *(_WORD *)(v62 + 26) = 2;
          }
          v65 = 1;
        }
        else
        {
          v65 = 0;
        }
LABEL_140:
        if ( !v65 )
          break;
LABEL_141:
        v15 = v15->Flink;
        if ( v15 == p_m_ChildListHead )
          goto LABEL_14;
      }
      v86 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
      FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
      KeReleaseSpinLock(p_m_Lock, v86);
    }
  }
  else
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(p_m_Lock, v4);
      return;
    }
    v77 = _a1->m_ParentObject;
    if ( v77 )
    {
      if ( FxObject::RemoveChildObjectInternal(v77, _a1) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(p_m_Lock, v4);
        return;
      }
      _a1->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(_a1, v4, 1u);
  }
}
