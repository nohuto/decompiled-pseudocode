/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0078594 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C008FE5C (WPP_IFR_SF_Lqd.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00903DC (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *v5; // r14
  FxIoQueue *v6; // rbp
  WDFQUEUE__ *v7; // r15
  int m_CompletionState; // eax
  __int64 (__fastcall *Release)(FxRequest *, void *, __int64, char *); // rax
  unsigned __int8 m_CanComplete; // cl
  bool v11; // r13
  unsigned __int8 m_Reserved; // r12
  signed __int32 v13; // edi
  unsigned __int16 v14; // cx
  WDFREQUEST__ *_a1; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // di
  unsigned int *p_MajorFunction; // rcx
  unsigned int v19; // edi
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r13
  FxCallbackLock *m_CallbackLock; // rcx
  FxCallbackLock *v23; // rcx
  unsigned int *v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  FxCallbackLock *v28; // rcx
  __int64 v29; // rdx
  unsigned __int16 m_ObjectFlags; // cx
  _SLIST_ENTRY *v31; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v33; // rsi
  void (__fastcall *v34)(unsigned __int64, FxRequest *, _SLIST_ENTRY *); // rax
  void (__fastcall *v35)(unsigned __int64, FxRequest *, _SLIST_ENTRY *); // rax
  unsigned __int16 v36; // ax
  _QWORD *v37; // rcx
  _QWORD *v38; // rsi
  void (__fastcall *v39)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  FxRequestContext *m_RequestContext; // rcx
  _SLIST_ENTRY *m_Irp; // rax
  FxRequestTimer *m_Timer; // rcx
  _FX_DRIVER_GLOBALS *v46; // rcx
  _SLIST_ENTRY *p_Blink; // rdx
  __int64 v48; // rax
  MxLock *p_m_SpinLock; // rsi
  FxCallbackLock *v50; // rcx
  void (__fastcall *v51)(FxObject *, unsigned int); // rdx
  void (__fastcall *v52)(FxObject *); // rax
  void *m_Lock; // rcx
  void *v54; // rcx
  _LIST_ENTRY **v55; // rax
  FX_POOL_TRACKER *v56; // rsi
  _MDL *v57; // rcx
  FxRequestContext *v58; // rcx
  _IRP *v59; // rsi
  FxRequestTimer *v60; // rcx
  _LIST_ENTRY **v61; // rcx
  _FX_DRIVER_GLOBALS *v62; // rdx
  const void *v63; // rax
  FxTagTracker *Blink; // rcx
  FxTagTracker *v65; // rcx
  FxRequestContext *v66; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FX_POOL_HEADER *v68; // rax
  FxVerifierLock *v69; // rcx
  FxRequestContext *v70; // rcx
  FxVerifierLock *v71; // rcx
  FxRequestCompletionState v72; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *v74; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v76; // rcx
  unsigned int Length; // edi
  const void *_a2; // rbp
  __int64 v79; // r8
  unsigned int v80; // edi
  const void *v81; // rbp
  const void *v82; // rax
  const void *v83; // rbp
  const void *v84; // rbp
  __int16 m_VerifierFlags; // di
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 v87[7]; // [rsp+41h] [rbp-57h] BYREF
  FxIoQueue *v88; // [rsp+48h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v90; // [rsp+A0h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v92; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int8 v93; // [rsp+B8h] [rbp+20h] BYREF

  m_Globals = pRequest->m_Globals;
  v4 = pRequest;
  v5 = this->m_Globals;
  v6 = this;
  v88 = this;
  if ( m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(pRequest, &PreviousIrql);
    v62 = v4->m_Globals;
    if ( v62->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(v4, v62);
    FxNonPagedObject::Unlock(v4, PreviousIrql);
  }
  v7 = 0LL;
  if ( v4->m_Completed )
  {
    if ( v4->m_ObjectSize )
      v63 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v63 = 0LL;
    WPP_IFR_SF_q(v4->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v63);
    FxVerifierDbgBreakPoint(v4->m_Globals);
  }
  else
  {
    m_CompletionState = v4->m_CompletionState;
    v4->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      pRequest = (FxRequest *)(unsigned int)_InterlockedIncrement(&v4->m_Refcnt);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      {
        Blink = (FxTagTracker *)v4[-1].m_ForwardProgressList.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            (unsigned int)pRequest);
      }
    }
  }
  if ( v5->FxVerifierOn )
  {
    FxRequestBase::SetVerifierFlags(v4, 9);
    goto LABEL_11;
  }
  Release = (__int64 (__fastcall *)(FxRequest *, void *, __int64, char *))v4->Release;
  if ( Release != FxRequest::Release )
  {
    Release(v4, (void *)1952543827, 3216LL, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_11;
  }
  m_CanComplete = v4->m_CanComplete;
  v11 = v4->m_IrpAllocation == 0;
  m_Reserved = v4->m_Reserved;
  v90 = m_CanComplete;
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
  {
    v65 = (FxTagTracker *)v4[-1].m_ForwardProgressList.Blink;
    if ( v65 )
      FxTagTracker::UpdateTagHistory(
        v65,
        (void *)0x74617453,
        3216,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagRelease,
        v4->m_Refcnt - 1);
    m_CanComplete = v90;
  }
  v13 = _InterlockedDecrement(&v4->m_Refcnt);
  if ( !v13 )
  {
    m_ObjectFlags = v4->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(v4, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(v4->m_Globals->Driver->m_DisposeList, v4);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v31 = (_SLIST_ENTRY *)v4[-1].m_ForwardProgressList.Blink;
        ListEntry = v31;
        if ( v31 )
        {
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v31);
          v31 = ListEntry;
        }
      }
      else
      {
        v31 = 0LL;
        ListEntry = 0LL;
      }
      m_ObjectSize = v4->m_ObjectSize;
      if ( m_ObjectSize && (v4->m_ObjectFlags & 8) != 0 )
      {
        v33 = (FxRequest_vtbl **)((char *)&v4->__vftable + m_ObjectSize);
        if ( v33 )
        {
          do
          {
            v34 = (void (__fastcall *)(unsigned __int64, FxRequest *, _SLIST_ENTRY *))v33[2];
            if ( v34 )
            {
              v34((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL, pRequest, v31);
              v33[2] = 0LL;
            }
            v35 = (void (__fastcall *)(unsigned __int64, FxRequest *, _SLIST_ENTRY *))v33[3];
            if ( v35 )
            {
              v35((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL, pRequest, v31);
              v33[3] = 0LL;
            }
            v33 = (_QWORD *)v33[1];
          }
          while ( v33 );
          v6 = v88;
          v31 = ListEntry;
        }
        v36 = v4->m_ObjectSize;
        LOBYTE(pRequest) = 1;
        if ( v36 )
        {
          v37 = (FxRequest_vtbl **)((char *)&v4->__vftable + v36);
          if ( v37 )
          {
            do
            {
              v38 = (_QWORD *)v37[1];
              if ( !(_BYTE)pRequest )
                FxPoolFree(v37);
              LOBYTE(pRequest) = 0;
              v37 = v38;
            }
            while ( v38 );
            v31 = ListEntry;
          }
        }
      }
      if ( v31 )
      {
        v4[-1].m_ForwardProgressList.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v31, (unsigned int)pRequest);
      }
      v39 = FxRequestFromLookaside::SelfDestruct;
      SelfDestruct = v4->SelfDestruct;
      if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
      {
        m_AllocatedMdl = v4->m_AllocatedMdl;
        m_DeviceBase = v4->m_DeviceBase;
        v4->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
        if ( m_AllocatedMdl )
        {
          if ( v4->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(v4->m_Globals, m_AllocatedMdl);
          else
            IoFreeMdl(m_AllocatedMdl);
        }
        m_RequestContext = v4->m_RequestContext;
        m_Irp = (_SLIST_ENTRY *)v4->m_Irp.m_Irp;
        ListEntry = m_Irp;
        if ( m_RequestContext )
        {
          if ( m_Irp )
          {
            m_RequestContext->ReleaseAndRestore(m_RequestContext, v4);
            m_Irp = ListEntry;
          }
          v66 = v4->m_RequestContext;
          if ( v66 )
          {
            ((void (__fastcall *)(FxRequestContext *, __int64))v66->~FxRequestContext)(v66, 1LL);
            m_Irp = ListEntry;
          }
        }
        if ( m_Irp && v4->m_IrpAllocation == 1 )
          IoFreeIrp(v4->m_Irp.m_Irp);
        m_Timer = v4->m_Timer;
        if ( m_Timer )
          FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v39);
        v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        {
          m_ForwardProgressQueue = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
          if ( m_ForwardProgressQueue )
          {
            FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, (unsigned int)v39);
            v4[-1].m_ForwardProgressQueue = 0LL;
          }
        }
        v4->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(v4, (unsigned int)v39, (unsigned int)v31);
        if ( v4->m_ForwardRequestToParent )
        {
          v68 = FxObject::_CleanupPointer(v4->m_Globals, v4);
          ExFreePoolWithTag(v68->Base, 0);
        }
        else
        {
          v46 = m_DeviceBase->m_Globals;
          if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
            p_Blink = (_SLIST_ENTRY *)&v4[-1].m_ForwardProgressList.Blink;
          else
            p_Blink = (_SLIST_ENTRY *)v4;
          ListEntry = p_Blink;
          if ( v46->FxPoolTrackingOn )
          {
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)p_Blink[-1].Next);
            p_Blink = ListEntry;
          }
          v48 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v48 && *(_WORD *)(v48 + 8) == 4354 && *(_BYTE *)(v48 + 1651) )
          {
            ListEntry = p_Blink[-1].Next;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, ListEntry);
              m_CanComplete = v90;
              goto LABEL_9;
            }
            (*(void (__fastcall **)(PSLIST_ENTRY))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(ListEntry);
          }
          else
          {
            p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
            ListEntry = p_Blink[-1].Next;
            ++HIDWORD(p_m_SpinLock[1].m_Lock);
            if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
            {
              ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
              ((void (__fastcall *)(PSLIST_ENTRY))p_m_SpinLock[3].m_Lock)(ListEntry);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, ListEntry);
            }
          }
        }
      }
      else
      {
        v51 = FxObject::SelfDestruct;
        if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
        {
          v52 = v4->~FxObject;
          if ( (char *)v52 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            v4->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            m_Lock = (void *)v4->m_NPLock.m_Lock;
            if ( m_Lock )
            {
              ZwClose(m_Lock);
              v4->m_NPLock.m_Lock = 0LL;
            }
            v54 = *(void **)&v4->m_NPLock.m_DbgFlagIsInitialized;
            v4->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
            if ( v54 )
            {
              FxPoolFree(v54);
              *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = 0LL;
            }
            FxObject::~FxObject(v4, (unsigned int)v51, (unsigned int)v31);
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
              v55 = &v4[-1].m_ForwardProgressList.Blink;
            else
              v55 = (_LIST_ENTRY **)v4;
            if ( !v55 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v52 != (char *)FxFileObject::`vector deleting destructor' )
            {
              if ( (char *)v52 == (char *)FxRequest::`scalar deleting destructor' )
              {
                v4->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
                v57 = v4->m_AllocatedMdl;
                if ( v57 )
                {
                  if ( v4->m_Globals->FxVerifierOn )
                    FxMdlFreeDebug(v4->m_Globals, v4->m_AllocatedMdl);
                  else
                    IoFreeMdl(v57);
                }
                v58 = v4->m_RequestContext;
                v59 = v4->m_Irp.m_Irp;
                if ( v58 )
                {
                  if ( v59 )
                    v58->ReleaseAndRestore(v58, v4);
                  v70 = v4->m_RequestContext;
                  if ( v70 )
                    ((void (__fastcall *)(FxRequestContext *, __int64))v70->~FxRequestContext)(v70, 1LL);
                }
                if ( v59 && v4->m_IrpAllocation == 1 )
                  IoFreeIrp(v4->m_Irp.m_Irp);
                v60 = v4->m_Timer;
                if ( v60 )
                  FxRequestTimer::`scalar deleting destructor'(v60, (unsigned int)v51);
                v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
                {
                  v71 = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
                  if ( v71 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v71, (unsigned int)v51);
                    v4[-1].m_ForwardProgressQueue = 0LL;
                  }
                }
                v4->m_NPLock.m_DbgFlagIsInitialized = 0;
                FxObject::~FxObject(v4, (unsigned int)v51, (unsigned int)v31);
                if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
                  v61 = &v4[-1].m_ForwardProgressList.Blink;
                else
                  v61 = (_LIST_ENTRY **)v4;
                FxPoolFree(v61);
                m_CanComplete = v90;
              }
              else
              {
                ((void (__fastcall *)(FxRequest *, __int64))v52)(v4, 1LL);
                m_CanComplete = v90;
              }
              goto LABEL_9;
            }
            v4->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
            v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
            {
              v69 = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
              if ( v69 )
              {
                FxVerifierLock::`scalar deleting destructor'(v69, (unsigned int)FxObject::SelfDestruct);
                v4[-1].m_ForwardProgressQueue = 0LL;
              }
            }
            v4->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(v4, (unsigned int)v51, (unsigned int)v31);
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
              v55 = &v4[-1].m_ForwardProgressList.Blink;
            else
              v55 = (_LIST_ENTRY **)v4;
            if ( !v55 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)v55 & 0xFFF) != 0 )
          {
            v56 = (FX_POOL_TRACKER *)*(v55 - 2);
            if ( LOBYTE((*(v55 - 1))[16].Blink) )
            {
              if ( FxIsPagedPoolType(v56->PoolType) )
                FxPoolRemovePagedAllocateTracker(v56);
              else
                FxPoolRemoveNonPagedAllocateTracker(v56);
              memset(v56, 0, v56->Size + 64);
            }
            ExFreePoolWithTag(v56, 0);
            m_CanComplete = v90;
            goto LABEL_9;
          }
          ExFreePoolWithTag(v55, 0);
        }
        else
        {
          SelfDestruct(v4);
        }
      }
    }
    m_CanComplete = v90;
  }
