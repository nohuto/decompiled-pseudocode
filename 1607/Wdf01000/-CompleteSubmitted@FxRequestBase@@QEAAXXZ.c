/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000CB30 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C002AB5C (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0063AE4 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0083D90 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084464 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
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
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0063164 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this, __int64 a2, _IRP *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequest *v4; // rbx
  FxIoTarget *m_Target; // rsi
  FxRequestContext *m_RequestContext; // rcx
  FxRequestContext *v7; // rdi
  void (__fastcall *CopyParameters)(FxIoContext *, FxRequestBase *); // rax
  int v9; // ecx
  void *UserBuffer; // rcx
  void (__fastcall *v11)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rax
  _KEVENT *v12; // rdi
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _LIST_ENTRY *Blink; // rax
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r10
  _IRP *m_Irp; // rax
  FxIoTarget *v19; // rdx
  void *m_TargetCompletionContext; // r9
  _IO_STATUS_BLOCK IoStatus; // xmm0
  __int64 (__fastcall *Release)(FxRequest *, void *, __int64, char *); // rax
  unsigned __int8 m_Reserved; // r12
  unsigned __int8 m_CanComplete; // r13
  bool v25; // r15
  signed __int32 v26; // edi
  int v27; // ecx
  int v28; // ecx
  unsigned __int16 v29; // cx
  FxTagTracker *v30; // rbp
  unsigned __int16 v31; // cx
  _QWORD *j; // rdi
  void (__fastcall *v33)(unsigned __int64); // rax
  void (__fastcall *v34)(unsigned __int64); // rax
  unsigned __int16 v35; // ax
  _QWORD *v36; // rcx
  _QWORD *v37; // rdi
  void (__fastcall *v38)(FxObject *, unsigned int); // rdx
  void (__fastcall *v39)(FxObject *, unsigned int); // r8
  FxRegKey *(__fastcall *v40)(FxRegKey *, char); // rax
  void *v41; // rcx
  void *v42; // rcx
  FX_POOL_TRACKER *v43; // rdi
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v45; // r14
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rsi
  void (__fastcall *v48)(unsigned __int64); // rax
  void (__fastcall *v49)(unsigned __int64); // rax
  unsigned __int16 v50; // ax
  _QWORD *v51; // rcx
  _QWORD *v52; // rsi
  void (__fastcall *v53)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  FxRequestContext *v57; // rcx
  _IRP *v58; // rbp
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v60; // rbp
  __int64 v61; // rax
  _SLIST_ENTRY *v62; // rbp
  MxLock *p_m_SpinLock; // rsi
  void (__fastcall *v64)(FxObject *, unsigned int); // rdx
  void (__fastcall *v65)(FxObject *); // rax
  void *m_Lock; // rcx
  void *v67; // rcx
  unsigned __int16 *p_Blink; // rax
  FX_POOL_TRACKER *v69; // rsi
  _MDL *v70; // rcx
  FxRequestContext *v71; // rcx
  _IRP *v72; // rdi
  FxRequestTimer *v73; // rcx
  _MDL *v74; // rcx
  FxRequestContext *v75; // rcx
  _IRP *v76; // rsi
  FxRequestTimer *v77; // rcx
  unsigned __int16 *v78; // rcx
  _SLIST_ENTRY *m_InternalContext; // rbp
  FxTagTracker *v80; // rcx
  FxRequestContext *v81; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FX_POOL_HEADER *v83; // rax
  FxVerifierLock *v84; // rcx
  FxRequestContext *v85; // rcx
  FxVerifierLock *v86; // rcx
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *v89; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v91; // rcx
  FxTagTracker *v92; // rcx
  FxVerifierLock *v93; // rcx
  FxRequestContext *v94; // rcx
  FxVerifierLock *v95; // rcx
  char v96; // [rsp+30h] [rbp-78h] BYREF
  int v97; // [rsp+34h] [rbp-74h]
  _IO_STATUS_BLOCK v98; // [rsp+38h] [rbp-70h]
  __int64 v99; // [rsp+48h] [rbp-60h]
  __int64 v100; // [rsp+50h] [rbp-58h]
  __int64 v101; // [rsp+58h] [rbp-50h]
  __int64 v102; // [rsp+60h] [rbp-48h]
  __int64 v103; // [rsp+68h] [rbp-40h]
  __int64 v104; // [rsp+70h] [rbp-38h]
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]

  m_Globals = this->m_Globals;
  v4 = (FxRequest *)this;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( this->m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    FxRequestBase::VerifierClearFormatted(v4);
  }
  m_RequestContext = v4->m_RequestContext;
  if ( !m_RequestContext )
  {
    m_Completion = v4->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_29;
    m_Irp = v4->m_Irp.m_Irp;
    v19 = v4->m_Target;
    m_TargetCompletionContext = v4->m_TargetCompletionContext;
    v97 = 255;
    IoStatus = m_Irp->IoStatus;
    v99 = 0LL;
    v98 = IoStatus;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v4->m_TargetCompletionContext = 0LL;
    if ( v19->m_ObjectSize )
      v14 = (unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v14 = 0LL;
    if ( v4->m_ObjectSize )
      v15 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    v4->m_CompletionRoutine.m_Completion = 0LL;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)&v96;
    v11 = m_Completion;
    goto LABEL_28;
  }
  m_RequestContext->m_CompletionParams.IoStatus = v4->m_Irp.m_Irp->IoStatus;
  v7 = v4->m_RequestContext;
  CopyParameters = (void (__fastcall *)(FxIoContext *, FxRequestBase *))v7->CopyParameters;
  if ( CopyParameters != FxIoContext::CopyParameters )
  {
    CopyParameters((FxIoContext *)v4->m_RequestContext, v4);
    goto LABEL_13;
  }
  v9 = *((unsigned __int8 *)&v7[1].m_CompletionParams.Parameters.Usb + 35);
  if ( v9 != 15 )
  {
    v27 = v9 - 3;
    if ( !v27 || (v28 = v27 - 1) == 0 )
    {
      v7->m_CompletionParams.Parameters.Write.Length = v7->m_CompletionParams.IoStatus.Information;
      goto LABEL_9;
    }
    if ( v28 != 10 )
      goto LABEL_9;
  }
  v7->m_CompletionParams.Parameters.Ioctl.Output.Length = v7->m_CompletionParams.IoStatus.Information;
