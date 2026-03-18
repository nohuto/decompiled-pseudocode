/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00109C0 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0029D8C (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0066E14 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0087FFC (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088748 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
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
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003FE38 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0066474 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this, __int64 a2, _IRP *m_Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequest *v4; // rbx
  FxObjectDebugLeakDetection *m_Target; // rsi
  FxRequestContext *m_RequestContext; // rcx
  FxTagTracker *v7; // r15
  FxRequestContext *v8; // rdi
  void (__fastcall *CopyParameters)(FxIoContext *, FxRequestBase *); // rax
  int v10; // ecx
  void *UserBuffer; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r10
  _KEVENT *m_TargetCompletionContext; // rdi
  __int64 p_m_CompletionParams; // r8
  unsigned __int64 v15; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v17; // rcx
  _LIST_ENTRY *Blink; // rax
  __int64 (__fastcall *Release)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  unsigned __int8 m_CanComplete; // cl
  unsigned __int8 m_IrpAllocation; // r12
  unsigned __int8 m_Reserved; // r13
  signed __int32 v23; // ebp
  int v24; // ecx
  int v25; // ecx
  unsigned __int16 v26; // cx
  FxTagTracker *v27; // r14
  unsigned __int16 v28; // cx
  _QWORD *j; // rdi
  void (__fastcall *v30)(unsigned __int64); // rax
  void (__fastcall *v31)(unsigned __int64); // rax
  unsigned __int16 v32; // ax
  _QWORD *v33; // rcx
  _QWORD *v34; // rdi
  void (__fastcall *v35)(FxObject *, unsigned int); // rdx
  void (__fastcall *v36)(FxObject *, unsigned int); // r8
  FxRegKey *(__fastcall *v37)(FxRegKey *, char); // rax
  void *v38; // rcx
  void *v39; // rcx
  FX_POOL_TRACKER *v40; // rdi
  void (__fastcall *v41)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r10
  _IRP *v42; // rax
  FxIoTarget *v43; // rdx
  void *v44; // r9
  _IO_STATUS_BLOCK IoStatus; // xmm0
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int16 m_ObjectFlags; // cx
  unsigned __int16 v49; // cx
  _QWORD *i; // rdi
  void (__fastcall *v51)(unsigned __int64); // rax
  void (__fastcall *v52)(unsigned __int64); // rax
  unsigned __int16 v53; // ax
  _QWORD *v54; // rcx
  _QWORD *v55; // rdi
  void (__fastcall *v56)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestContext *v60; // rcx
  _IRP *v61; // rsi
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v63; // rsi
  __int64 v64; // rax
  _SLIST_ENTRY *v65; // rsi
  MxLock *p_m_SpinLock; // rdi
  void (__fastcall *v67)(FxObject *, unsigned int); // rdx
  FxRequest *(__fastcall *v68)(FxRequest *, char); // rax
  void *m_Lock; // rcx
  void *v70; // rcx
  void **p_Blink; // rax
  FX_POOL_TRACKER *v72; // rdi
  _MDL *v73; // rcx
  FxRequestContext *v74; // rcx
  _IRP *v75; // rdi
  FxRequestTimer *v76; // rcx
  _MDL *v77; // rcx
  FxRequestContext *v78; // rcx
  _IRP *v79; // rdi
  FxRequestTimer *v80; // rcx
  void **v81; // rcx
  _SLIST_ENTRY *m_InternalContext; // rsi
  unsigned __int8 v83; // r8
  unsigned __int16 v84; // r9
  FxTagTracker *v85; // rcx
  FxRequestContext *v86; // rcx
  FxVerifierLock *Flink; // rcx
  _SINGLE_LIST_ENTRY *v88; // rax
  unsigned __int8 IsPagedPoolType; // al
  FX_POOL_TRACKER *v90; // rcx
  FxRequestContext *v91; // rcx
  FxVerifierLock *v92; // rcx
  unsigned __int8 v93; // al
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rsi
  _IRP *v96; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v98; // r8
  FxTagTracker *v99; // rcx
  FxRequestContext *v100; // rcx
  FxVerifierLock *v101; // rcx
  char v102; // [rsp+30h] [rbp-88h] BYREF
  int v103; // [rsp+34h] [rbp-84h]
  _IO_STATUS_BLOCK v104; // [rsp+38h] [rbp-80h]
  __int64 v105; // [rsp+48h] [rbp-70h]
  __int64 v106; // [rsp+50h] [rbp-68h]
  __int64 v107; // [rsp+58h] [rbp-60h]
  __int64 v108; // [rsp+60h] [rbp-58h]
  __int64 v109; // [rsp+68h] [rbp-50h]
  __int64 v110; // [rsp+70h] [rbp-48h]
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int8 v112; // [rsp+C0h] [rbp+8h]
  unsigned __int8 PreviousIrql; // [rsp+C8h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  v4 = (FxRequest *)this;
  m_Target = (FxObjectDebugLeakDetection *)this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( this->m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    FxRequestBase::VerifierClearFormatted(v4);
  }
  m_RequestContext = v4->m_RequestContext;
  v7 = 0LL;
  if ( m_RequestContext )
  {
    m_RequestContext->m_CompletionParams.IoStatus = v4->m_Irp.m_Irp->IoStatus;
    v8 = v4->m_RequestContext;
    CopyParameters = (void (__fastcall *)(FxIoContext *, FxRequestBase *))v8->CopyParameters;
    if ( CopyParameters != FxIoContext::CopyParameters )
    {
      CopyParameters((FxIoContext *)v4->m_RequestContext, v4);
LABEL_13:
      m_Completion = v4->m_CompletionRoutine.m_Completion;
      if ( m_Completion )
      {
        m_TargetCompletionContext = (_KEVENT *)v4->m_TargetCompletionContext;
        p_m_CompletionParams = (__int64)&v4->m_RequestContext->m_CompletionParams;
        v4->m_TargetCompletionContext = 0LL;
        if ( HIWORD(m_Target->LimitScaled) )
          v15 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v15 = 0LL;
        m_ObjectSize = v4->m_ObjectSize;
        v17 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        v4->m_CompletionRoutine.m_Completion = 0LL;
        if ( !m_ObjectSize )
          v17 = 0LL;
        if ( m_Completion == FxIoTarget::_SyncCompletionRoutine )
        {
          LODWORD(m_TargetCompletionContext[1].Header.WaitListHead.Flink) = *(_DWORD *)(p_m_CompletionParams + 8);
          Blink = m_TargetCompletionContext[1].Header.WaitListHead.Blink;
          if ( Blink )
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, _QWORD))Blink)(
              v17,
              v15,
              p_m_CompletionParams,
              *(_QWORD *)&m_TargetCompletionContext[2].Header.Lock);
          KeSetEvent(m_TargetCompletionContext, 0, 0);
        }
        else
        {
          m_Completion(
            (WDFREQUEST__ *)v17,
            (WDFIOTARGET__ *)v15,
            (_WDF_REQUEST_COMPLETION_PARAMS *)p_m_CompletionParams,
            m_TargetCompletionContext);
        }
      }
      goto LABEL_22;
    }
    v10 = *((unsigned __int8 *)&v8[1].m_CompletionParams.Parameters.Usb + 35);
    if ( v10 != 15 )
    {
      v24 = v10 - 3;
      if ( !v24 || (v25 = v24 - 1) == 0 )
      {
        v8->m_CompletionParams.Parameters.Write.Length = v8->m_CompletionParams.IoStatus.Information;
        goto LABEL_9;
      }
      if ( v25 != 10 )
        goto LABEL_9;
    }
    v8->m_CompletionParams.Parameters.Ioctl.Output.Length = v8->m_CompletionParams.IoStatus.Information;
