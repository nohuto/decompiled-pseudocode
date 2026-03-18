/*
 * XREFs of imp_WdfRegistryClose @ 0x1C0001F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
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
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Key)
{
  FxRegKey *v2; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  FxRegKey *_a1; // rbx
  void (__fastcall *DeleteObject)(FxObject *); // rax
  KIRQL v8; // al
  KIRQL v9; // bp
  int m_ObjectState; // eax
  FxObject *m_ParentObject; // rdi
  KIRQL v12; // r15
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // cx
  bool v17; // zf
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v20; // rsi
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int16 v23; // cx
  FxTagTracker *v24; // r14
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rsi
  void (__fastcall *v27)(unsigned __int64); // rax
  void (__fastcall *v28)(unsigned __int64); // rax
  unsigned __int16 v29; // ax
  _QWORD *v30; // rcx
  _QWORD *v31; // rsi
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  void *(__fastcall *v33)(FxRequest *, unsigned int); // rax
  void *v34; // rcx
  MxPagedLock *m_Lock; // rcx
  FX_POOL_TRACKER *v36; // rdi
  FX_POOL_TRACKER *v37; // rcx
  char v38; // r14
  char v39; // bp
  char v40; // r12
  signed __int32 v41; // esi
  unsigned __int16 v42; // ax
  _MDL *v43; // rcx
  _LIST_ENTRY *v44; // rcx
  __int64 v45; // rdi
  FxRequestTimer *v46; // rcx
  unsigned __int16 v47; // cx
  FxTagTracker *v48; // r8
  unsigned __int16 v49; // cx
  _QWORD *v50; // r15
  void (__fastcall *v51)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  void (__fastcall *v52)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  unsigned __int16 v53; // ax
  _QWORD *v54; // rcx
  _QWORD *v55; // r15
  FxRegKey_vtbl *v56; // rdx
  void (__fastcall *v57)(FxRequestFromLookaside *); // rax
  _MDL *v58; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  _LIST_ENTRY *v60; // rcx
  __int64 v61; // r15
  FxRequestTimer *v62; // rcx
  FxRegKey *v63; // r15
  __int64 v64; // rax
  _SLIST_ENTRY *v65; // r15
  MxLock *p_m_SpinLock; // rdi
  unsigned __int64 v67; // rbp
  KIRQL v68; // r12
  __int16 v69; // cx
  unsigned __int8 v70; // al
  void *(__fastcall *v71)(FxRequest *, unsigned int); // rax
  void *v72; // rcx
  MxPagedLock *v73; // rcx
  _LIST_ENTRY **p_Blink; // rax
  FX_POOL_TRACKER *v75; // rdi
  _SLIST_ENTRY *v76; // r15
  _MDL *v77; // rcx
  _LIST_ENTRY *v78; // rcx
  __int64 v79; // rdi
  FxRequestTimer *v80; // rcx
  _LIST_ENTRY **v81; // rcx
  unsigned __int8 CurrentIrql; // al
  FxObject *v83; // rcx
  _FX_DRIVER_GLOBALS *v84; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v86; // rcx
  const void *v87; // rdx
  _FX_DRIVER_GLOBALS *v88; // rcx
  const void *v89; // rdx
  _FX_DRIVER_GLOBALS *v90; // rcx
  const void *v91; // rdx
  KIRQL v92; // di
  _FX_DRIVER_GLOBALS *v93; // rcx
  const void *v94; // rdx
  FxTagTracker *v95; // rcx
  _LIST_ENTRY *v96; // rcx
  FxVerifierLock *Next; // rcx
  FxTagTracker *v98; // rcx
  _LIST_ENTRY *v99; // rcx
  FxVerifierLock *v100; // rcx
  FX_POOL_HEADER *v101; // rax
  _LIST_ENTRY *v102; // rcx
  FxVerifierLock *v103; // rcx
  char v104; // di
  FxIoQueue *v105; // rsi
  _IRP *v106; // rcx
  CCHAR v107; // dl
  FxRequest *v108; // rdx
  FxTagTracker *v109; // rcx
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]
  FxTagTracker *v111; // [rsp+98h] [rbp+10h]
  FxRegKey *pKey; // [rsp+A0h] [rbp+18h] BYREF

  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  v2 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxRegKey *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4102 )
  {
    pKey = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v2 = pKey;
  }
  m_Globals = v2->FxPagedObject::FxObject::m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
  }
  m_Key = v2->m_Key;
  v2->m_Key = 0LL;
  ZwClose(m_Key);
  _a1 = pKey;
  DeleteObject = pKey->DeleteObject;
  if ( DeleteObject != FxObject::DeleteObject )
  {
    DeleteObject(pKey);
    return;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&pKey->m_SpinLock.m_Lock);
  _a1->m_ObjectFlags |= 4u;
  v9 = v8;
  m_ObjectState = _a1->m_ObjectState;
  if ( m_ObjectState == 1 )
  {
    m_ParentObject = _a1->m_ParentObject;
    if ( m_ParentObject )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(&m_ParentObject->m_SpinLock.m_Lock);
      if ( m_ParentObject->m_ObjectState != 1 )
      {
        FxObject::TraceDroppedEvent(m_ParentObject, FxObjectDroppedEventRemoveChildObjectInternal);
        KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v12);
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForEarlyDispose);
        KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
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
      KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v12);
      _a1->m_ParentObject = 0LL;
    }
    m_ObjectFlags = _a1->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v9 )
      goto LABEL_204;
    if ( (m_ObjectFlags & 0x200) != 0 )
    {
      v84 = _a1->FxPagedObject::FxObject::m_Globals;
      if ( v84->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !_a1->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(v84, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a1->m_ObjectState, 9u);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Lock) - 32) = 9;
    }
    v17 = (_a1->m_ObjectFlags & 0x20) == 0;
    _a1->m_ObjectState = 9;
    if ( !v17 )
    {
      if ( v9 )
        goto LABEL_204;
    }
    v18 = _a1->m_ChildListHead.Flink;
    p_m_ChildListHead = &_a1->m_ChildListHead;
    if ( v18 != &_a1->m_ChildListHead )
    {
      while ( !v9 || ((__int64)v18[-3].Flink & 0x10) == 0 )
      {
        v18 = v18->Flink;
        if ( v18 == p_m_ChildListHead )
          goto LABEL_20;
      }
LABEL_204:
      FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
      return;
    }
LABEL_20:
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
    v20 = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
    {
LABEL_21:
      if ( ((_a1->m_ObjectFlags & 0x800) == 0 || _a1->Dispose(_a1)) && (_a1->m_ObjectFlags & 0x400) != 0 )
        FxObject::CallCleanupCallbacks(_a1);
      if ( (_a1->m_ObjectFlags & 0x200) != 0 )
      {
        v93 = _a1->FxPagedObject::FxObject::m_Globals;
        if ( v93->FxVerboseOn )
        {
          v94 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !_a1->m_ObjectSize )
            v94 = 0LL;
          WPP_IFR_SF_qqLL(v93, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, v94, _a1->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Lock) - 32) = 10;
      }
      _a1->m_ObjectState = 10;
      FxObject::DestroyChildren(_a1);
      Release = _a1->Release;
      if ( Release == FxObject::Release )
      {
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          v95 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
          if ( v95 )
            FxTagTracker::UpdateTagHistory(
              v95,
              0LL,
              1246,
              "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
              TagRelease,
              _a1->m_Refcnt - 1);
        }
        if ( _InterlockedDecrement(&_a1->m_Refcnt) )
          return;
        v23 = _a1->m_ObjectFlags;
        if ( (v23 & 0x20) == 0 && ((v23 & 0x10) == 0 || !KeGetCurrentIrql()) )
        {
          if ( (v23 & 0x80u) != 0 )
          {
            v24 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
            if ( v24 )
              FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_ChildEntry.Blink);
          }
          else
          {
            v24 = 0LL;
          }
          m_ObjectSize = _a1->m_ObjectSize;
          if ( m_ObjectSize && (_a1->m_ObjectFlags & 8) != 0 )
          {
            for ( i = (FxRegKey_vtbl **)((char *)&_a1->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
            {
              v27 = (void (__fastcall *)(unsigned __int64))i[2];
              if ( v27 )
              {
                v27((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
                i[2] = 0LL;
              }
              v28 = (void (__fastcall *)(unsigned __int64))i[3];
              if ( v28 )
              {
                v28((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
                i[3] = 0LL;
              }
            }
            v29 = _a1->m_ObjectSize;
            LOBYTE(FxVerifyLeakDetection) = 1;
            if ( v29 )
            {
              v30 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v29);
              if ( v30 )
              {
                do
                {
                  v31 = (_QWORD *)v30[1];
                  if ( !(_BYTE)FxVerifyLeakDetection )
                    FxPoolFree(v30);
                  LOBYTE(FxVerifyLeakDetection) = 0;
                  v30 = v31;
                }
                while ( v31 );
              }
            }
          }
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            if ( BYTE4(_a1[-1].m_Lock) )
            {
              _InterlockedDecrement(&_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->ObjectCnt);
              if ( _a1->m_Type == 4098
                && _InterlockedExchangeAdd(
                     &_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->DeviceCnt,
                     0xFFFFFFFF) != 1 )
              {
                FxVerifyLeakDetection = _a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection;
                _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
              }
            }
          }
          if ( v24 )
          {
            _a1[-1].m_ChildEntry.Blink = 0LL;
            FxTagTracker::`scalar deleting destructor'(v24, (unsigned int)FxVerifyLeakDetection);
          }
          SelfDestruct = _a1->SelfDestruct;
          if ( SelfDestruct != FxObject::SelfDestruct )
          {
            _a1->SelfDestruct(_a1);
            return;
          }
          v33 = (void *(__fastcall *)(FxRequest *, unsigned int))_a1->~FxObject;
          if ( (char *)v33 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
            v34 = _a1->m_Key;
            if ( v34 )
            {
              ZwClose(v34);
              _a1->m_Key = 0LL;
            }
            m_Lock = _a1->m_Lock;
            _a1->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
            if ( m_Lock )
            {
              FxPoolFree(m_Lock);
              _a1->m_Lock = 0LL;
            }
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              _a1 = (FxRegKey *)((char *)_a1 - 48);
            if ( !_a1 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
            {
LABEL_60:
              v36 = (FX_POOL_TRACKER *)_a1[-1].m_Key;
              if ( _a1[-1].m_Globals->FxPoolTrackingOn )
              {
                if ( FxIsPagedPoolType(v36->PoolType) )
                  FxPoolRemovePagedAllocateTracker(v36);
                else
                  FxPoolRemoveNonPagedAllocateTracker(v36);
                memset(v36, 0, v36->Size + 64);
              }
              v37 = v36;
              goto LABEL_62;
            }
          }
          else
          {
            if ( v33 == FxRequest::`scalar deleting destructor' )
            {
              _a1->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
              v43 = (_MDL *)_a1[1].m_Key;
              if ( v43 )
              {
                if ( _a1->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
                  FxMdlFreeDebug(_a1->FxPagedObject::FxObject::m_Globals, (_MDL *)_a1[1].m_Key);
                else
                  IoFreeMdl(v43);
              }
              v44 = _a1[1].m_ChildListHead.Blink;
              v45 = *(_QWORD *)&_a1[1].m_ObjectFlags;
              if ( v44 )
              {
                if ( v45 )
                  ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v44->Flink[1].Blink)(v44, _a1);
                v96 = _a1[1].m_ChildListHead.Blink;
                if ( v96 )
                  ((void (__fastcall *)(_LIST_ENTRY *, __int64))v96->Flink->Flink)(v96, 1LL);
              }
              if ( v45 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
                IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
              v46 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
              if ( v46 )
                FxRequestTimer::`scalar deleting destructor'(v46, (unsigned int)SelfDestruct);
              _a1->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              {
                Next = (FxVerifierLock *)_a1[-1].m_DisposeSingleEntry.Next;
                if ( Next )
                {
                  FxVerifierLock::`scalar deleting destructor'(Next, (unsigned int)SelfDestruct);
                  _a1[-1].m_DisposeSingleEntry.Next = 0LL;
                }
              }
              LOBYTE(_a1->m_Lock) = 0;
              FxObject::~FxObject(_a1);
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                _a1 = (FxRegKey *)((char *)_a1 - 48);
              FxPoolFree(_a1);
              return;
            }
            if ( (char *)v33 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
            {
              v33((FxRequest *)_a1, 1u);
              return;
            }
            _a1->__vftable = (FxRegKey_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            _a1->m_Lock = (MxPagedLock *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              _a1 = (FxRegKey *)((char *)_a1 - 48);
            if ( !_a1 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
              goto LABEL_60;
          }
          v37 = (FX_POOL_TRACKER *)_a1;
LABEL_62:
          ExFreePoolWithTag(v37, 0);
          return;
        }
LABEL_315:
        FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(_a1->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, _a1);
        return;
      }
      if ( (char *)Release == (char *)FxRequest::Release )
      {
        v38 = BYTE2(_a1[2].m_Device);
        v39 = BYTE5(_a1[1].m_ChildEntry.Blink);
        v40 = BYTE6(_a1[1].m_Lock);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          v98 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
          if ( v98 )
            FxTagTracker::UpdateTagHistory(
              v98,
              0LL,
              1246,
              "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
              TagRelease,
              _a1->m_Refcnt - 1);
        }
        v41 = _InterlockedDecrement(&_a1->m_Refcnt);
        if ( v41 )
          goto LABEL_66;
        v47 = _a1->m_ObjectFlags;
        if ( (v47 & 0x20) != 0 || (v47 & 0x10) != 0 && KeGetCurrentIrql() )
        {
          FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
          FxDisposeList::Add(_a1->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, _a1);
          goto LABEL_66;
        }
        if ( (v47 & 0x80u) != 0 )
        {
          v48 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
          v111 = v48;
          if ( v48 )
          {
            FxTagTracker::CheckForAbandondedTags(v48);
            v48 = v111;
          }
        }
        else
        {
          v48 = 0LL;
          v111 = 0LL;
        }
        v49 = _a1->m_ObjectSize;
        if ( v49 && (_a1->m_ObjectFlags & 8) != 0 )
        {
          v50 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v49);
          if ( v50 )
          {
            do
            {
              v51 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v50[2];
              if ( v51 )
              {
                v51((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v48);
                v50[2] = 0LL;
              }
              v52 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v50[3];
              if ( v52 )
              {
                v52((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v48);
                v50[3] = 0LL;
              }
              v50 = (_QWORD *)v50[1];
            }
            while ( v50 );
            v48 = v111;
          }
          v53 = _a1->m_ObjectSize;
          LOBYTE(FxVerifyLeakDetection) = 1;
          if ( v53 )
          {
            v54 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v53);
            if ( v54 )
            {
              do
              {
                v55 = (_QWORD *)v54[1];
                if ( !(_BYTE)FxVerifyLeakDetection )
                  FxPoolFree(v54);
                LOBYTE(FxVerifyLeakDetection) = 0;
                v54 = v55;
              }
              while ( v55 );
              v48 = v111;
            }
          }
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          if ( BYTE4(_a1[-1].m_Lock) )
          {
            _InterlockedDecrement(&_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->ObjectCnt);
            if ( _a1->m_Type == 4098
              && _InterlockedExchangeAdd(
                   &_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->DeviceCnt,
                   0xFFFFFFFF) != 1 )
            {
              FxVerifyLeakDetection = _a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection;
              _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
            }
          }
        }
        if ( v48 )
        {
          _a1[-1].m_ChildEntry.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'(v48, (unsigned int)FxVerifyLeakDetection);
        }
        v56 = _a1->__vftable;
        v57 = (void (__fastcall *)(FxRequestFromLookaside *))_a1->SelfDestruct;
        if ( v57 == FxRequestFromLookaside::SelfDestruct )
        {
          v58 = (_MDL *)_a1[1].m_Key;
          m_DeviceBase = _a1->m_DeviceBase;
          _a1->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
          if ( v58 )
          {
            if ( _a1->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
              FxMdlFreeDebug(_a1->FxPagedObject::FxObject::m_Globals, v58);
            else
              IoFreeMdl(v58);
          }
          v60 = _a1[1].m_ChildListHead.Blink;
          v61 = *(_QWORD *)&_a1[1].m_ObjectFlags;
          if ( v60 )
          {
            if ( v61 )
              ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v60->Flink[1].Blink)(v60, _a1);
            v99 = _a1[1].m_ChildListHead.Blink;
            if ( v99 )
              ((void (__fastcall *)(_LIST_ENTRY *, __int64))v99->Flink->Flink)(v99, 1LL);
          }
          if ( v61 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
            IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
          v62 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v62 )
            FxRequestTimer::`scalar deleting destructor'(v62, (unsigned int)v56);
          _a1->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v100 = (FxVerifierLock *)_a1[-1].m_DisposeSingleEntry.Next;
            if ( v100 )
            {
              FxVerifierLock::`scalar deleting destructor'(v100, (unsigned int)v56);
              _a1[-1].m_DisposeSingleEntry.Next = 0LL;
            }
          }
          LOBYTE(_a1->m_Lock) = 0;
          FxObject::~FxObject(_a1);
          if ( BYTE3(_a1[2].m_Device) )
          {
            v101 = FxObject::_CleanupPointer(_a1->FxPagedObject::FxObject::m_Globals, _a1);
            ExFreePoolWithTag(v101->Base, 0);
          }
          else
          {
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v63 = (FxRegKey *)((char *)_a1 - 48);
            else
              v63 = _a1;
            if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
              FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v63[-1].m_Key);
            v64 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v64 && *(_WORD *)(v64 + 8) == 4354 && *(_BYTE *)(v64 + 1667) )
            {
              v76 = (_SLIST_ENTRY *)v63[-1].m_Key;
              if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
                (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v76);
              else
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, v76);
            }
            else
            {
              v65 = (_SLIST_ENTRY *)v63[-1].m_Key;
              p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
              ++HIDWORD(p_m_SpinLock[1].m_Lock);
              if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
              {
                ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
                ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v65);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v65);
              }
            }
          }
          goto LABEL_66;
        }
        if ( (char *)v57 != (char *)FxObject::SelfDestruct )
        {
          v57((FxRequestFromLookaside *)_a1);
          goto LABEL_66;
        }
        v71 = (void *(__fastcall *)(FxRequest *, unsigned int))v56->~FxObject;
        if ( (char *)v71 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
          v72 = _a1->m_Key;
          if ( v72 )
          {
            ZwClose(v72);
            _a1->m_Key = 0LL;
          }
          v73 = _a1->m_Lock;
          _a1->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
          if ( v73 )
          {
            FxPoolFree(v73);
            _a1->m_Lock = 0LL;
          }
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            p_Blink = &_a1[-1].m_ChildEntry.Blink;
          else
            p_Blink = (_LIST_ENTRY **)_a1;
          if ( !p_Blink )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        }
        else
        {
          if ( v71 == FxRequest::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
            v77 = (_MDL *)_a1[1].m_Key;
            if ( v77 )
            {
              if ( _a1->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
                FxMdlFreeDebug(_a1->FxPagedObject::FxObject::m_Globals, (_MDL *)_a1[1].m_Key);
              else
                IoFreeMdl(v77);
            }
            v78 = _a1[1].m_ChildListHead.Blink;
            v79 = *(_QWORD *)&_a1[1].m_ObjectFlags;
            if ( v78 )
            {
              if ( v79 )
                ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v78->Flink[1].Blink)(v78, _a1);
              v102 = _a1[1].m_ChildListHead.Blink;
              if ( v102 )
                ((void (__fastcall *)(_LIST_ENTRY *, __int64))v102->Flink->Flink)(v102, 1LL);
            }
            if ( v79 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
              IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
            v80 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v80 )
              FxRequestTimer::`scalar deleting destructor'(v80, (unsigned int)v56);
            _a1->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            {
              v103 = (FxVerifierLock *)_a1[-1].m_DisposeSingleEntry.Next;
              if ( v103 )
              {
                FxVerifierLock::`scalar deleting destructor'(v103, (unsigned int)v56);
                _a1[-1].m_DisposeSingleEntry.Next = 0LL;
              }
            }
            LOBYTE(_a1->m_Lock) = 0;
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v81 = &_a1[-1].m_ChildEntry.Blink;
            else
              v81 = (_LIST_ENTRY **)_a1;
            FxPoolFree(v81);
            goto LABEL_66;
          }
          if ( (char *)v71 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
          {
            v71((FxRequest *)_a1, 1u);
LABEL_66:
            if ( v38 && v41 == 1 && BYTE6(_a1[1].m_ChildEntry.Blink) )
            {
              FxIoQueue::ReturnReservedRequest((FxIoQueue *)_a1[2].m_ChildEntry.Blink, (FxRequest *)_a1);
            }
            else if ( v39 )
            {
              if ( v40 )
              {
                if ( v41 == 1 )
                {
                  if ( BYTE6(_a1[1].m_ChildEntry.Blink) )
                  {
                    v104 = BYTE5(_a1[1].m_Lock);
                    v105 = (FxIoQueue *)_a1[1].m_Globals;
                    v106 = *(_IRP **)&_a1[1].m_ObjectFlags;
                    v107 = BYTE4(_a1[1].m_Lock);
                    BYTE5(_a1[1].m_Lock) = 0;
                    _a1[1].m_Globals = 0LL;
                    *(_QWORD *)&_a1[1].m_ObjectFlags = 0LL;
                    IofCompleteRequest(v106, v107);
                    if ( v104 == 1 )
                      FxIoQueue::PostRequestCompletedCallback(v105, v108);
                  }
                }
              }
            }
            return;
          }
          _a1->__vftable = (FxRegKey_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
          _a1->m_Lock = (MxPagedLock *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            p_Blink = &_a1[-1].m_ChildEntry.Blink;
          else
            p_Blink = (_LIST_ENTRY **)_a1;
          if ( !p_Blink )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        }
        if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
        {
          v75 = (FX_POOL_TRACKER *)*(p_Blink - 2);
          if ( LOBYTE((*(p_Blink - 1))[16].Blink) )
          {
            if ( FxIsPagedPoolType(v75->PoolType) )
              FxPoolRemovePagedAllocateTracker(v75);
            else
              FxPoolRemoveNonPagedAllocateTracker(v75);
            memset(v75, 0, v75->Size + 64);
          }
          ExFreePoolWithTag(v75, 0);
        }
        else
        {
          ExFreePoolWithTag(p_Blink, 0);
        }
        goto LABEL_66;
      }
      if ( (char *)Release != (char *)FxMemoryObject::Release )
      {
        Release(_a1, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
        return;
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v109 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
        if ( v109 )
          FxTagTracker::UpdateTagHistory(
            v109,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) == 1 )
      {
        v42 = _a1->m_ObjectFlags;
        if ( (v42 & 0x20) == 0 && ((v42 & 0x10) == 0 || !KeGetCurrentIrql()) )
        {
          FxObject::ProcessDestroy(_a1);
          return;
        }
        goto LABEL_315;
      }
    }
    else
    {
      while ( 1 )
      {
        v67 = (unsigned __int64)&v20[-5].Blink;
        v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v20[-1]);
        if ( WORD1(v20[-3].Flink) != 1 )
        {
          switch ( WORD1(v20[-3].Flink) )
          {
            case 5:
              v70 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v20[-5].Blink, v68, 0);
              goto LABEL_147;
            case 7:
              v70 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v20[-5].Blink, v68, 0);
              goto LABEL_147;
            default:
              FxObject::TraceDroppedEvent((FxObject *)&v20[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
              KeReleaseSpinLock((PKSPIN_LOCK)(v67 + 56), v68);
              goto LABEL_148;
          }
        }
        if ( (*(_WORD *)(v67 + 24) & 0x200) != 0 )
        {
          v86 = *(_FX_DRIVER_GLOBALS **)(v67 + 16);
          if ( v86->FxVerboseOn )
          {
            v87 = (const void *)(v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v67 + 10) )
              v87 = 0LL;
            WPP_IFR_SF_qqLL(v86, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v20[-5].Blink, v87, 1u, 3u);
          }
          if ( *(char *)(v67 + 24) < 0 )
            *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v20[-6]) + v67 - 32) = 3;
        }
        *(_WORD *)(v67 + 26) = 3;
        if ( (*(_WORD *)(v67 + 24) & 0x200) != 0 )
        {
          v88 = *(_FX_DRIVER_GLOBALS **)(v67 + 16);
          if ( v88->FxVerboseOn )
          {
            v89 = (const void *)(v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v67 + 10) )
              v89 = 0LL;
            WPP_IFR_SF_qqLL(v88, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v20[-5].Blink, v89, 3u, 4u);
          }
          if ( *(char *)(v67 + 24) < 0 )
            *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v20[-6]) + v67 - 32) = 4;
        }
        *(_WORD *)(v67 + 26) = 4;
        if ( FxObject::DisposeChildrenWorker((FxObject *)&v20[-5].Blink, FxObjectStateDeferedDisposing, v68, 0) )
        {
          v69 = *(_WORD *)(v67 + 24);
          if ( (v69 & 0x104) == 0x104 )
          {
            FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v20[-5].Blink, v68, 0);
          }
          else
          {
            if ( (v69 & 0x200) != 0 )
            {
              v90 = *(_FX_DRIVER_GLOBALS **)(v67 + 16);
              if ( v90->FxVerboseOn )
              {
                v91 = (const void *)(v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !*(_WORD *)(v67 + 10) )
                  v91 = 0LL;
                WPP_IFR_SF_qqLL(
                  v90,
                  5u,
                  0x14u,
                  0xAu,
                  WPP_FxObject_hpp_Traceguids,
                  &v20[-5].Blink,
                  v91,
                  *(unsigned __int16 *)(v67 + 26),
                  2u);
              }
              if ( *(char *)(v67 + 24) < 0 )
                *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v20[-6]) + v67 - 32) = 2;
            }
            *(_WORD *)(v67 + 26) = 2;
          }
          v70 = 1;
        }
        else
        {
          v70 = 0;
        }
LABEL_147:
        if ( !v70 )
          break;
LABEL_148:
        v20 = v20->Flink;
        if ( v20 == p_m_ChildListHead )
          goto LABEL_21;
      }
      v92 = KeAcquireSpinLockRaiseToDpc(&_a1->m_SpinLock.m_Lock);
      FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v92);
    }
  }
  else
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
      return;
    }
    v83 = _a1->m_ParentObject;
    if ( v83 )
    {
      if ( FxObject::RemoveChildObjectInternal(v83, _a1) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
        return;
      }
      _a1->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(_a1, v9, 1u);
  }
}
