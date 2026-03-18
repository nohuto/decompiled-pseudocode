/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0012AA0 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00847BC (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0089670 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089A00 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008ACC0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008C4D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008C814 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E1B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00921F4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0013F60 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qD @ 0x1C0063E18 (WPP_IFR_SF_qD.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const _GUID *v10; // r8
  bool v11; // r15
  unsigned int v12; // ebx
  unsigned __int8 v13; // r13
  int v14; // edi
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // dl
  unsigned int v17; // ebx
  _FX_DRIVER_GLOBALS *v18; // rcx
  unsigned int v19; // r12d
  _LARGE_INTEGER *Timeout; // rdi
  int v21; // ebx
  _FX_DRIVER_GLOBALS *v22; // rcx
  NTSTATUS v23; // edi
  unsigned __int8 v24; // r8
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 v26; // r8
  _FX_DRIVER_GLOBALS *v27; // rax
  FxRequestBase *v29; // rdx
  _FILE_OBJECT *m_TargetFileObject; // rcx
  _FILE_OBJECT *v31; // rcx
  FxRequestBase *v32; // rax
  FxTagTracker *v33; // rcx
  FxRequestBase *v34; // rax
  unsigned __int8 v35; // r8
  _FILE_OBJECT *v36; // rcx
  unsigned __int8 v37; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  __int64 timeout; // [rsp+48h] [rbp-39h] BYREF
  FxTargetSubmitSyncParams params; // [rsp+50h] [rbp-31h] BYREF
  void *m_TargetCompletionContext; // [rsp+88h] [rbp+7h]
  unsigned __int8 PreviousIrql; // [rsp+E8h] [rbp+67h] BYREF
  unsigned int irql; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned __int8 v44; // [rsp+F8h] [rbp+77h] BYREF
  unsigned int *v45; // [rsp+100h] [rbp+7Fh]

  v45 = Action;
  LOBYTE(params.Status) = 0;
  KeInitializeEvent((PRKEVENT)&params.SynchEvent.m_Event.m_Event.Header.WaitListHead, SynchronizationEvent, 0);
  _a1 = 0LL;
  LOBYTE(params.Status) = 1;
  params.OrigTargetCompletionRoutine = 0LL;
  params.OrigTargetCompletionContext = 0LL;
  m_TargetCompletionContext = 0LL;
  LODWORD(timeout) = 0;
  m_Globals = this->m_Globals;
  v10 = WPP_FxIoTarget_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    if ( !Request->m_ObjectSize || (v29 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v29 = Request;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x24u, WPP_FxIoTarget_cpp_Traceguids, _a1, v29);
  }
  v11 = (Request->m_RequestBaseFlags & 0x10) != 0;
  if ( Action )
    v12 = *Action;
  else
    v12 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    *(_QWORD *)&params.SynchEvent.m_Event.m_Event.Header.Lock = Options->Timeout;
    v12 |= 0x10u;
  }
  if ( (v12 & 0x20) != 0 )
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
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetFileObject, &PreviousIrql, (unsigned __int8)v10);
    v13 = PreviousIrql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    PreviousIrql = v13;
  }
  v14 = FxIoTarget::SubmitLocked(this, Request, Options, irql);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v31 = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v31, v13, v15);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v13);
  v17 = v14 | v12;
  v18 = this->m_Globals;
  if ( v18->FxVerboseOn )
  {
    if ( !Request->m_ObjectSize || (v32 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v32 = Request;
    WPP_IFR_SF_qD(v18, v16, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, v32, v17);
  }
  v19 = _InterlockedIncrement(&Request->m_Refcnt);
  Timeout = 0LL;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v33 = *(FxTagTracker **)&Request[-1].m_SystemBufferOffset;
    if ( v33 )
      FxTagTracker::UpdateTagHistory(
        v33,
        &timeout,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v19);
  }
  if ( (v17 & 1) != 0 )
  {
    v21 = v17 | 4;
    v22 = this->m_Globals;
    if ( v22->FxVerboseOn )
    {
      if ( !Request->m_ObjectSize || (v34 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v34 = Request;
      WPP_IFR_SF_qq(v22, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v34, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    v17 = v21 | 8;
  }
  else if ( (v17 & 2) != 0 )
  {
    v17 |= 0xCu;
  }
  else if ( (v17 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = m_TargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *))params.OrigTargetCompletionContext;
  }
  if ( (v17 & 4) != 0 )
  {
    if ( (v17 & 8) != 0 )
    {
      if ( (v17 & 0x10) != 0 )
        Timeout = (_LARGE_INTEGER *)&params;
      KeEnterCriticalRegion();
      v23 = KeWaitForSingleObject(&params.SynchEvent.m_Event.m_Event.Header.WaitListHead, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      LODWORD(timeout) = v23;
      if ( v23 == 258 )
      {
        FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v24);
        Request->m_TargetFlags |= 8u;
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v36 = this[-1].m_TargetFileObject) != 0LL )
          FxVerifierLock::Unlock((FxVerifierLock *)v36, irql, v35);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
        FxRequestBase::Cancel(Request);
        FxCREvent::EnterCRAndWaitAndLeave((FxCREvent *)&params.SynchEvent.m_Event.m_Event.Header.WaitListHead);
      }
    }
    LODWORD(timeout) = params.OrigTargetCompletionRoutine;
  }
  else
  {
    LODWORD(timeout) = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &timeout, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( v45 )
    *v45 = v17;
  if ( v11 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext )
    {
      if ( Request->m_Irp.m_Irp )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
        v27 = Request->m_Globals;
        if ( v27->FxVerifierOn )
        {
          if ( v27->FxVerifierIO )
          {
            FxNonPagedObject::Lock(Request, &v44, v26);
            Request->m_VerifierFlags &= ~0x80u;
            if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
              FxVerifierLock::Unlock(m_IrpQueue, v44, v37);
            else
              KeReleaseSpinLock(&Request->m_NPLock.m_Lock, v44);
          }
        }
      }
    }
  }
  return (unsigned int)timeout;
}