LABEL_9:
    m_Globals = (_FX_DRIVER_GLOBALS *)v8[1].__vftable;
    if ( m_Globals )
    {
      if ( *((_BYTE *)&v8[1].m_CompletionParams.Parameters.Usb + 32) )
      {
        m_Irp = v4->m_Irp.m_Irp;
        UserBuffer = m_Irp->UserBuffer;
        if ( UserBuffer )
        {
          memmove(UserBuffer, m_Globals, m_Irp->IoStatus.Information);
          *((_BYTE *)&v8[1].m_CompletionParams.Parameters.Usb + 32) = 0;
        }
      }
    }
    goto LABEL_13;
  }
  v41 = v4->m_CompletionRoutine.m_Completion;
  if ( v41 )
  {
    v42 = v4->m_Irp.m_Irp;
    v43 = v4->m_Target;
    v44 = v4->m_TargetCompletionContext;
    v103 = 255;
    IoStatus = v42->IoStatus;
    v4->m_TargetCompletionContext = 0LL;
    v105 = 0LL;
    v104 = IoStatus;
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    if ( v43->m_ObjectSize )
      v46 = (unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v46 = 0LL;
    if ( v4->m_ObjectSize )
      v47 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v47 = 0LL;
    v4->m_CompletionRoutine.m_Completion = 0LL;
    v41((WDFREQUEST__ *)v47, (WDFIOTARGET__ *)v46, (_WDF_REQUEST_COMPLETION_PARAMS *)&v102, v44);
  }
LABEL_22:
  Release = (__int64 (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))v4->Release;
  if ( Release == FxRequest::Release )
  {
    m_CanComplete = v4->m_CanComplete;
    m_IrpAllocation = v4->m_IrpAllocation;
    m_Reserved = v4->m_Reserved;
    v112 = m_CanComplete;
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    {
      v85 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
      if ( v85 )
        FxTagTracker::UpdateTagHistory(
          v85,
          m_Target,
          530,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp",
          TagRelease,
          v4->m_Refcnt - 1);
      m_CanComplete = v112;
    }
    v23 = _InterlockedDecrement(&v4->m_Refcnt);
    if ( v23 )
      goto LABEL_25;
    m_ObjectFlags = v4->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(v4, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(v4->m_Globals->Driver->m_DisposeList, v4);
LABEL_109:
      m_CanComplete = v112;
LABEL_25:
      if ( m_Reserved && v23 == 1 && v4->m_Completed )
      {
        FxIoQueue::ReturnReservedRequest(v4->m_ForwardProgressQueue, v4);
      }
      else if ( m_IrpAllocation )
      {
        if ( m_CanComplete )
        {
          if ( v23 == 1 )
          {
            if ( v4->m_Completed )
            {
              m_CompletionState = v4->m_CompletionState;
              m_IoQueue = v4->m_IoQueue;
              v96 = v4->m_Irp.m_Irp;
              m_PriorityBoost = v4->m_PriorityBoost;
              v4->m_CompletionState = 0;
              v4->m_IoQueue = 0LL;
              v4->m_Irp.m_Irp = 0LL;
              IofCompleteRequest(v96, m_PriorityBoost);
              if ( m_CompletionState == 1 )
              {
                FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql, v98);
                --m_IoQueue->m_TwoPhaseCompletions;
                --m_IoQueue->m_DriverIoCount;
                if ( m_IoQueue->m_Dispatching )
                  FxNonPagedObject::Unlock(m_IoQueue, PreviousIrql, v83);
                else
                  FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL, v84);
              }
            }
          }
        }
      }
      return;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      v7 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
      if ( v7 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink);
    }
    v49 = v4->m_ObjectSize;
    if ( v49 && (v4->m_ObjectFlags & 8) != 0 )
    {
      for ( i = (FxRequest_vtbl **)((char *)&v4->__vftable + v49); i; i = (_QWORD *)i[1] )
      {
        v51 = (void (__fastcall *)(unsigned __int64))i[2];
        if ( v51 )
        {
          v51((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[2] = 0LL;
        }
        v52 = (void (__fastcall *)(unsigned __int64))i[3];
        if ( v52 )
        {
          v52((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[3] = 0LL;
        }
      }
      v53 = v4->m_ObjectSize;
      LOBYTE(m_Globals) = 1;
      if ( v53 )
      {
        v54 = (FxRequest_vtbl **)((char *)&v4->__vftable + v53);
        if ( v54 )
        {
          do
          {
            v55 = (_QWORD *)v54[1];
            if ( !(_BYTE)m_Globals )
              FxPoolFree(v54);
            LOBYTE(m_Globals) = 0;
            v54 = v55;
          }
          while ( v55 );
        }
      }
    }
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    {
      if ( BYTE4(v4[-1].m_ForwardProgressQueue) )
      {
        _InterlockedDecrement(&v4->m_Globals->FxVerifyLeakDetection->ObjectCnt);
        if ( v4->m_Type == 4098
          && _InterlockedExchangeAdd(&v4->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
        {
          m_Globals = (_FX_DRIVER_GLOBALS *)v4->m_Globals->FxVerifyLeakDetection;
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)&m_Globals->Linkage.Blink,
            -HIDWORD(m_Globals->Linkage.Flink));
        }
      }
    }
    if ( v7 )
    {
      v4[-1].m_OwnerListEntry2.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'(v7, (unsigned int)m_Globals);
    }
    v56 = FxRequestFromLookaside::SelfDestruct;
    SelfDestruct = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))v4->SelfDestruct;
    if ( SelfDestruct == FxRequestFromLookaside::SelfDestruct )
    {
      m_AllocatedMdl = v4->m_AllocatedMdl;
      m_DeviceBase = v4->m_DeviceBase;
      v4->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
      if ( m_AllocatedMdl )
      {
        if ( v4->m_Globals->FxVerifierOn )
          FxMdlFreeDebug(v4->m_Globals, m_AllocatedMdl);
        else
          IoFreeMdl(m_AllocatedMdl);
      }
      v60 = v4->m_RequestContext;
      v61 = v4->m_Irp.m_Irp;
      if ( v60 )
      {
        if ( v61 )
          v60->ReleaseAndRestore(v60, v4);
        v86 = v4->m_RequestContext;
        if ( v86 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v86->~FxRequestContext)(v86, 1LL);
      }
      if ( v61 && v4->m_IrpAllocation == 1 )
        IoFreeIrp(v4->m_Irp.m_Irp);
      m_Timer = v4->m_Timer;
      if ( m_Timer )
        FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v56);
      v4->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      {
        Flink = (FxVerifierLock *)v4[-1].m_ForwardProgressList.Flink;
        if ( Flink )
        {
          FxVerifierLock::`scalar deleting destructor'(Flink, (unsigned int)v56);
          v4[-1].m_ForwardProgressList.Flink = 0LL;
        }
      }
      v4->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(v4, (unsigned int)v56, (unsigned int)m_Irp);
      if ( v4->m_ForwardRequestToParent )
      {
        v88 = FxObject::_CleanupPointer(v4->m_Globals, v4);
        ExFreePoolWithTag(v88->Next, 0);
      }
      else
      {
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
          v63 = (FxRequest *)((char *)v4 - 48);
        else
          v63 = v4;
        if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
          FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v63[-1].m_InternalContext);
        v64 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
        if ( v64 && *(_WORD *)(v64 + 8) == 4354 && *(_BYTE *)(v64 + 1667) )
        {
          m_InternalContext = (_SLIST_ENTRY *)v63[-1].m_InternalContext;
          if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
            m_CanComplete = v112;
            goto LABEL_25;
          }
          (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
        }
        else
        {
          v65 = (_SLIST_ENTRY *)v63[-1].m_InternalContext;
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
      goto LABEL_109;
    }
    v67 = FxObject::SelfDestruct;
    if ( (char *)SelfDestruct != (char *)FxObject::SelfDestruct )
    {
      ((void (__fastcall *)(FxRequest *))SelfDestruct)(v4);
      goto LABEL_109;
    }
    v68 = (FxRequest *(__fastcall *)(FxRequest *, char))v4->~FxObject;
    if ( (char *)v68 == (char *)FxRegKey::`scalar deleting destructor' )
    {
      v4->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
      m_Lock = (void *)v4->m_NPLock.m_Lock;
      if ( m_Lock )
      {
        ZwClose(m_Lock);
        v4->m_NPLock.m_Lock = 0LL;
      }
      v70 = *(void **)&v4->m_NPLock.m_DbgFlagIsInitialized;
      v4->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
      if ( v70 )
      {
        FxPoolFree(v70);
        *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(v4, (unsigned int)v67, (unsigned int)m_Irp);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        p_Blink = (void **)&v4[-1].m_OwnerListEntry2.Blink;
      else
        p_Blink = (void **)&v4->__vftable;
      if ( !p_Blink )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
      {
        v72 = (FX_POOL_TRACKER *)*(p_Blink - 2);
        if ( !*((_BYTE *)*(p_Blink - 1) + 264) )
        {
LABEL_124:
          ExFreePoolWithTag(v72, 0);
          m_CanComplete = v112;
          goto LABEL_25;
        }
        IsPagedPoolType = FxIsPagedPoolType(v72->PoolType);
        v90 = v72;
        if ( IsPagedPoolType )
          goto LABEL_204;
        goto LABEL_205;
      }
    }
    else
    {
      if ( v68 == FxRequest::`scalar deleting destructor' )
      {
        v4->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
        v77 = v4->m_AllocatedMdl;
        if ( v77 )
        {
          if ( v4->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(v4->m_Globals, v4->m_AllocatedMdl);
          else
            IoFreeMdl(v77);
        }
        v78 = v4->m_RequestContext;
        v79 = v4->m_Irp.m_Irp;
        if ( v78 )
        {
          if ( v79 )
            v78->ReleaseAndRestore(v78, v4);
          v91 = v4->m_RequestContext;
          if ( v91 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v91->~FxRequestContext)(v91, 1LL);
        }
        if ( v79 && v4->m_IrpAllocation == 1 )
          IoFreeIrp(v4->m_Irp.m_Irp);
        v80 = v4->m_Timer;
        if ( v80 )
          FxRequestTimer::`scalar deleting destructor'(v80, (unsigned int)v67);
        v4->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        {
          v92 = (FxVerifierLock *)v4[-1].m_ForwardProgressList.Flink;
          if ( v92 )
          {
            FxVerifierLock::`scalar deleting destructor'(v92, (unsigned int)v67);
            v4[-1].m_ForwardProgressList.Flink = 0LL;
          }
        }
        v4->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(v4, (unsigned int)v67, (unsigned int)m_Irp);
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
          v81 = (void **)&v4[-1].m_OwnerListEntry2.Blink;
        else
          v81 = (void **)&v4->__vftable;
        FxPoolFree(v81);
        m_CanComplete = v112;
        goto LABEL_25;
      }
      if ( (char *)v68 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
      {
        v68(v4, 1);
        m_CanComplete = v112;
        goto LABEL_25;
      }
      v4->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
      *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
      FxObject::~FxObject(v4, (unsigned int)FxObject::SelfDestruct, (unsigned int)m_Irp);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        p_Blink = (void **)&v4[-1].m_OwnerListEntry2.Blink;
      else
        p_Blink = (void **)&v4->__vftable;
      if ( !p_Blink )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
      {
        v72 = (FX_POOL_TRACKER *)*(p_Blink - 2);
        if ( !*((_BYTE *)*(p_Blink - 1) + 264) )
          goto LABEL_124;
        v93 = FxIsPagedPoolType(v72->PoolType);
        v90 = v72;
        if ( v93 )
        {
LABEL_204:
          FxPoolRemovePagedAllocateTracker(v90);
LABEL_206:
          memset(v72, 0, v72->Size + 64);
          goto LABEL_124;
        }
LABEL_205:
        FxPoolRemoveNonPagedAllocateTracker(v72);
        goto LABEL_206;
      }
    }
    ExFreePoolWithTag(p_Blink, 0);
    goto LABEL_109;
  }
  if ( (char *)Release != (char *)FxObject::Release )
  {
    Release(v4, m_Target, 530LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
    return;
  }
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
  {
    v99 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
    if ( v99 )
      FxTagTracker::UpdateTagHistory(
        v99,
        m_Target,
        530,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp",
        TagRelease,
        v4->m_Refcnt - 1);
  }
  if ( !_InterlockedDecrement(&v4->m_Refcnt) )
  {
    v26 = v4->m_ObjectFlags;
    if ( (v26 & 0x20) != 0 || (v26 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(v4, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(v4->m_Globals->Driver->m_DisposeList, v4);
      return;
    }
    if ( (v26 & 0x80u) != 0 )
    {
      v27 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
      if ( v27 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink);
    }
    else
    {
      v27 = 0LL;
    }
    v28 = v4->m_ObjectSize;
    if ( v28 && (v4->m_ObjectFlags & 8) != 0 )
    {
      for ( j = (FxRequest_vtbl **)((char *)&v4->__vftable + v28); j; j = (_QWORD *)j[1] )
      {
        v30 = (void (__fastcall *)(unsigned __int64))j[2];
        if ( v30 )
        {
          v30((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          j[2] = 0LL;
        }
        v31 = (void (__fastcall *)(unsigned __int64))j[3];
        if ( v31 )
        {
          v31((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          j[3] = 0LL;
        }
      }
      v32 = v4->m_ObjectSize;
      LOBYTE(m_Globals) = 1;
      if ( v32 )
      {
        v33 = (FxRequest_vtbl **)((char *)&v4->__vftable + v32);
        if ( v33 )
        {
          do
          {
            v34 = (_QWORD *)v33[1];
            if ( !(_BYTE)m_Globals )
              FxPoolFree(v33);
            LOBYTE(m_Globals) = 0;
            v33 = v34;
          }
          while ( v34 );
        }
      }
    }
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    {
      if ( BYTE4(v4[-1].m_ForwardProgressQueue) )
      {
        _InterlockedDecrement(&v4->m_Globals->FxVerifyLeakDetection->ObjectCnt);
        if ( v4->m_Type == 4098
          && _InterlockedExchangeAdd(&v4->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
        {
          m_Globals = (_FX_DRIVER_GLOBALS *)v4->m_Globals->FxVerifyLeakDetection;
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)&m_Globals->Linkage.Blink,
            -HIDWORD(m_Globals->Linkage.Flink));
        }
      }
    }
    if ( v27 )
    {
      v4[-1].m_OwnerListEntry2.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'(v27, (unsigned int)m_Globals);
    }
    v35 = FxObject::SelfDestruct;
    v36 = (void (__fastcall *)(FxObject *, unsigned int))v4->SelfDestruct;
    if ( v36 != FxObject::SelfDestruct )
    {
      v4->SelfDestruct(v4);
      return;
    }
    v37 = (FxRegKey *(__fastcall *)(FxRegKey *, char))v4->~FxObject;
    if ( v37 == FxRegKey::`scalar deleting destructor' )
    {
      v4->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
      v38 = (void *)v4->m_NPLock.m_Lock;
      if ( v38 )
      {
        ZwClose(v38);
        v4->m_NPLock.m_Lock = 0LL;
      }
      v39 = *(void **)&v4->m_NPLock.m_DbgFlagIsInitialized;
      v4->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
      if ( v39 )
      {
        FxPoolFree(v39);
        *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(v4, (unsigned int)v35, (unsigned int)v36);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        v4 = (FxRequest *)((char *)v4 - 48);
      if ( !v4 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
      {
LABEL_66:
        v40 = (FX_POOL_TRACKER *)v4[-1].m_InternalContext;
        if ( *(_BYTE *)(*(_QWORD *)&v4[-1].m_Presented + 264LL) )
        {
          if ( FxIsPagedPoolType(v40->PoolType) )
            FxPoolRemovePagedAllocateTracker(v40);
          else
            FxPoolRemoveNonPagedAllocateTracker(v40);
          memset(v40, 0, v40->Size + 64);
        }
        ExFreePoolWithTag(v40, 0);
        return;
      }
LABEL_240:
      ExFreePoolWithTag(v4, 0);
      return;
    }
    if ( (char *)v37 != (char *)FxRequest::`scalar deleting destructor' )
    {
      if ( (char *)v37 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
      {
        v37((FxRegKey *)v4, 1);
        return;
      }
      v4->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
      *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
      FxObject::~FxObject(v4, (unsigned int)FxObject::SelfDestruct, (unsigned int)v36);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        v4 = (FxRequest *)((char *)v4 - 48);
      if ( !v4 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
        goto LABEL_66;
      goto LABEL_240;
    }
    v4->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
    v73 = v4->m_AllocatedMdl;
    if ( v73 )
    {
      if ( v4->m_Globals->FxVerifierOn )
        FxMdlFreeDebug(v4->m_Globals, v4->m_AllocatedMdl);
      else
        IoFreeMdl(v73);
    }
    v74 = v4->m_RequestContext;
    v75 = v4->m_Irp.m_Irp;
    if ( v74 )
    {
      if ( v75 )
        v74->ReleaseAndRestore(v74, v4);
      v100 = v4->m_RequestContext;
      if ( v100 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v100->~FxRequestContext)(v100, 1LL);
    }
    if ( v75 && v4->m_IrpAllocation == 1 )
      IoFreeIrp(v4->m_Irp.m_Irp);
    v76 = v4->m_Timer;
    if ( v76 )
      FxRequestTimer::`scalar deleting destructor'(v76, (unsigned int)v35);
    v4->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    {
      v101 = (FxVerifierLock *)v4[-1].m_ForwardProgressList.Flink;
      if ( v101 )
      {
        FxVerifierLock::`scalar deleting destructor'(v101, (unsigned int)v35);
        v4[-1].m_ForwardProgressList.Flink = 0LL;
      }
    }
    v4->m_NPLock.m_DbgFlagIsInitialized = 0;
    FxObject::~FxObject(v4, (unsigned int)v35, (unsigned int)v36);
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      v4 = (FxRequest *)((char *)v4 - 48);
    FxPoolFree(v4);
  }
}
