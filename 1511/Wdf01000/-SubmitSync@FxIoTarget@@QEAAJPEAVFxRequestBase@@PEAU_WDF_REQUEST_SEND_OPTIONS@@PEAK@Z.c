/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004AD0 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0073D34 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0074930 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0076418 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00790B0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0079990 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0079BA0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C007A4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007B8C0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007BBD4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007D2A4 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007D4C8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0080698 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005E40 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00250AC (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qD @ 0x1C005CE10 (WPP_IFR_SF_qD.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned __int8 v8; // r8
  bool v9; // r15
  unsigned int v10; // ebx
  unsigned __int8 v11; // r13
  int v12; // edi
  unsigned __int8 v13; // r8
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  _LARGE_INTEGER *Timeout; // rdi
  int v17; // ebx
  NTSTATUS v18; // edi
  unsigned __int8 v19; // r8
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  const void *TraceObjectHandle; // rax
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v25; // r10
  const _GUID *v26; // r11
  _FILE_OBJECT *m_TargetFileObject; // rcx
  _FILE_OBJECT *v28; // rcx
  const void *v29; // rax
  unsigned __int8 v30; // dl
  _FX_DRIVER_GLOBALS *v31; // r10
  FxTagTracker *v32; // rcx
  const void *v33; // rax
  _FX_DRIVER_GLOBALS *v34; // r10
  unsigned __int8 v35; // dl
  unsigned __int8 v36; // r8
  FxTargetSubmitSyncParams params; // [rsp+48h] [rbp-29h] BYREF
  void *m_TargetCompletionContext; // [rsp+80h] [rbp+Fh]
  unsigned __int8 PreviousIrql; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int irql; // [rsp+E0h] [rbp+6Fh] BYREF
  int status; // [rsp+E8h] [rbp+77h] BYREF
  unsigned int *v42; // [rsp+F0h] [rbp+7Fh]

  v42 = Action;
  LOBYTE(params.Status) = 0;
  KeInitializeEvent((PRKEVENT)&params.SynchEvent.m_Event.m_Event.Header.WaitListHead, SynchronizationEvent, 0);
  LOBYTE(params.Status) = 1;
  params.OrigTargetCompletionRoutine = 0LL;
  params.OrigTargetCompletionContext = 0LL;
  m_TargetCompletionContext = 0LL;
  status = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qq(v25, 5u, 0xEu, 0x24u, v26, _a1, TraceObjectHandle);
  }
  v9 = (Request->m_RequestBaseFlags & 0x10) != 0;
  if ( Action )
    v10 = *Action;
  else
    v10 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    *(_QWORD *)&params.SynchEvent.m_Event.m_Event.Header.Lock = Options->Timeout;
    v10 |= 0x10u;
  }
  if ( (v10 & 0x20) != 0 )
  {
    m_TargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionContext = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    m_TargetCompletionContext = 0LL;
    params.OrigTargetCompletionContext = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params.SynchEvent.m_Event.m_Event.Header.WaitListHead;
  if ( Options )
    irql = Options->Flags & 0xFFFFFFFE;
  else
    irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetFileObject, &PreviousIrql, v8);
    v11 = PreviousIrql;
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    PreviousIrql = v11;
  }
  v12 = FxIoTarget::SubmitLocked(this, Request, Options, irql);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v28, v11, v13);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
  v14 = v12 | v10;
  if ( this->m_Globals->FxVerboseOn )
  {
    v29 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qD(v31, v30, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, v29, v14);
  }
  v15 = _InterlockedIncrement(&Request->m_Refcnt);
  Timeout = 0LL;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v32 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
    if ( v32 )
      FxTagTracker::UpdateTagHistory(
        v32,
        &status,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v15);
  }
  if ( (v14 & 1) != 0 )
  {
    v17 = v14 | 4;
    if ( this->m_Globals->FxVerboseOn )
    {
      v33 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qq(v34, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v33, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    v14 = v17 | 8;
  }
  else if ( (v14 & 2) != 0 )
  {
    v14 |= 0xCu;
  }
  else if ( (v14 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = m_TargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *))params.OrigTargetCompletionContext;
  }
  if ( (v14 & 4) != 0 )
  {
    if ( (v14 & 8) != 0 )
    {
      if ( (v14 & 0x10) != 0 )
        Timeout = (_LARGE_INTEGER *)&params;
      KeEnterCriticalRegion();
      v18 = KeWaitForSingleObject(&params.SynchEvent.m_Event.m_Event.Header.WaitListHead, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      status = v18;
      if ( v18 == 258 )
      {
        FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v19);
        v35 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v35, v36);
        FxRequestBase::Cancel(Request);
        FxCREvent::EnterCRAndWaitAndLeave((FxCREvent *)&params.SynchEvent.m_Event.m_Event.Header.WaitListHead);
      }
    }
    status = (int)params.OrigTargetCompletionRoutine;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( v42 )
    *v42 = v14;
  if ( v9 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext )
    {
      if ( Request->m_Irp.m_Irp )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
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
