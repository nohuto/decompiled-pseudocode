/*
 * XREFs of imp_WdfRegistryClose @ 0x1C000F230
 * Callers:
 *     <none>
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
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Key)
{
  FxTagTracker *v2; // r13
  FxRegKey *v3; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  FxRegKey *_a1; // rbx
  void (__fastcall *DeleteObject)(FxObject *); // rax
  KIRQL v9; // al
  KIRQL v10; // bp
  int m_ObjectState; // eax
  FxObject *v12; // rdi
  KIRQL v13; // r15
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  bool v18; // zf
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v21; // rsi
  unsigned int v22; // edx
  unsigned int v23; // r8d
  __int64 (__fastcall *Release)(FxObject *, void *, __int64, char *); // rax
  unsigned __int16 v25; // cx
  FxTagTracker *v26; // rbp
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v29)(unsigned __int64); // rax
  void (__fastcall *v30)(unsigned __int64); // rax
  unsigned __int16 v31; // ax
  char v32; // dl
  _QWORD *v33; // rcx
  _QWORD *v34; // rdi
  void (__fastcall *SelfDestruct)(FxObject *, unsigned int); // rdx
  void (__fastcall *v36)(FxObject *); // rax
  void *v37; // rcx
  MxPagedLock *m_Lock; // rcx
  FX_POOL_TRACKER *v39; // rdi
  FX_POOL_TRACKER *v40; // rcx
  char v41; // bp
  bool v42; // si
  char v43; // r15
  signed __int32 v44; // edi
  unsigned __int16 v45; // ax
  _MDL *v46; // rdx
  _LIST_ENTRY *v47; // rcx
  __int64 v48; // rdi
  FxRequestTimer *v49; // rcx
  unsigned __int16 v50; // cx
  unsigned __int16 v51; // cx
  _QWORD *j; // r14
  void (__fastcall *v53)(unsigned __int64); // rax
  void (__fastcall *v54)(unsigned __int64); // rax
  unsigned __int16 v55; // ax
  char v56; // dl
  _QWORD *v57; // rcx
  _QWORD *v58; // r14
  FxRegKey_vtbl *v59; // rdx
  void (__fastcall *v60)(FxObject *); // rax
  _MDL *v61; // rdx
  FxDeviceBase *v62; // r14
  _LIST_ENTRY *v63; // rcx
  __int64 v64; // r12
  FxRequestTimer *v65; // rcx
  FxRegKey *v66; // r12
  __int64 v67; // rax
  _SLIST_ENTRY *v68; // r12
  MxLock *p_m_SpinLock; // r14
  unsigned __int64 p_Blink; // rbp
  KIRQL v71; // al
  KIRQL v72; // r12
  __int16 v73; // cx
  unsigned __int8 v74; // al
  void (__fastcall *v75)(FxObject *); // rax
  void *v76; // rcx
  MxPagedLock *v77; // rcx
  $86E0B543522AE784A9E4C6EB4917680E *v78; // rax
  FX_POOL_TRACKER *v79; // r14
  _MDL *v80; // rdx
  _LIST_ENTRY *v81; // rcx
  __int64 v82; // r14
  FxRequestTimer *v83; // rcx
  _QWORD *p_m_DeviceBase; // rcx
  FxObject *m_ParentObject; // rcx
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v87; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v89; // r10
  const void *v90; // rax
  _FX_DRIVER_GLOBALS *v91; // rcx
  const void *v92; // rax
  _FX_DRIVER_GLOBALS *v93; // r10
  const void *v94; // rcx
  KIRQL v95; // di
  _FX_DRIVER_GLOBALS *v96; // r10
  const void *v97; // rcx
  FxTagTracker *m_DeviceBase; // rcx
  FxVerifierLock *v99; // rcx
  _LIST_ENTRY *v100; // rcx
  FxVerifierLock *v101; // rcx
  FxTagTracker *v102; // rcx
  _LIST_ENTRY *v103; // rcx
  FxVerifierLock *v104; // rcx
  FX_POOL_HEADER *v105; // rax
  FxVerifierLock *v106; // rcx
  _LIST_ENTRY *v107; // rcx
  FxVerifierLock *v108; // rcx
  FxRequestCompletionState v109; // esi
  FxIoQueue *v110; // rdi
  _IRP *v111; // rcx
  CCHAR v112; // dl
  FxTagTracker *v113; // rcx
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]
  FxRegKey *pKey; // [rsp+A0h] [rbp+18h] BYREF

  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v2 = 0LL;
  v3 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRegKey *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4102 )
  {
    pKey = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v3 = pKey;
  }
  m_Globals = v3->FxPagedObject::FxObject::m_Globals;
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
  m_Key = v3->m_Key;
  v3->m_Key = 0LL;
  ZwClose(m_Key);
  _a1 = pKey;
  DeleteObject = pKey->DeleteObject;
  if ( DeleteObject != FxObject::DeleteObject )
  {
    DeleteObject(pKey);
    return;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&pKey->m_SpinLock.m_Lock);
  _a1->m_ObjectFlags |= 4u;
  v10 = v9;
  m_ObjectState = _a1->m_ObjectState;
  if ( m_ObjectState != 1 )
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v10);
      return;
    }
    m_ParentObject = _a1->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, _a1) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v10);
        return;
      }
      _a1->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(_a1, v10, 1u);
    return;
  }
  v12 = _a1->m_ParentObject;
  if ( v12 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&v12->m_SpinLock.m_Lock);
    if ( v12->m_ObjectState != 1 )
    {
      FxObject::TraceDroppedEvent(v12, FxObjectDroppedEventRemoveChildObjectInternal);
      KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v13);
      FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForEarlyDispose);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v10);
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
    KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v13);
    _a1->m_ParentObject = 0LL;
  }
  m_ObjectFlags = _a1->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v10 )
    goto LABEL_205;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v87 = _a1->FxPagedObject::FxObject::m_Globals;
    if ( v87->FxVerboseOn )
    {
      if ( _a1->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(v87, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a1->m_ObjectState, 9u);
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Globals) - 16) = 9;
  }
  v18 = (_a1->m_ObjectFlags & 0x20) == 0;
  _a1->m_ObjectState = 9;
  if ( !v18 )
  {
    if ( v10 )
      goto LABEL_205;
  }
  v19 = _a1->m_ChildListHead.Flink;
  p_m_ChildListHead = &_a1->m_ChildListHead;
  if ( v19 != &_a1->m_ChildListHead )
  {
    while ( !v10 || ((__int64)v19[-3].Flink & 0x10) == 0 )
    {
      v19 = v19->Flink;
      if ( v19 == p_m_ChildListHead )
        goto LABEL_20;
    }
LABEL_205:
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v10);
    return;
  }
LABEL_20:
  KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v10);
  v21 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_21:
    if ( ((_a1->m_ObjectFlags & 0x800) == 0 || _a1->Dispose(_a1)) && (_a1->m_ObjectFlags & 0x400) != 0 )
      FxObject::CallCleanupCallbacks(_a1);
    if ( (_a1->m_ObjectFlags & 0x200) != 0 )
    {
      v96 = _a1->FxPagedObject::FxObject::m_Globals;
      if ( v96->FxVerboseOn )
      {
        if ( _a1->m_ObjectSize )
          v97 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v97 = 0LL;
        WPP_IFR_SF_qqLL(v96, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, v97, _a1->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Globals) - 16) = 10;
    }
    _a1->m_ObjectState = 10;
    FxObject::DestroyChildren(_a1);
    Release = (__int64 (__fastcall *)(FxObject *, void *, __int64, char *))_a1->Release;
    if ( Release == FxObject::Release )
    {
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        m_DeviceBase = (FxTagTracker *)_a1[-1].m_DeviceBase;
        if ( m_DeviceBase )
          FxTagTracker::UpdateTagHistory(
            m_DeviceBase,
            0LL,
            1215,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) != 1 )
        return;
      v25 = _a1->m_ObjectFlags;
      if ( (v25 & 0x20) == 0 && ((v25 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        if ( (v25 & 0x80u) != 0 )
        {
          v26 = (FxTagTracker *)_a1[-1].m_DeviceBase;
          if ( v26 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_DeviceBase);
        }
        else
        {
          v26 = 0LL;
        }
        m_ObjectSize = _a1->m_ObjectSize;
        if ( m_ObjectSize && (_a1->m_ObjectFlags & 8) != 0 )
        {
          for ( i = (FxRegKey_vtbl **)((char *)&_a1->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
          {
            v29 = (void (__fastcall *)(unsigned __int64))i[2];
            if ( v29 )
            {
              v29((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              i[2] = 0LL;
            }
            v30 = (void (__fastcall *)(unsigned __int64))i[3];
            if ( v30 )
            {
              v30((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              i[3] = 0LL;
            }
          }
          v31 = _a1->m_ObjectSize;
          v32 = 1;
          if ( v31 )
          {
            v33 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v31);
            if ( v33 )
            {
              do
              {
                v34 = (_QWORD *)v33[1];
                if ( !v32 )
                  FxPoolFree(v33);
                v32 = 0;
                v33 = v34;
              }
              while ( v34 );
            }
          }
        }
        if ( v26 )
        {
          _a1[-1].m_DeviceBase = 0LL;
          FxTagTracker::`scalar deleting destructor'(v26, 1u);
        }
        SelfDestruct = (void (__fastcall *)(FxObject *, unsigned int))_a1->SelfDestruct;
        if ( SelfDestruct != FxObject::SelfDestruct )
        {
          _a1->SelfDestruct(_a1);
          return;
        }
        v36 = _a1->~FxObject;
        if ( (char *)v36 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          v37 = _a1->m_Key;
          if ( v37 )
          {
            ZwClose(v37);
            _a1->m_Key = 0LL;
          }
          m_Lock = _a1->m_Lock;
          _a1->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
          if ( m_Lock )
          {
            FxPoolFree(m_Lock);
            _a1->m_Lock = 0LL;
          }
          FxObject::~FxObject(_a1, (unsigned int)SelfDestruct, v23);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRegKey *)((char *)_a1 - 32);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
          {
LABEL_59:
            v39 = (FX_POOL_TRACKER *)_a1[-1].m_Key;
            if ( _a1[-1].m_Globals->FxPoolTrackingOn )
            {
              if ( FxIsPagedPoolType(v39->PoolType) )
                FxPoolRemovePagedAllocateTracker(v39);
              else
                FxPoolRemoveNonPagedAllocateTracker(v39);
              memset(v39, 0, v39->Size + 64);
            }
            v40 = v39;
            goto LABEL_61;
          }
        }
        else
        {
          if ( (char *)v36 != (char *)FxFileObject::`vector deleting destructor' )
          {
            if ( (char *)v36 == (char *)FxRequest::`scalar deleting destructor' )
            {
              _a1->__vftable = (FxRegKey_vtbl *)&FxRequestBase::`vftable';
              v46 = (_MDL *)_a1[1].m_Key;
              if ( v46 )
                FxMdlFree(_a1->FxPagedObject::FxObject::m_Globals, v46);
              v47 = _a1[1].m_ChildListHead.Blink;
              v48 = *(_QWORD *)&_a1[1].m_ObjectFlags;
              if ( v47 )
              {
                if ( v48 )
                  ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v47->Flink[1].Blink)(v47, _a1);
                v100 = _a1[1].m_ChildListHead.Blink;
                if ( v100 )
                  ((void (__fastcall *)(_LIST_ENTRY *, __int64))v100->Flink->Flink)(v100, 1LL);
              }
              if ( v48 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
                IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
              v49 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
              if ( v49 )
                FxRequestTimer::`scalar deleting destructor'(v49, 1u);
              _a1->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              {
                v101 = (FxVerifierLock *)_a1[-1].m_Lock;
                if ( v101 )
                {
                  FxVerifierLock::`scalar deleting destructor'(v101, 1u);
                  _a1[-1].m_Lock = 0LL;
                }
              }
              LOBYTE(_a1->m_Lock) = 0;
              FxObject::~FxObject(_a1, (unsigned int)v46, v23);
              if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                _a1 = (FxRegKey *)((char *)_a1 - 32);
              FxPoolFree(_a1);
            }
            else
            {
              ((void (__fastcall *)(FxRegKey *, __int64))v36)(_a1, 1LL);
            }
            return;
          }
          _a1->m_Globals = (_FX_DRIVER_GLOBALS *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
          _a1->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v99 = (FxVerifierLock *)_a1[-1].m_Lock;
            if ( v99 )
            {
              FxVerifierLock::`scalar deleting destructor'(v99, 1u);
              _a1[-1].m_Lock = 0LL;
            }
          }
          LOBYTE(_a1->m_Lock) = 0;
          FxObject::~FxObject(_a1, (unsigned int)SelfDestruct, v23);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRegKey *)((char *)_a1 - 32);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
            goto LABEL_59;
        }
        v40 = (FX_POOL_TRACKER *)_a1;
LABEL_61:
        ExFreePoolWithTag(v40, 0);
        return;
      }
LABEL_306:
      FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(_a1->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, _a1);
      return;
    }
    if ( (char *)Release == (char *)FxRequest::Release )
    {
      v41 = BYTE2(_a1[2].m_Device);
      v42 = BYTE5(_a1[1].m_ChildEntry.Blink) == 0;
      v43 = BYTE6(_a1[1].m_Lock);
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v102 = (FxTagTracker *)_a1[-1].m_DeviceBase;
        if ( v102 )
          FxTagTracker::UpdateTagHistory(
            v102,
            0LL,
            1215,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      v44 = _InterlockedDecrement(&_a1->m_Refcnt);
      if ( v44 )
        goto LABEL_65;
      v50 = _a1->m_ObjectFlags;
      if ( (v50 & 0x20) != 0 || (v50 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(_a1->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, _a1);
      }
      else
      {
        if ( (v50 & 0x80u) != 0 )
        {
          v2 = (FxTagTracker *)_a1[-1].m_DeviceBase;
          if ( v2 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_DeviceBase);
        }
        v51 = _a1->m_ObjectSize;
        if ( v51 && (_a1->m_ObjectFlags & 8) != 0 )
        {
          for ( j = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v51); j; j = (_QWORD *)j[1] )
          {
            v53 = (void (__fastcall *)(unsigned __int64))j[2];
            if ( v53 )
            {
              v53((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              j[2] = 0LL;
            }
            v54 = (void (__fastcall *)(unsigned __int64))j[3];
            if ( v54 )
            {
              v54((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              j[3] = 0LL;
            }
          }
          v55 = _a1->m_ObjectSize;
          v56 = 1;
          if ( v55 )
          {
            v57 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v55);
            if ( v57 )
            {
              do
              {
                v58 = (_QWORD *)v57[1];
                if ( !v56 )
                  FxPoolFree(v57);
                v56 = 0;
                v57 = v58;
              }
              while ( v58 );
            }
          }
        }
        if ( v2 )
        {
          _a1[-1].m_DeviceBase = 0LL;
          FxTagTracker::`scalar deleting destructor'(v2, 1u);
        }
        v59 = _a1->__vftable;
        v60 = _a1->SelfDestruct;
        if ( (char *)v60 == (char *)FxRequestFromLookaside::SelfDestruct )
        {
          v61 = (_MDL *)_a1[1].m_Key;
          v62 = _a1->m_DeviceBase;
          _a1->__vftable = (FxRegKey_vtbl *)&FxRequestBase::`vftable';
          if ( v61 )
            FxMdlFree(_a1->FxPagedObject::FxObject::m_Globals, v61);
          v63 = _a1[1].m_ChildListHead.Blink;
          v64 = *(_QWORD *)&_a1[1].m_ObjectFlags;
          if ( v63 )
          {
            if ( v64 )
              ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v63->Flink[1].Blink)(v63, _a1);
            v103 = _a1[1].m_ChildListHead.Blink;
            if ( v103 )
              ((void (__fastcall *)(_LIST_ENTRY *, __int64))v103->Flink->Flink)(v103, 1LL);
          }
          if ( v64 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
            IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
          v65 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v65 )
            FxRequestTimer::`scalar deleting destructor'(v65, 1u);
          _a1->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v104 = (FxVerifierLock *)_a1[-1].m_Lock;
            if ( v104 )
            {
              FxVerifierLock::`scalar deleting destructor'(v104, 1u);
              _a1[-1].m_Lock = 0LL;
            }
          }
          LOBYTE(_a1->m_Lock) = 0;
          FxObject::~FxObject(_a1, (unsigned int)v61, v23);
          if ( BYTE3(_a1[2].m_Device) )
          {
            v105 = FxObject::_CleanupPointer(_a1->FxPagedObject::FxObject::m_Globals, _a1);
            ExFreePoolWithTag(v105->Base, 0);
          }
          else
          {
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v66 = (FxRegKey *)((char *)_a1 - 32);
            else
              v66 = _a1;
            if ( v62->m_Globals->FxPoolTrackingOn )
              FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v66[-1].m_Key);
            v67 = *(_QWORD *)&v62[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v67 && *(_WORD *)(v67 + 8) == 4354 && *(_BYTE *)(v67 + 1651) )
            {
              FxFreeToNPagedLookasideListNoTracking((_NPAGED_LOOKASIDE_LIST *)&v62[2].m_SpinLock, v66[-1].m_Key);
            }
            else
            {
              v68 = (_SLIST_ENTRY *)v66[-1].m_Key;
              p_m_SpinLock = &v62[2].m_SpinLock;
              ++HIDWORD(p_m_SpinLock[1].m_Lock);
              if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
              {
                ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
                ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v68);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v68);
              }
            }
          }
        }
        else if ( (char *)v60 == (char *)FxObject::SelfDestruct )
        {
          v75 = v59->~FxObject;
          if ( (char *)v75 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            v76 = _a1->m_Key;
            if ( v76 )
            {
              ZwClose(v76);
              _a1->m_Key = 0LL;
            }
            v77 = _a1->m_Lock;
            _a1->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
            if ( v77 )
            {
              FxPoolFree(v77);
              _a1->m_Lock = 0LL;
            }
            FxObject::~FxObject(_a1, (unsigned int)v59, v23);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v78 = &_a1[-1].96;
            else
              v78 = ($86E0B543522AE784A9E4C6EB4917680E *)_a1;
            if ( !v78 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v75 != (char *)FxFileObject::`vector deleting destructor' )
            {
              if ( (char *)v75 == (char *)FxRequest::`scalar deleting destructor' )
              {
                _a1->__vftable = (FxRegKey_vtbl *)&FxRequestBase::`vftable';
                v80 = (_MDL *)_a1[1].m_Key;
                if ( v80 )
                  FxMdlFree(_a1->FxPagedObject::FxObject::m_Globals, v80);
                v81 = _a1[1].m_ChildListHead.Blink;
                v82 = *(_QWORD *)&_a1[1].m_ObjectFlags;
                if ( v81 )
                {
                  if ( v82 )
                    ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v81->Flink[1].Blink)(v81, _a1);
                  v107 = _a1[1].m_ChildListHead.Blink;
                  if ( v107 )
                    ((void (__fastcall *)(_LIST_ENTRY *, __int64))v107->Flink->Flink)(v107, 1LL);
                }
                if ( v82 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
                  IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
                v83 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
                if ( v83 )
                  FxRequestTimer::`scalar deleting destructor'(v83, 1u);
                _a1->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
                if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                {
                  v108 = (FxVerifierLock *)_a1[-1].m_Lock;
                  if ( v108 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v108, 1u);
                    _a1[-1].m_Lock = 0LL;
                  }
                }
                LOBYTE(_a1->m_Lock) = 0;
                FxObject::~FxObject(_a1, (unsigned int)v80, v23);
                if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
                  p_m_DeviceBase = &_a1[-1].m_DeviceBase;
                else
                  p_m_DeviceBase = &_a1->__vftable;
                FxPoolFree(p_m_DeviceBase);
              }
              else
              {
                ((void (__fastcall *)(FxRegKey *, __int64))v75)(_a1, 1LL);
              }
              goto LABEL_65;
            }
            _a1->m_Globals = (_FX_DRIVER_GLOBALS *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
            _a1->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            {
              v106 = (FxVerifierLock *)_a1[-1].m_Lock;
              if ( v106 )
              {
                FxVerifierLock::`scalar deleting destructor'(v106, 1u);
                _a1[-1].m_Lock = 0LL;
              }
            }
            LOBYTE(_a1->m_Lock) = 0;
            FxObject::~FxObject(_a1, (unsigned int)v59, v23);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              v78 = &_a1[-1].96;
            else
              v78 = ($86E0B543522AE784A9E4C6EB4917680E *)_a1;
            if ( !v78 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)v78 & 0xFFF) != 0 )
          {
            v79 = (FX_POOL_TRACKER *)v78[-2].m_DeviceBase;
            if ( LOBYTE(v78[-1].m_DeviceBase[1].m_ParentObject) )
            {
              if ( FxIsPagedPoolType(v79->PoolType) )
                FxPoolRemovePagedAllocateTracker(v79);
              else
                FxPoolRemoveNonPagedAllocateTracker(v79);
              memset(v79, 0, v79->Size + 64);
            }
            ExFreePoolWithTag(v79, 0);
          }
          else
          {
            ExFreePoolWithTag(v78, 0);
          }
        }
        else
        {
          v60(_a1);
        }
      }
LABEL_65:
      if ( v41 && v44 == 1 && BYTE6(_a1[1].m_ChildEntry.Blink) )
      {
        FxIoQueue::ReturnReservedRequest((FxIoQueue *)_a1[2].m_ChildEntry.Blink, (FxRequest *)_a1);
      }
      else if ( !v42 && v43 && v44 == 1 && BYTE6(_a1[1].m_ChildEntry.Blink) )
      {
        v109 = BYTE5(_a1[1].m_Lock);
        v110 = (FxIoQueue *)_a1[1].m_Globals;
        v111 = *(_IRP **)&_a1[1].m_ObjectFlags;
        v112 = BYTE4(_a1[1].m_Lock);
        BYTE5(_a1[1].m_Lock) = 0;
        _a1[1].m_Globals = 0LL;
        *(_QWORD *)&_a1[1].m_ObjectFlags = 0LL;
        IofCompleteRequest(v111, v112);
        FxRequest::PostProcessCompletionForDriverRequest((FxRequest *)_a1, v109, v110);
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
      v113 = (FxTagTracker *)_a1[-1].m_DeviceBase;
      if ( v113 )
        FxTagTracker::UpdateTagHistory(
          v113,
          0LL,
          1215,
          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
          TagRelease,
          _a1->m_Refcnt - 1);
    }
    if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) == 1 )
    {
      v45 = _a1->m_ObjectFlags;
      if ( (v45 & 0x20) == 0 && ((v45 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        FxObject::ProcessDestroy(_a1, v22, v23);
        return;
      }
      goto LABEL_306;
    }
  }
  else
  {
    while ( 1 )
    {
      p_Blink = (unsigned __int64)&v21[-5].Blink;
      v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v21[-1]);
      v72 = v71;
      if ( WORD1(v21[-3].Flink) != 1 )
      {
        switch ( WORD1(v21[-3].Flink) )
        {
          case 5:
            v74 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v21[-5].Blink, v71, 0);
            v2 = 0LL;
            goto LABEL_146;
          case 7:
            v74 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v21[-5].Blink, v71, 0);
            v2 = 0LL;
            goto LABEL_146;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v21[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)(p_Blink + 56), v72);
            v2 = 0LL;
            goto LABEL_147;
        }
      }
      if ( (*(_WORD *)(p_Blink + 24) & 0x200) != 0 )
      {
        v89 = *(_FX_DRIVER_GLOBALS **)(p_Blink + 16);
        if ( v89->FxVerboseOn )
        {
          if ( *(_WORD *)(p_Blink + 10) )
          {
            v90 = (const void *)(p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
            v2 = 0LL;
          }
          else
          {
            v2 = 0LL;
            v90 = 0LL;
          }
          WPP_IFR_SF_qqLL(v89, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v21[-5].Blink, v90, 1u, 3u);
        }
        else
        {
          v2 = 0LL;
        }
        if ( *(char *)(p_Blink + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v21[-5]) + p_Blink - 16) = 3;
      }
      else
      {
        v2 = 0LL;
      }
      *(_WORD *)(p_Blink + 26) = 3;
      if ( (*(_WORD *)(p_Blink + 24) & 0x200) != 0 )
      {
        v91 = *(_FX_DRIVER_GLOBALS **)(p_Blink + 16);
        if ( v91->FxVerboseOn )
        {
          if ( *(_WORD *)(p_Blink + 10) )
            v92 = (const void *)(p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v92 = 0LL;
          WPP_IFR_SF_qqLL(v91, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v21[-5].Blink, v92, 3u, 4u);
        }
        if ( *(char *)(p_Blink + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v21[-5]) + p_Blink - 16) = 4;
      }
      *(_WORD *)(p_Blink + 26) = 4;
      if ( FxObject::DisposeChildrenWorker((FxObject *)&v21[-5].Blink, FxObjectStateDeferedDisposing, v72, 0) )
      {
        v73 = *(_WORD *)(p_Blink + 24);
        if ( (v73 & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v21[-5].Blink, v72, 0);
        }
        else
        {
          if ( (v73 & 0x200) != 0 )
          {
            v93 = *(_FX_DRIVER_GLOBALS **)(p_Blink + 16);
            if ( v93->FxVerboseOn )
            {
              if ( *(_WORD *)(p_Blink + 10) )
                v94 = (const void *)(p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v94 = 0LL;
              WPP_IFR_SF_qqLL(
                v93,
                5u,
                0x14u,
                0xAu,
                WPP_FxObject_hpp_Traceguids,
                &v21[-5].Blink,
                v94,
                *(unsigned __int16 *)(p_Blink + 26),
                2u);
            }
            if ( *(char *)(p_Blink + 24) < 0 )
              *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v21[-5]) + p_Blink - 16) = 2;
          }
          *(_WORD *)(p_Blink + 26) = 2;
        }
        v74 = 1;
      }
      else
      {
        v74 = 0;
      }
LABEL_146:
      if ( !v74 )
        break;
LABEL_147:
      v21 = v21->Flink;
      if ( v21 == p_m_ChildListHead )
        goto LABEL_21;
    }
    v95 = KeAcquireSpinLockRaiseToDpc(&_a1->m_SpinLock.m_Lock);
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v95);
  }
}