LABEL_9:
  m_Globals = (_FX_DRIVER_GLOBALS *)v7[1].__vftable;
  if ( m_Globals )
  {
    if ( *((_BYTE *)&v7[1].m_CompletionParams.Parameters.Usb + 32) )
    {
      a3 = v4->m_Irp.m_Irp;
      UserBuffer = a3->UserBuffer;
      if ( UserBuffer )
      {
        memmove(UserBuffer, m_Globals, a3->IoStatus.Information);
        *((_BYTE *)&v7[1].m_CompletionParams.Parameters.Usb + 32) = 0;
      }
    }
  }
LABEL_13:
  v11 = v4->m_CompletionRoutine.m_Completion;
  if ( !v11 )
    goto LABEL_29;
  v12 = (_KEVENT *)v4->m_TargetCompletionContext;
  p_m_CompletionParams = &v4->m_RequestContext->m_CompletionParams;
  v4->m_TargetCompletionContext = 0LL;
  if ( m_Target->m_ObjectSize )
    v14 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v14 = 0LL;
  if ( v4->m_ObjectSize )
    v15 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v15 = 0LL;
  v4->m_CompletionRoutine.m_Completion = 0LL;
  if ( v11 != FxIoTarget::_SyncCompletionRoutine )
  {
    m_TargetCompletionContext = v12;
LABEL_28:
    v11((WDFREQUEST__ *)v15, (WDFIOTARGET__ *)v14, p_m_CompletionParams, m_TargetCompletionContext);
    goto LABEL_29;
  }
  LODWORD(v12[1].Header.WaitListHead.Flink) = p_m_CompletionParams->IoStatus.Status;
  Blink = v12[1].Header.WaitListHead.Blink;
  if ( Blink )
    ((void (__fastcall *)(unsigned __int64, unsigned __int64, _WDF_REQUEST_COMPLETION_PARAMS *, _QWORD))Blink)(
      v15,
      v14,
      p_m_CompletionParams,
      *(_QWORD *)&v12[2].Header.Lock);
  KeSetEvent(v12, 0, 0);
