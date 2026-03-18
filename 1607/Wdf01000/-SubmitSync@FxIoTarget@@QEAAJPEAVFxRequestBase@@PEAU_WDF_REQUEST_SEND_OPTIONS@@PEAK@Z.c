/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610
 * Callers:
 *     imp_WdfRequestSend @ 0x1C000EAA0 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0081CD4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00828D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00843B8 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0085C80 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C00865B0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0086AB0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0088530 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0089EE8 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008B9D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008BCE4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008D6B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008E2FC (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E520 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000D9D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002D814 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_qD @ 0x1C006A380 (WPP_IFR_SF_qD.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0078594 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned __int8 v8; // r8
  bool v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // r13d
  unsigned __int8 v12; // r12
  int v13; // edi
  unsigned __int8 v14; // r8
  unsigned int v15; // r8d
  unsigned int v16; // esi
  unsigned int v17; // edx
  int v18; // esi
  _IRP *m_Irp; // rdx
  void (__fastcall *Send)(FxIoTarget *, _IRP *); // rax
  _LARGE_INTEGER *Timeout; // rdi
  NTSTATUS v22; // edi
  unsigned int (__fastcall *Release)(FxObject *, void *, int, char *); // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v25; // r12
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v28)(unsigned __int64); // rax
  void (__fastcall *v29)(unsigned __int64); // rax
  unsigned __int16 v30; // ax
  _QWORD *v31; // rcx
  _QWORD *v32; // rdi
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  void (__fastcall *v34)(FxObject *); // rax
  void *m_Lock; // rcx
  _QWORD *v36; // rcx
  FxRequestBase *v37; // rax
  FX_POOL_TRACKER *v38; // rdi
  FxRequestContext *v39; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v44; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequestBase *v46; // rcx
  const void *_a2; // rax
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v49; // r10
  const _GUID *v50; // r11
  _FILE_OBJECT *m_TargetFileObject; // rcx
  _FILE_OBJECT *v52; // rcx
  const void *TraceObjectHandle; // rax
  unsigned __int8 v54; // dl
  _FX_DRIVER_GLOBALS *v55; // r10
  FxTagTracker *v56; // rcx
  const void *v57; // rax
  _FX_DRIVER_GLOBALS *v58; // r10
  unsigned __int8 v59; // dl
  unsigned __int8 v60; // r8
  FxTagTracker *v61; // rcx
  FxVerifierLock *m_IrpQueue; // rcx
  FxRequestContext *v63; // rcx
  FxVerifierLock *v64; // rcx
  __int64 timeout; // [rsp+40h] [rbp-29h] BYREF
  FxTargetSubmitSyncParams params; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 irql; // [rsp+D8h] [rbp+6Fh] BYREF
  int status; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int *v71; // [rsp+E8h] [rbp+7Fh]

  v71 = Action;
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  memset(&params.Status, 0, 24);
  status = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qq(v49, 5u, 0xEu, 0x24u, v50, _a1, _a2);
  }
  v9 = (Request->m_RequestBaseFlags & 0x10) != 0;
  if ( Action )
    v10 = *Action;
  else
    v10 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v10 |= 0x10u;
  }
  if ( (v10 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v11 = Options->Flags & 0xFFFFFFFE;
  else
    v11 = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetFileObject, &PreviousIrql, v8);
    v12 = PreviousIrql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    PreviousIrql = v12;
  }
  v13 = FxIoTarget::SubmitLocked(this, Request, Options, v11);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v52 = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v52, v12, v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v12);
  v16 = v13 | v10;
  if ( this->m_Globals->FxVerboseOn )
  {
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qD(v55, v54, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle, v16);
  }
  v17 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v56 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
    if ( v56 )
      FxTagTracker::UpdateTagHistory(
        v56,
        &status,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v17);
  }
  if ( (v16 & 1) != 0 )
  {
    v18 = v16 | 4;
    if ( this->m_Globals->FxVerboseOn )
    {
      v57 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qq(v58, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v57, Request->m_Irp.m_Irp);
    }
    m_Irp = Request->m_Irp.m_Irp;
    Send = this->Send;
    if ( Send == FxIoTarget::Send )
      IofCallDriver(this->m_TargetDevice, m_Irp);
    else
      Send(this, m_Irp);
    v16 = v18 | 8;
  }
  else if ( (v16 & 2) != 0 )
  {
    v16 |= 0xCu;
  }
  else if ( (v16 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
  if ( (v16 & 4) != 0 )
  {
    if ( (v16 & 8) != 0 )
    {
      Timeout = (v16 & 0x10) != 0 ? (_LARGE_INTEGER *)&timeout : 0LL;
      KeEnterCriticalRegion();
      v22 = KeWaitForSingleObject(&params, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      status = v22;
      if ( v22 == 258 )
      {
        FxNonPagedObject::Lock(this, &irql, v15);
        v59 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v59, v60);
        FxRequestBase::Cancel(Request);
        FxCREvent::EnterCRAndWaitAndLeave(&params.SynchEvent);
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Release = Request->Release;
  if ( (char *)Release != (char *)FxObject::Release )
  {
    Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    goto LABEL_66;
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v61 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
    if ( v61 )
      FxTagTracker::UpdateTagHistory(
        v61,
        &status,
        1865,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagRelease,
        Request->m_Refcnt - 1);
  }
  if ( !_InterlockedDecrement(&Request->m_Refcnt) )
  {
    m_ObjectFlags = Request->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(Request, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(Request->m_Globals->Driver->m_DisposeList, Request);
      goto LABEL_66;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      v25 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
      if ( v25 )
        FxTagTracker::CheckForAbandondedTags(*(FxTagTracker **)&Request[-1].m_SystemBufferOffset);
    }
    else
    {
      v25 = 0LL;
    }
    m_ObjectSize = Request->m_ObjectSize;
    if ( m_ObjectSize && (Request->m_ObjectFlags & 8) != 0 )
    {
      for ( i = (FxRequestBase_vtbl **)((char *)&Request->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
      {
        v28 = (void (__fastcall *)(unsigned __int64))i[2];
        if ( v28 )
        {
          v28((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[2] = 0LL;
        }
        v29 = (void (__fastcall *)(unsigned __int64))i[3];
        if ( v29 )
        {
          v29((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[3] = 0LL;
        }
      }
      v30 = Request->m_ObjectSize;
      LOBYTE(v17) = 1;
      if ( v30 )
      {
        v31 = (FxRequestBase_vtbl **)((char *)&Request->__vftable + v30);
        if ( v31 )
        {
          do
          {
            v32 = (_QWORD *)v31[1];
            if ( !(_BYTE)v17 )
              FxPoolFree(v31);
            LOBYTE(v17) = 0;
            v31 = v32;
          }
          while ( v32 );
        }
      }
    }
    if ( v25 )
    {
      *(_QWORD *)&Request[-1].m_SystemBufferOffset = 0LL;
      FxTagTracker::`scalar deleting destructor'(v25, v17);
    }
    SelfDestruct = Request->SelfDestruct;
    if ( (char *)SelfDestruct != (char *)FxObject::SelfDestruct )
    {
      Request->SelfDestruct(Request);
      goto LABEL_66;
    }
    v34 = Request->~FxObject;
    if ( (char *)v34 == (char *)FxRegKey::`scalar deleting destructor' )
    {
      Request->__vftable = (FxRequestBase_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
      m_Lock = (void *)Request->m_NPLock.m_Lock;
      if ( m_Lock )
      {
        ZwClose(m_Lock);
        Request->m_NPLock.m_Lock = 0LL;
      }
      v36 = *(_QWORD **)&Request->m_NPLock.m_DbgFlagIsInitialized;
      Request->__vftable = (FxRequestBase_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
      if ( v36 )
      {
        FxPoolFree(v36);
        *(_QWORD *)&Request->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(Request, (unsigned int)SelfDestruct, v15);
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        v37 = (FxRequestBase *)((char *)Request - 32);
      else
        v37 = Request;
      if ( !v37 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_62:
      if ( ((unsigned __int16)v37 & 0xFFF) != 0 )
      {
        v38 = *(FX_POOL_TRACKER **)&v37[-1].m_OutputBufferOffset;
        if ( LOBYTE(v37[-1].m_AllocatedMdl[5].MappedSystemVa) )
        {
          if ( FxIsPagedPoolType(v38->PoolType) )
            FxPoolRemovePagedAllocateTracker(v38);
          else
            FxPoolRemoveNonPagedAllocateTracker(v38);
          memset(v38, 0, v38->Size + 64);
        }
        ExFreePoolWithTag(v38, 0);
      }
      else
      {
        ExFreePoolWithTag(v37, 0);
      }
      goto LABEL_66;
    }
    if ( (char *)v34 == (char *)FxFileObject::`vector deleting destructor' )
    {
      Request->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
      Request->__vftable = (FxRequestBase_vtbl *)&FxNonPagedObject::`vftable';
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
      {
        m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue;
        if ( m_IrpQueue )
        {
          FxVerifierLock::`scalar deleting destructor'(m_IrpQueue, (unsigned int)SelfDestruct);
          Request[-1].m_IrpQueue = 0LL;
        }
      }
      Request->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(Request, (unsigned int)SelfDestruct, v15);
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        v37 = (FxRequestBase *)((char *)Request - 32);
      else
        v37 = Request;
      if ( !v37 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      goto LABEL_62;
    }
    if ( (char *)v34 == (char *)FxRequest::`scalar deleting destructor' )
    {
      Request->__vftable = (FxRequestBase_vtbl *)&FxRequestBase::`vftable';
      m_AllocatedMdl = Request->m_AllocatedMdl;
      if ( m_AllocatedMdl )
      {
        if ( Request->m_Globals->FxVerifierOn )
          FxMdlFreeDebug(Request->m_Globals, Request->m_AllocatedMdl);
        else
          IoFreeMdl(m_AllocatedMdl);
      }
      m_RequestContext = Request->m_RequestContext;
      v44 = Request->m_Irp.m_Irp;
      if ( m_RequestContext )
      {
        if ( v44 )
          m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
        v63 = Request->m_RequestContext;
        if ( v63 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v63->~FxRequestContext)(v63, 1LL);
      }
      if ( v44 && Request->m_IrpAllocation == 1 )
        IoFreeIrp(Request->m_Irp.m_Irp);
      m_Timer = Request->m_Timer;
      if ( m_Timer )
        FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)SelfDestruct);
      Request->__vftable = (FxRequestBase_vtbl *)&FxNonPagedObject::`vftable';
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
      {
        v64 = (FxVerifierLock *)Request[-1].m_IrpQueue;
        if ( v64 )
        {
          FxVerifierLock::`scalar deleting destructor'(v64, (unsigned int)SelfDestruct);
          Request[-1].m_IrpQueue = 0LL;
        }
      }
      Request->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(Request, (unsigned int)SelfDestruct, v15);
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        v46 = (FxRequestBase *)((char *)Request - 32);
      else
        v46 = Request;
      FxPoolFree(v46);
    }
    else
    {
      ((void (__fastcall *)(FxRequestBase *, __int64))v34)(Request, 1LL);
    }
  }
LABEL_66:
  if ( v71 )
    *v71 = v16;
  if ( v9 )
  {
    v39 = Request->m_RequestContext;
    if ( v39 )
    {
      if ( Request->m_Irp.m_Irp )
      {
        v39->ReleaseAndRestore(v39, Request);
        m_Globals = Request->m_Globals;
        if ( m_Globals->FxVerifierOn )
        {
          if ( m_Globals->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(Request, 128);
        }
      }
    }
  }
  return (unsigned int)status;
}
