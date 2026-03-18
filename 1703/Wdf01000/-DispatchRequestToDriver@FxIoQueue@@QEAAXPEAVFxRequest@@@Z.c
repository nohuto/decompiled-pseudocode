/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003FE38 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0066060 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007C3D8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0093EC8 (WPP_IFR_SF_Lqd.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0094474 (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxIoQueue *v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int8 m_CompletionState; // al
  unsigned int v8; // edx
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int8 m_IrpAllocation; // cl
  FxObjectDebugLeakDetection *m_CanComplete; // rdx
  unsigned __int8 m_Reserved; // r13
  signed __int32 v13; // edi
  unsigned __int16 v14; // cx
  WDFREQUEST__ *_a1; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // di
  _IO_STACK_LOCATION *v18; // rcx
  unsigned int LowPart; // edi
  unsigned __int64 Options; // r12
  unsigned __int64 Length; // r13
  FxCallbackLock *m_CallbackLock; // rcx
  FxCallbackLock *v23; // rcx
  _IO_STACK_LOCATION *v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  FxCallbackLock *v28; // rcx
  __int64 v29; // rdx
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v31; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v33; // rbp
  void (__fastcall *v34)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *); // rax
  void (__fastcall *v35)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *); // rax
  unsigned __int16 v36; // ax
  _QWORD *v37; // rcx
  _QWORD *v38; // rbp
  void (__fastcall *v39)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rbp
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // r12
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v46; // r12
  __int64 v47; // rax
  _SLIST_ENTRY *v48; // r12
  MxLock *p_m_SpinLock; // rbp
  FxCallbackLock *v50; // rcx
  void (__fastcall *v51)(FxObject *, unsigned int); // rdx
  void (__fastcall *v52)(FxObject *); // rax
  void *m_Lock; // rcx
  void *v54; // rcx
  FxRequest *v55; // rax
  FX_POOL_TRACKER *v56; // rbp
  _MDL *v57; // rcx
  FxRequestContext *v58; // rcx
  _IRP *v59; // rbp
  FxRequestTimer *v60; // rcx
  FxRequest *v61; // rcx
  _SLIST_ENTRY *m_InternalContext; // r12
  _FX_DRIVER_GLOBALS *v63; // rdx
  const void *v64; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v66; // r10
  FxRequestContext *v67; // rcx
  _LIST_ENTRY *Flink; // rcx
  _SINGLE_LIST_ENTRY *v69; // rax
  FxRequestContext *v70; // rcx
  _LIST_ENTRY *v71; // rcx
  unsigned __int8 v72; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *v74; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int16 v76; // r9
  unsigned int v77; // edi
  unsigned __int16 v78; // ax
  const void *_a2; // rsi
  __int64 v80; // r8
  FxIoQueueIoWrite *p_m_IoWrite; // rcx
  unsigned int v82; // r9d
  WDFQUEUE__ *v83; // rdx
  WDFREQUEST__ *v84; // r8
  unsigned int v85; // edi
  unsigned __int16 v86; // ax
  const void *v87; // rsi
  const void *v88; // rax
  unsigned __int16 v89; // ax
  const void *v90; // rsi
  unsigned __int16 v91; // ax
  const void *v92; // rsi
  __int16 m_VerifierFlags; // di
  unsigned __int8 v94; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v95; // [rsp+41h] [rbp-67h] BYREF
  unsigned __int8 v96; // [rsp+42h] [rbp-66h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+43h] [rbp-65h] BYREF
  unsigned __int8 v98[4]; // [rsp+44h] [rbp-64h] BYREF
  _LIST_ENTRY *v99; // [rsp+48h] [rbp-60h]
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int8 v102; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v103; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v104; // [rsp+C8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  v5 = this;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(pRequest, &PreviousIrql);
    v63 = pRequest->m_Globals;
    if ( v63->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(pRequest, v63);
    FxNonPagedObject::Unlock(pRequest, PreviousIrql);
  }
  v6 = 0LL;
  if ( pRequest->m_Completed )
  {
    v64 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v64 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v64);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      v8 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v8);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::SetVerifierFlags(pRequest, 9);
    goto LABEL_11;
  }
  Release = pRequest->Release;
  if ( (char *)Release != (char *)FxRequest::Release )
  {
    Release(pRequest, (void *)1952543827, 3219, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_11;
  }
  m_IrpAllocation = pRequest->m_IrpAllocation;
  m_CanComplete = (FxObjectDebugLeakDetection *)pRequest->m_CanComplete;
  m_Reserved = pRequest->m_Reserved;
  v102 = m_IrpAllocation;
  v103 = pRequest->m_CanComplete;
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
  {
    v66 = pRequest[-1].m_OwnerListEntry2.Blink;
    if ( v66 )
    {
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v66,
        (void *)0x74617453,
        3219,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagRelease,
        pRequest->m_Refcnt - 1);
      m_IrpAllocation = v102;
      m_CanComplete = (FxObjectDebugLeakDetection *)v103;
    }
  }
  v13 = _InterlockedDecrement(&pRequest->m_Refcnt);
  if ( !v13 )
  {
    m_ObjectFlags = pRequest->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(pRequest, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(pRequest->m_Globals->Driver->m_DisposeList, pRequest);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v31 = pRequest[-1].m_OwnerListEntry2.Blink;
        v99 = v31;
        if ( v31 )
        {
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v31);
          v31 = v99;
        }
      }
      else
      {
        v31 = 0LL;
        v99 = 0LL;
      }
      m_ObjectSize = pRequest->m_ObjectSize;
      if ( m_ObjectSize && (pRequest->m_ObjectFlags & 8) != 0 )
      {
        v33 = (FxRequest_vtbl **)((char *)&pRequest->__vftable + m_ObjectSize);
        if ( v33 )
        {
          do
          {
            v34 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *))v33[2];
            if ( v34 )
            {
              v34((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL, m_CanComplete, v31);
              v33[2] = 0LL;
            }
            v35 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *))v33[3];
            if ( v35 )
            {
              v35((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL, m_CanComplete, v31);
              v33[3] = 0LL;
            }
            v33 = (_QWORD *)v33[1];
          }
          while ( v33 );
          v5 = this;
          v31 = v99;
        }
        v36 = pRequest->m_ObjectSize;
        LOBYTE(m_CanComplete) = 1;
        if ( v36 )
        {
          v37 = (FxRequest_vtbl **)((char *)&pRequest->__vftable + v36);
          if ( v37 )
          {
            do
            {
              v38 = (_QWORD *)v37[1];
              if ( !(_BYTE)m_CanComplete )
                FxPoolFree(v37);
              LOBYTE(m_CanComplete) = 0;
              v37 = v38;
            }
            while ( v38 );
            v31 = v99;
          }
        }
      }
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(pRequest[-1].m_ForwardProgressQueue) )
        {
          _InterlockedDecrement(&pRequest->m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( pRequest->m_Type == 4098
            && _InterlockedExchangeAdd(&pRequest->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            m_CanComplete = pRequest->m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&m_CanComplete->LimitScaled, -m_CanComplete->Limit);
          }
        }
      }
      if ( v31 )
      {
        pRequest[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v31, (unsigned int)m_CanComplete);
      }
      v39 = FxRequestFromLookaside::SelfDestruct;
      SelfDestruct = pRequest->SelfDestruct;
      if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
      {
        m_AllocatedMdl = pRequest->m_AllocatedMdl;
        m_DeviceBase = pRequest->m_DeviceBase;
        pRequest->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
        if ( m_AllocatedMdl )
        {
          if ( pRequest->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(pRequest->m_Globals, m_AllocatedMdl);
          else
            IoFreeMdl(m_AllocatedMdl);
        }
        m_RequestContext = pRequest->m_RequestContext;
        m_Irp = pRequest->m_Irp.m_Irp;
        if ( m_RequestContext )
        {
          if ( m_Irp )
            m_RequestContext->ReleaseAndRestore(m_RequestContext, pRequest);
          v67 = pRequest->m_RequestContext;
          if ( v67 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v67->~FxRequestContext)(v67, 1LL);
        }
        if ( m_Irp && pRequest->m_IrpAllocation == 1 )
          IoFreeIrp(pRequest->m_Irp.m_Irp);
        m_Timer = pRequest->m_Timer;
        if ( m_Timer )
          FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v39);
        pRequest->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          Flink = pRequest[-1].m_ForwardProgressList.Flink;
          if ( Flink )
          {
            FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Flink, (unsigned int)v39);
            pRequest[-1].m_ForwardProgressList.Flink = 0LL;
          }
        }
        pRequest->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(pRequest, (unsigned int)v39, (unsigned int)v31);
        if ( pRequest->m_ForwardRequestToParent )
        {
          v69 = FxObject::_CleanupPointer(pRequest->m_Globals, pRequest);
          ExFreePoolWithTag(v69->Next, 0);
        }
        else
        {
          if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
            v46 = (FxRequest *)((char *)pRequest - 48);
          else
            v46 = pRequest;
          if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v46[-1].m_InternalContext);
          v47 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v47 && *(_WORD *)(v47 + 8) == 4354 && *(_BYTE *)(v47 + 1667) )
          {
            m_InternalContext = (_SLIST_ENTRY *)v46[-1].m_InternalContext;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
              m_IrpAllocation = v102;
              LOBYTE(m_CanComplete) = v103;
              goto LABEL_9;
            }
            (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
          }
          else
          {
            v48 = (_SLIST_ENTRY *)v46[-1].m_InternalContext;
            p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
            ++HIDWORD(p_m_SpinLock[1].m_Lock);
            if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
            {
              ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
              ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v48);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v48);
            }
          }
        }
      }
      else
      {
        v51 = FxObject::SelfDestruct;
        if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
        {
          v52 = pRequest->~FxObject;
          if ( (char *)v52 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            pRequest->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
            m_Lock = (void *)pRequest->m_NPLock.m_Lock;
            if ( m_Lock )
            {
              ZwClose(m_Lock);
              pRequest->m_NPLock.m_Lock = 0LL;
            }
            v54 = *(void **)&pRequest->m_NPLock.m_DbgFlagIsInitialized;
            pRequest->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
            if ( v54 )
            {
              FxPoolFree(v54);
              *(_QWORD *)&pRequest->m_NPLock.m_DbgFlagIsInitialized = 0LL;
            }
            FxObject::~FxObject(pRequest, (unsigned int)v51, (unsigned int)v31);
            if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
              v55 = (FxRequest *)((char *)pRequest - 48);
            else
              v55 = pRequest;
            if ( !v55 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v52 == (char *)FxRequest::`scalar deleting destructor' )
            {
              pRequest->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
              v57 = pRequest->m_AllocatedMdl;
              if ( v57 )
              {
                if ( pRequest->m_Globals->FxVerifierOn )
                  FxMdlFreeDebug(pRequest->m_Globals, pRequest->m_AllocatedMdl);
                else
                  IoFreeMdl(v57);
              }
              v58 = pRequest->m_RequestContext;
              v59 = pRequest->m_Irp.m_Irp;
              if ( v58 )
              {
                if ( v59 )
                  v58->ReleaseAndRestore(v58, pRequest);
                v70 = pRequest->m_RequestContext;
                if ( v70 )
                  ((void (__fastcall *)(FxRequestContext *, __int64))v70->~FxRequestContext)(v70, 1LL);
              }
              if ( v59 && pRequest->m_IrpAllocation == 1 )
                IoFreeIrp(pRequest->m_Irp.m_Irp);
              v60 = pRequest->m_Timer;
              if ( v60 )
                FxRequestTimer::`scalar deleting destructor'(v60, (unsigned int)v51);
              pRequest->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
              if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
              {
                v71 = pRequest[-1].m_ForwardProgressList.Flink;
                if ( v71 )
                {
                  FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)v71, (unsigned int)v51);
                  pRequest[-1].m_ForwardProgressList.Flink = 0LL;
                }
              }
              pRequest->m_NPLock.m_DbgFlagIsInitialized = 0;
              FxObject::~FxObject(pRequest, (unsigned int)v51, (unsigned int)v31);
              if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
                v61 = (FxRequest *)((char *)pRequest - 48);
              else
                v61 = pRequest;
              FxPoolFree(v61);
              m_IrpAllocation = v102;
              LOBYTE(m_CanComplete) = v103;
              goto LABEL_9;
            }
            if ( (char *)v52 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
            {
              ((void (__fastcall *)(FxRequest *, __int64))v52)(pRequest, 1LL);
              m_IrpAllocation = v102;
              LOBYTE(m_CanComplete) = v103;
              goto LABEL_9;
            }
            pRequest->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            *(_QWORD *)&pRequest->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            FxObject::~FxObject(pRequest, (unsigned int)FxObject::SelfDestruct, (unsigned int)v31);
            if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
              v55 = (FxRequest *)((char *)pRequest - 48);
            else
              v55 = pRequest;
            if ( !v55 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)v55 & 0xFFF) != 0 )
          {
            v56 = (FX_POOL_TRACKER *)v55[-1].m_InternalContext;
            if ( *(_BYTE *)(*(_QWORD *)&v55[-1].m_Presented + 264LL) )
            {
              if ( FxIsPagedPoolType(v56->PoolType) )
                FxPoolRemovePagedAllocateTracker(v56);
              else
                FxPoolRemoveNonPagedAllocateTracker(v56);
              memset(v56, 0, v56->Size + 64);
            }
            ExFreePoolWithTag(v56, 0);
            m_IrpAllocation = v102;
            LOBYTE(m_CanComplete) = v103;
            goto LABEL_9;
          }
          ExFreePoolWithTag(v55, 0);
        }
        else
        {
          SelfDestruct(pRequest);
        }
      }
    }
    m_IrpAllocation = v102;
    LOBYTE(m_CanComplete) = v103;
  }