LABEL_29:
  Release = (__int64 (__fastcall *)(FxRequest *, void *, __int64, char *))v4->Release;
  if ( Release == FxRequest::Release )
  {
    m_Reserved = v4->m_Reserved;
    m_CanComplete = v4->m_CanComplete;
    v25 = v4->m_IrpAllocation == 0;
    if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    {
      v80 = (FxTagTracker *)v4[-1].m_ForwardProgressList.Blink;
      if ( v80 )
        FxTagTracker::UpdateTagHistory(
          v80,
          m_Target,
          530,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp",
          TagRelease,
          v4->m_Refcnt - 1);
    }
    v26 = _InterlockedDecrement(&v4->m_Refcnt);
    if ( v26 )
      goto LABEL_32;
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
        v45 = (FxTagTracker *)v4[-1].m_ForwardProgressList.Blink;
        if ( v45 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v4[-1].m_ForwardProgressList.Blink);
      }
      else
      {
        v45 = 0LL;
      }
      m_ObjectSize = v4->m_ObjectSize;
      if ( m_ObjectSize && (v4->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxRequest_vtbl **)((char *)&v4->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v48 = (void (__fastcall *)(unsigned __int64))i[2];
          if ( v48 )
          {
            v48((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[2] = 0LL;
          }
          v49 = (void (__fastcall *)(unsigned __int64))i[3];
          if ( v49 )
          {
            v49((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[3] = 0LL;
          }
        }
        v50 = v4->m_ObjectSize;
        LOBYTE(m_Globals) = 1;
        if ( v50 )
        {
          v51 = (FxRequest_vtbl **)((char *)&v4->__vftable + v50);
          if ( v51 )
          {
            do
            {
              v52 = (_QWORD *)v51[1];
              if ( !(_BYTE)m_Globals )
                FxPoolFree(v51);
              LOBYTE(m_Globals) = 0;
              v51 = v52;
            }
            while ( v52 );
          }
        }
      }
      if ( v45 )
      {
        v4[-1].m_ForwardProgressList.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'(v45, (unsigned int)m_Globals);
      }
      v53 = FxRequestFromLookaside::SelfDestruct;
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
        v57 = v4->m_RequestContext;
        v58 = v4->m_Irp.m_Irp;
        if ( v57 )
        {
          if ( v58 )
            v57->ReleaseAndRestore(v57, v4);
          v81 = v4->m_RequestContext;
          if ( v81 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v81->~FxRequestContext)(v81, 1LL);
        }
        if ( v58 && v4->m_IrpAllocation == 1 )
          IoFreeIrp(v4->m_Irp.m_Irp);
        m_Timer = v4->m_Timer;
        if ( m_Timer )
          FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v53);
        v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        {
          m_ForwardProgressQueue = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
          if ( m_ForwardProgressQueue )
          {
            FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, (unsigned int)v53);
            v4[-1].m_ForwardProgressQueue = 0LL;
          }
        }
        v4->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(v4, (unsigned int)v53, (unsigned int)a3);
        if ( v4->m_ForwardRequestToParent )
        {
          v83 = FxObject::_CleanupPointer(v4->m_Globals, v4);
          ExFreePoolWithTag(v83->Base, 0);
        }
        else
        {
          if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
            v60 = (FxRequest *)((char *)v4 - 32);
          else
            v60 = v4;
          if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v60[-1].m_InternalContext);
          v61 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v61 && *(_WORD *)(v61 + 8) == 4354 && *(_BYTE *)(v61 + 1651) )
          {
            m_InternalContext = (_SLIST_ENTRY *)v60[-1].m_InternalContext;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
              (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
            else
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
          }
          else
          {
            v62 = (_SLIST_ENTRY *)v60[-1].m_InternalContext;
            p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
            ++HIDWORD(p_m_SpinLock[1].m_Lock);
            if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
            {
              ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
              ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v62);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v62);
            }
          }
        }
      }
      else
      {
        v64 = FxObject::SelfDestruct;
        if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
        {
          v65 = v4->~FxObject;
          if ( (char *)v65 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            v4->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            m_Lock = (void *)v4->m_NPLock.m_Lock;
            if ( m_Lock )
            {
              ZwClose(m_Lock);
              v4->m_NPLock.m_Lock = 0LL;
            }
            v67 = *(void **)&v4->m_NPLock.m_DbgFlagIsInitialized;
            v4->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
            if ( v67 )
            {
              FxPoolFree(v67);
              *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = 0LL;
            }
            FxObject::~FxObject(v4, (unsigned int)v64, (unsigned int)a3);
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
              p_Blink = (unsigned __int16 *)&v4[-1].m_ForwardProgressList.Blink;
            else
              p_Blink = (unsigned __int16 *)v4;
            if ( !p_Blink )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v65 != (char *)FxFileObject::`vector deleting destructor' )
            {
              if ( (char *)v65 == (char *)FxRequest::`scalar deleting destructor' )
              {
                v4->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
                v74 = v4->m_AllocatedMdl;
                if ( v74 )
                {
                  if ( v4->m_Globals->FxVerifierOn )
                    FxMdlFreeDebug(v4->m_Globals, v4->m_AllocatedMdl);
                  else
                    IoFreeMdl(v74);
                }
                v75 = v4->m_RequestContext;
                v76 = v4->m_Irp.m_Irp;
                if ( v75 )
                {
                  if ( v76 )
                    v75->ReleaseAndRestore(v75, v4);
                  v85 = v4->m_RequestContext;
                  if ( v85 )
                    ((void (__fastcall *)(FxRequestContext *, __int64))v85->~FxRequestContext)(v85, 1LL);
                }
                if ( v76 && v4->m_IrpAllocation == 1 )
                  IoFreeIrp(v4->m_Irp.m_Irp);
                v77 = v4->m_Timer;
                if ( v77 )
                  FxRequestTimer::`scalar deleting destructor'(v77, (unsigned int)v64);
                v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
                {
                  v86 = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
                  if ( v86 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v86, (unsigned int)v64);
                    v4[-1].m_ForwardProgressQueue = 0LL;
                  }
                }
                v4->m_NPLock.m_DbgFlagIsInitialized = 0;
                FxObject::~FxObject(v4, (unsigned int)v64, (unsigned int)a3);
                if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
                  v78 = (unsigned __int16 *)&v4[-1].m_ForwardProgressList.Blink;
                else
                  v78 = (unsigned __int16 *)v4;
                FxPoolFree(v78);
              }
              else
              {
                ((void (__fastcall *)(FxRequest *, __int64))v65)(v4, 1LL);
              }
              goto LABEL_32;
            }
            v4->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
            v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
            {
              v84 = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
              if ( v84 )
              {
                FxVerifierLock::`scalar deleting destructor'(v84, (unsigned int)FxObject::SelfDestruct);
                v4[-1].m_ForwardProgressQueue = 0LL;
              }
            }
            v4->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(v4, (unsigned int)v64, (unsigned int)a3);
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
              p_Blink = (unsigned __int16 *)&v4[-1].m_ForwardProgressList.Blink;
            else
              p_Blink = (unsigned __int16 *)v4;
            if ( !p_Blink )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
          {
            v69 = (FX_POOL_TRACKER *)*((_QWORD *)p_Blink - 2);
            if ( *(_BYTE *)(*((_QWORD *)p_Blink - 1) + 264LL) )
            {
              if ( FxIsPagedPoolType(v69->PoolType) )
                FxPoolRemovePagedAllocateTracker(v69);
              else
                FxPoolRemoveNonPagedAllocateTracker(v69);
              memset(v69, 0, v69->Size + 64);
            }
            ExFreePoolWithTag(v69, 0);
          }
          else
          {
            ExFreePoolWithTag(p_Blink, 0);
          }
        }
        else
        {
          SelfDestruct(v4);
        }
      }
    }