LABEL_9:
  if ( m_Reserved && v13 == 1 && v4->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(v4->m_ForwardProgressQueue, v4);
  }
  else if ( !v11 && m_CanComplete && v13 == 1 && v4->m_Completed )
  {
    v72 = v4->m_CompletionState;
    m_IoQueue = v4->m_IoQueue;
    v74 = v4->m_Irp.m_Irp;
    m_PriorityBoost = v4->m_PriorityBoost;
    v4->m_CompletionState = 0;
    v4->m_IoQueue = 0LL;
    v4->m_Irp.m_Irp = 0LL;
    IofCompleteRequest(v74, m_PriorityBoost);
    FxRequest::PostProcessCompletionForDriverRequest(v76, v72, m_IoQueue);
  }
LABEL_11:
  v14 = v4->m_ObjectSize;
  if ( v14 )
    _a1 = (WDFREQUEST__ *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  CurrentStackLocation = v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( !v6->m_IoRead.Method )
      goto LABEL_78;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length || v6->m_AllowZeroLengthRequests )
    {
      v4->m_Presented = 1;
      if ( v5->FxVerboseOn )
        WPP_IFR_SF_q(v5, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      if ( v6->m_ObjectSize )
        v7 = (WDFQUEUE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoWrite::Invoke((FxIoQueueIoWrite *)&v6->m_IoRead, v7, _a1, Length);
      goto LABEL_25;
    }
    if ( v5->FxVerboseOn )
    {
      if ( v6->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qq(v5, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    }
    FxRequest::Complete(v4, 0);
    if ( v5->FxVerifierOn )
    {
      v79 = 3258LL;
      goto LABEL_242;
    }
  }
  else
  {
    if ( MajorFunction != 4 )
    {
      if ( MajorFunction == 14 )
      {
        if ( v6->m_IoDeviceControl.Method )
        {
          v4->m_Presented = 1;
          if ( v5->FxVerboseOn )
            WPP_IFR_SF_q(v5, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          p_MajorFunction = (unsigned int *)&v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
          v19 = p_MajorFunction[6];
          v20 = p_MajorFunction[4];
          v21 = p_MajorFunction[2];
          if ( v6->m_ObjectSize )
            v7 = (WDFQUEUE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v6->m_IoDeviceControl.Method )
            goto LABEL_25;
          m_CallbackLock = v6->m_IoDeviceControl.m_CallbackLock;
          LOBYTE(ListEntry) = 0;
          if ( m_CallbackLock )
            m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&ListEntry);
          v6->m_IoDeviceControl.Method(v7, _a1, v21, v20, v19);
          v23 = v6->m_IoDeviceControl.m_CallbackLock;
          if ( !v23 )
            goto LABEL_25;
          v29 = (unsigned __int8)ListEntry;
LABEL_124:
          v23->Unlock(v23, v29);
LABEL_25:
          if ( !v5->FxVerifierOn )
            return;
          FxNonPagedObject::Lock(v4, v87);
          m_VerifierFlags = v4->m_VerifierFlags;
          FxNonPagedObject::Unlock(v4, v87[0]);
          if ( (m_VerifierFlags & 4) == 0 )
            FxRequestBase::ClearVerifierFlags(v4, 8);
          v79 = 3462LL;
LABEL_242:
          v4->Release(v4, (void *)1952543827, v79, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          return;
        }
      }
      else if ( MajorFunction == 15 && v6->m_IoInternalDeviceControl.Method )
      {
        v4->m_Presented = 1;
        if ( v5->FxVerboseOn )
          WPP_IFR_SF_q(v5, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, _a1);
        v24 = (unsigned int *)&v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
        v25 = v24[6];
        v26 = v24[4];
        v27 = v24[2];
        if ( v6->m_ObjectSize )
          v7 = (WDFQUEUE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v6->m_IoInternalDeviceControl.Method )
          goto LABEL_25;
        v28 = v6->m_IoInternalDeviceControl.m_CallbackLock;
        v92 = 0;
        if ( v28 )
          v28->Lock(v28, &v92);
        v6->m_IoInternalDeviceControl.Method(v7, _a1, v27, v26, v25);
        v23 = v6->m_IoInternalDeviceControl.m_CallbackLock;
        if ( !v23 )
          goto LABEL_25;
        v29 = v92;
        goto LABEL_124;
      }
LABEL_78:
      if ( !v6->m_IoDefault.Method )
      {
        WPP_IFR_SF_Lqd(
          v5,
          (unsigned __int8)CurrentStackLocation,
          a3,
          0x3Bu,
          WPP_FxIoQueue_cpp_Traceguids,
          MajorFunction,
          v4,
          -1073741808);
        FxRequest::Complete(v4, -1073741808);
        if ( v5->FxVerifierOn )
        {
          v79 = 3433LL;
          goto LABEL_242;
        }
        return;
      }
      if ( v5->FxVerboseOn )
        WPP_IFR_SF_q(v5, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      if ( v6->m_AllowZeroLengthRequests )
        goto LABEL_82;
      if ( MajorFunction == 3 )
      {
        if ( !v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
        {
          if ( v5->FxVerboseOn )
          {
            if ( v6->m_ObjectSize )
              v83 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v83 = 0LL;
            WPP_IFR_SF_qq(v5, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, _a1, v83);
          }
          FxRequest::Complete(v4, 0);
          if ( v5->FxVerifierOn )
          {
            v79 = 3381LL;
            goto LABEL_242;
          }
          return;
        }
      }
      else if ( MajorFunction == 4 && !v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      {
        FxRequest::Complete(v4, 0);
        if ( v5->FxVerboseOn )
        {
          if ( v6->m_ObjectSize )
            v84 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v84 = 0LL;
          WPP_IFR_SF_qq(v5, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, _a1, v84);
        }
        if ( v5->FxVerifierOn )
        {
          v79 = 3402LL;
          goto LABEL_242;
        }
        return;
      }
LABEL_82:
      v4->m_Presented = 1;
      if ( v6->m_ObjectSize )
        v7 = (WDFQUEUE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v6->m_IoDefault.Method )
        goto LABEL_25;
      v50 = v6->m_IoDefault.m_CallbackLock;
      v93 = 0;
      if ( v50 )
        v50->Lock(v50, &v93);
      v6->m_IoDefault.Method(v7, _a1);
      v23 = v6->m_IoDefault.m_CallbackLock;
      if ( !v23 )
        goto LABEL_25;
      v29 = v93;
      goto LABEL_124;
    }
    if ( !v6->m_IoWrite.Method )
      goto LABEL_78;
    v80 = CurrentStackLocation->Parameters.Read.Length;
    if ( v80 || v6->m_AllowZeroLengthRequests )
    {
      v4->m_Presented = 1;
      if ( v5->FxVerboseOn )
      {
        if ( v14 )
          v82 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v82 = 0LL;
        WPP_IFR_SF_q(v5, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v82);
      }
      if ( v6->m_ObjectSize )
        v7 = (WDFQUEUE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoWrite::Invoke(&v6->m_IoWrite, v7, _a1, v80);
      goto LABEL_25;
    }
    if ( v5->FxVerboseOn )
    {
      if ( v6->m_ObjectSize )
        v81 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v81 = 0LL;
      WPP_IFR_SF_qq(v5, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, _a1, v81);
    }
    FxRequest::Complete(v4, 0);
    if ( v5->FxVerifierOn )
    {
      v79 = 3297LL;
      goto LABEL_242;
    }
  }
}