LABEL_9:
  if ( m_Reserved && v13 == 1 && pRequest->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(pRequest->m_ForwardProgressQueue, pRequest);
  }
  else if ( m_IrpAllocation )
  {
    if ( (_BYTE)m_CanComplete )
    {
      if ( v13 == 1 )
      {
        if ( pRequest->m_Completed )
        {
          v72 = pRequest->m_CompletionState;
          m_IoQueue = pRequest->m_IoQueue;
          v74 = pRequest->m_Irp.m_Irp;
          m_PriorityBoost = pRequest->m_PriorityBoost;
          pRequest->m_CompletionState = 0;
          pRequest->m_IoQueue = 0LL;
          pRequest->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(v74, m_PriorityBoost);
          if ( v72 == 1 )
          {
            FxNonPagedObject::Lock(m_IoQueue, &v104);
            --m_IoQueue->m_TwoPhaseCompletions;
            --m_IoQueue->m_DriverIoCount;
            if ( m_IoQueue->m_Dispatching )
              FxNonPagedObject::Unlock(m_IoQueue, v104);
            else
              FxIoQueue::DispatchEvents(m_IoQueue, v104, 0LL, v76);
          }
        }
      }
    }
  }
LABEL_11:
  v14 = pRequest->m_ObjectSize;
  if ( v14 )
    _a1 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction != 3 )
  {
    if ( MajorFunction != 4 )
    {
      if ( MajorFunction == 14 )
      {
        if ( v5->m_IoDeviceControl.Method )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          v18 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          LowPart = v18->Parameters.Read.ByteOffset.LowPart;
          Options = v18->Parameters.Create.Options;
          Length = v18->Parameters.Read.Length;
          if ( v5->m_ObjectSize )
            v6 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v5->m_IoDeviceControl.Method )
            goto LABEL_25;
          m_CallbackLock = v5->m_IoDeviceControl.m_CallbackLock;
          v94 = 0;
          if ( m_CallbackLock )
            m_CallbackLock->Lock(m_CallbackLock, &v94);
          v5->m_IoDeviceControl.Method((WDFQUEUE__ *)v6, _a1, Length, Options, LowPart);
          v23 = v5->m_IoDeviceControl.m_CallbackLock;
          if ( !v23 )
            goto LABEL_25;
          v29 = v94;
          goto LABEL_124;
        }
      }
      else if ( MajorFunction == 15 && v5->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, _a1);
        v24 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v25 = v24->Parameters.Read.ByteOffset.LowPart;
        v26 = v24->Parameters.Create.Options;
        v27 = v24->Parameters.Read.Length;
        if ( v5->m_ObjectSize )
          v6 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v5->m_IoInternalDeviceControl.Method )
          goto LABEL_25;
        v28 = v5->m_IoInternalDeviceControl.m_CallbackLock;
        v95 = 0;
        if ( v28 )
          v28->Lock(v28, &v95);
        v5->m_IoInternalDeviceControl.Method((WDFQUEUE__ *)v6, _a1, v27, v26, v25);
        v23 = v5->m_IoInternalDeviceControl.m_CallbackLock;
        if ( !v23 )
          goto LABEL_25;
        v29 = v95;