LABEL_32:
    if ( m_Reserved && v26 == 1 && v4->m_Completed )
    {
      FxIoQueue::ReturnReservedRequest(v4->m_ForwardProgressQueue, v4);
    }
    else if ( !v25 && m_CanComplete && v26 == 1 )
    {
      if ( v4->m_Completed )
      {
        m_CompletionState = v4->m_CompletionState;
        m_IoQueue = v4->m_IoQueue;
        v89 = v4->m_Irp.m_Irp;
        m_PriorityBoost = v4->m_PriorityBoost;
        v4->m_CompletionState = 0;
        v4->m_IoQueue = 0LL;
        v4->m_Irp.m_Irp = 0LL;
        IofCompleteRequest(v89, m_PriorityBoost);
        FxRequest::PostProcessCompletionForDriverRequest(v91, m_CompletionState, m_IoQueue);
      }
    }
    return;
  }
  if ( (char *)Release != (char *)FxObject::Release )
  {
    Release(v4, m_Target, 530LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
    return;
  }
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
  {
    v92 = (FxTagTracker *)v4[-1].m_ForwardProgressList.Blink;
    if ( v92 )
      FxTagTracker::UpdateTagHistory(
        v92,
        m_Target,
        530,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp",
        TagRelease,
        v4->m_Refcnt - 1);
  }
  if ( _InterlockedExchangeAdd(&v4->m_Refcnt, 0xFFFFFFFF) == 1 )
  {
    v29 = v4->m_ObjectFlags;
    if ( (v29 & 0x20) != 0 || (v29 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(v4, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(v4->m_Globals->Driver->m_DisposeList, v4);
      return;
    }
    if ( (v29 & 0x80u) != 0 )
    {
      v30 = (FxTagTracker *)v4[-1].m_ForwardProgressList.Blink;
      if ( v30 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v4[-1].m_ForwardProgressList.Blink);
    }
    else
    {
      v30 = 0LL;
    }
    v31 = v4->m_ObjectSize;
    if ( v31 && (v4->m_ObjectFlags & 8) != 0 )
    {
      for ( j = (FxRequest_vtbl **)((char *)&v4->__vftable + v31); j; j = (_QWORD *)j[1] )
      {
        v33 = (void (__fastcall *)(unsigned __int64))j[2];
        if ( v33 )
        {
          v33((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          j[2] = 0LL;
        }
        v34 = (void (__fastcall *)(unsigned __int64))j[3];
        if ( v34 )
        {
          v34((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          j[3] = 0LL;
        }
      }
      v35 = v4->m_ObjectSize;
      LOBYTE(m_Globals) = 1;
      if ( v35 )
      {
        v36 = (FxRequest_vtbl **)((char *)&v4->__vftable + v35);
        if ( v36 )
        {
          do
          {
            v37 = (_QWORD *)v36[1];
            if ( !(_BYTE)m_Globals )
              FxPoolFree(v36);
            LOBYTE(m_Globals) = 0;
            v36 = v37;
          }
          while ( v37 );
        }
      }
    }
    if ( v30 )
    {
      v4[-1].m_ForwardProgressList.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'(v30, (unsigned int)m_Globals);
    }
    v38 = FxObject::SelfDestruct;
    v39 = (void (__fastcall *)(FxObject *, unsigned int))v4->SelfDestruct;
    if ( v39 != FxObject::SelfDestruct )
    {
      v4->SelfDestruct(v4);
      return;
    }
    v40 = (FxRegKey *(__fastcall *)(FxRegKey *, char))v4->~FxObject;
    if ( v40 == FxRegKey::`scalar deleting destructor' )
    {
      v4->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
      v41 = (void *)v4->m_NPLock.m_Lock;
      if ( v41 )
      {
        ZwClose(v41);
        v4->m_NPLock.m_Lock = 0LL;
      }
      v42 = *(void **)&v4->m_NPLock.m_DbgFlagIsInitialized;
      v4->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
      if ( v42 )
      {
        FxPoolFree(v42);
        *(_QWORD *)&v4->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(v4, (unsigned int)v38, (unsigned int)v39);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        v4 = (FxRequest *)((char *)v4 - 32);
      if ( !v4 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
      {
LABEL_73:
        v43 = (FX_POOL_TRACKER *)v4[-1].m_InternalContext;
        if ( *(_BYTE *)(*(_QWORD *)&v4[-1].m_Presented + 264LL) )
        {
          if ( FxIsPagedPoolType(v43->PoolType) )
            FxPoolRemovePagedAllocateTracker(v43);
          else
            FxPoolRemoveNonPagedAllocateTracker(v43);
          memset(v43, 0, v43->Size + 64);
        }
        ExFreePoolWithTag(v43, 0);
        return;
      }
LABEL_225:
      ExFreePoolWithTag(v4, 0);
      return;
    }
    if ( (char *)v40 == (char *)FxFileObject::`vector deleting destructor' )
    {
      v4->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
      v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      {
        v93 = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
        if ( v93 )
        {
          FxVerifierLock::`scalar deleting destructor'(v93, (unsigned int)FxObject::SelfDestruct);
          v4[-1].m_ForwardProgressQueue = 0LL;
        }
      }
      v4->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(v4, (unsigned int)v38, (unsigned int)v39);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        v4 = (FxRequest *)((char *)v4 - 32);
      if ( !v4 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
        goto LABEL_73;
      goto LABEL_225;
    }
    if ( (char *)v40 == (char *)FxRequest::`scalar deleting destructor' )
    {
      v4->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
      v70 = v4->m_AllocatedMdl;
      if ( v70 )
      {
        if ( v4->m_Globals->FxVerifierOn )
          FxMdlFreeDebug(v4->m_Globals, v4->m_AllocatedMdl);
        else
          IoFreeMdl(v70);
      }
      v71 = v4->m_RequestContext;
      v72 = v4->m_Irp.m_Irp;
      if ( v71 )
      {
        if ( v72 )
          v71->ReleaseAndRestore(v71, v4);
        v94 = v4->m_RequestContext;
        if ( v94 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v94->~FxRequestContext)(v94, 1LL);
      }
      if ( v72 && v4->m_IrpAllocation == 1 )
        IoFreeIrp(v4->m_Irp.m_Irp);
      v73 = v4->m_Timer;
      if ( v73 )
        FxRequestTimer::`scalar deleting destructor'(v73, (unsigned int)v38);
      v4->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      {
        v95 = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue;
        if ( v95 )
        {
          FxVerifierLock::`scalar deleting destructor'(v95, (unsigned int)v38);
          v4[-1].m_ForwardProgressQueue = 0LL;
        }
      }
      v4->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(v4, (unsigned int)v38, (unsigned int)v39);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        v4 = (FxRequest *)((char *)v4 - 32);
      FxPoolFree(v4);
    }
    else
    {
      v40((FxRegKey *)v4, 1);
    }
  }
}