LABEL_124:
        v23->Unlock(v23, v29);
LABEL_25:
        if ( !m_Globals->FxVerifierOn )
          return;
        FxNonPagedObject::Lock(pRequest, v98);
        m_VerifierFlags = pRequest->m_VerifierFlags;
        FxNonPagedObject::Unlock(pRequest, v98[0]);
        if ( (m_VerifierFlags & 4) == 0 )
          FxRequestBase::ClearVerifierFlags(pRequest, 8);
        v80 = 3465LL;
LABEL_240:
        pRequest->Release(
          pRequest,
          (void *)1952543827,
          v80,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        return;
      }
LABEL_79:
      if ( !v5->m_IoDefault.Method )
      {
        WPP_IFR_SF_Lqd(
          m_Globals,
          (unsigned __int8)CurrentStackLocation,
          a3,
          0x3Bu,
          WPP_FxIoQueue_cpp_Traceguids,
          MajorFunction,
          pRequest,
          -1073741808);
        FxRequest::Complete(pRequest, -1073741808);
        if ( m_Globals->FxVerifierOn )
        {
          v80 = 3436LL;
          goto LABEL_240;
        }
        return;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      if ( v5->m_AllowZeroLengthRequests )
        goto LABEL_83;
      if ( MajorFunction == 3 )
      {
        if ( !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
        {
          if ( m_Globals->FxVerboseOn )
          {
            v89 = v5->m_ObjectSize;
            v90 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v89 )
              v90 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, _a1, v90);
          }
          FxRequest::Complete(pRequest, 0);
          if ( m_Globals->FxVerifierOn )
          {
            v80 = 3384LL;
            goto LABEL_240;
          }
          return;
        }
      }
      else if ( MajorFunction == 4 && !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      {
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerboseOn )
        {
          v91 = v5->m_ObjectSize;
          v92 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v91 )
            v92 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, _a1, v92);
        }
        if ( m_Globals->FxVerifierOn )
        {
          v80 = 3405LL;
          goto LABEL_240;
        }
        return;
      }
LABEL_83:
      pRequest->m_Presented = 1;
      if ( v5->m_ObjectSize )
        v6 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v5->m_IoDefault.Method )
        goto LABEL_25;
      v50 = v5->m_IoDefault.m_CallbackLock;
      v96 = 0;
      if ( v50 )
        v50->Lock(v50, &v96);
      v5->m_IoDefault.Method((WDFQUEUE__ *)v6, _a1);
      v23 = v5->m_IoDefault.m_CallbackLock;
      if ( !v23 )
        goto LABEL_25;
      v29 = v96;
      goto LABEL_124;
    }
    if ( !v5->m_IoWrite.Method )
      goto LABEL_79;
    v85 = CurrentStackLocation->Parameters.Read.Length;
    if ( !v85 && !v5->m_AllowZeroLengthRequests )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v86 = v5->m_ObjectSize;
        v87 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v86 )
          v87 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, _a1, v87);
      }
      FxRequest::Complete(pRequest, 0);
      if ( m_Globals->FxVerifierOn )
      {
        v80 = 3300LL;
        goto LABEL_240;
      }
      return;
    }
    pRequest->m_Presented = 1;
    if ( m_Globals->FxVerboseOn )
    {
      v88 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14 )
        v88 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v88);
    }
    p_m_IoWrite = &v5->m_IoWrite;
    v82 = v85;
    v83 = (WDFQUEUE__ *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v84 = _a1;
    if ( !v5->m_ObjectSize )
      v83 = 0LL;
LABEL_202:
    FxIoQueueIoWrite::Invoke(p_m_IoWrite, v83, v84, v82);
    goto LABEL_25;
  }
  if ( !v5->m_IoRead.Method )
    goto LABEL_79;
  v77 = CurrentStackLocation->Parameters.Read.Length;
  if ( v77 || v5->m_AllowZeroLengthRequests )
  {
    pRequest->m_Presented = 1;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    p_m_IoWrite = (FxIoQueueIoWrite *)&v5->m_IoRead;
    v82 = v77;
    v83 = (WDFQUEUE__ *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v84 = _a1;
    if ( !v5->m_ObjectSize )
      v83 = 0LL;
    goto LABEL_202;
  }
  if ( m_Globals->FxVerboseOn )
  {
    v78 = v5->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v78 )
      _a2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
  }
  FxRequest::Complete(pRequest, 0);
  if ( m_Globals->FxVerifierOn )
  {
    v80 = 3261LL;
    goto LABEL_240;
  }
}
