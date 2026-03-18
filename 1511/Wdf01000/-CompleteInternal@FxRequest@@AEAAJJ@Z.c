/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0
 * Callers:
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0005380 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C0005560 (imp_WdfRequestComplete.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00649C4 (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 * Callees:
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0008564 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0009130 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0009210 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0054F8C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00569E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0056AC8 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0056B84 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C005E7E0 (WPP_IFR_SF_D.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0069EB8 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C006A494 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C006A5BC (WPP_IFR_SF_qqqi.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C006B90C (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006FEAC (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9918 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00B998C (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAF6C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *Status,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int v5; // ebp
  _IRP *_a2; // r8
  _IRP *m_Irp; // rdx
  const void *v9; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequestCompletionState m_CompletionState; // r14d
  FxIoQueue *m_IoQueue; // rdi
  FxRequestContext *m_RequestContext; // rcx
  __int64 v14; // rdx
  KIRQL v15; // si
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v18; // cx
  char v19; // al
  _LIST_ENTRY *p_m_ChildListHead; // rsi
  int *p_m_IrpReferenceCount; // r12
  _IRP *v22; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  unsigned __int8 v24; // r8
  _FX_DRIVER_GLOBALS *v25; // rdx
  unsigned __int8 v26; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v28; // rdx
  _LIST_ENTRY *v29; // rcx
  unsigned int v31; // edx
  FxPkgGeneral *m_Lock; // r13
  const void *_a1; // rax
  unsigned __int8 v34; // dl
  _FX_DRIVER_GLOBALS *v35; // r10
  const void *v36; // rcx
  _FX_DRIVER_GLOBALS *v37; // rdx
  _FX_DRIVER_GLOBALS *v38; // rcx
  const void *v39; // rax
  _FX_DRIVER_GLOBALS *v40; // r10
  const void *v41; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v43; // rcx
  unsigned __int64 *v44; // r12
  KIRQL v45; // r14
  FxObject *v46; // rax
  int m_ObjectState; // edx
  int v48; // edx
  int v49; // edx
  int v50; // edx
  const void *id; // rdi
  const void *v52; // rdx
  const void *v53; // rcx
  __int64 v54; // rbp
  _MDL *v55; // rsi
  const void *v56; // rdi
  WDFMEMORY__ *v57; // rax
  unsigned __int8 v58; // dl
  unsigned int v59; // r8d
  __int64 v60; // rbp
  _MDL *v61; // rsi
  const void *v62; // rdi
  WDFMEMORY__ *v63; // rax
  unsigned __int8 v64; // dl
  unsigned int v65; // r8d
  unsigned __int64 v66; // rbx
  FxTagTracker *m_CallbackLockPtr; // rcx
  FxVerifierLock *Blink; // rcx
  FxVerifierLock *v69; // rcx
  KIRQL v70; // al
  FxObject *v71; // rcx
  KIRQL v72; // r14
  _FX_DRIVER_GLOBALS *v73; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-88h]
  FxIrp irp; // [rsp+50h] [rbp-58h] BYREF
  FxObject *p_Blink; // [rsp+58h] [rbp-50h]
  unsigned __int8 PreviousIrql; // [rsp+B8h] [rbp+10h] BYREF
  FxRequestCompletionState v79; // [rsp+C0h] [rbp+18h]
  _IRP *v80; // [rsp+C8h] [rbp+20h]

  m_Globals = this->m_Globals;
  v5 = (int)Status;
  _a2 = this->m_Irp.m_Irp;
  v80 = _a2;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, Status, (int)Status), _a2 = v80, !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  m_Irp = this->m_Irp.m_Irp;
  v9 = 0LL;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14
    && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0
    && m_Irp->RequestorMode == 1
    && !CurrentStackLocation->Parameters.Read.Length
    && (m_Irp->Flags & 0x40) != 0 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    if ( this->m_Irp.m_Irp->IoStatus.Information )
      FxVerifierDbgBreakPoint(m_Globals);
    _a2 = v80;
    this->m_Irp.m_Irp->Flags &= ~0x40u;
  }
  if ( (v5 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, (unsigned __int8)m_Irp, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v5);
    if ( v5 == -1071644159 )
    {
      v5 = -1073741595;
      goto LABEL_77;
    }
    if ( v5 > -1071644158 )
    {
      if ( v5 <= -1071644156 )
      {
        v5 = -2147483631;
        goto LABEL_77;
      }
      if ( v5 == -1071644150 )
      {
        v5 = -1073741808;
LABEL_77:
        WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v5);
        _a2 = v80;
        goto LABEL_8;
      }
    }
    WPP_IFR_SF_D(m_Globals, v34, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v5);
    v5 = -1073741808;
    goto LABEL_77;
  }
LABEL_8:
  if ( this->m_IrpAllocation && !this->m_CanComplete )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    _a2 = v80;
  }
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  v79 = m_CompletionState;
  if ( !this->m_IrpAllocation )
  {
    this->m_CompletionState = 0;
    if ( !this->m_Reserved )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    _a2 = v80;
  }
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  v14 = 1LL;
  if ( !this->m_Reserved && !this->m_IrpAllocation )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    if ( this->m_ObjectState == 1 )
    {
      m_ParentObject = this->m_ParentObject;
      if ( m_ParentObject )
      {
        if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
          goto LABEL_92;
        }
        this->m_ParentObject = 0LL;
      }
      this->m_ObjectFlags |= 0x100u;
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v35 = this->m_Globals;
        if ( v35->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v36 = 0LL;
          WPP_IFR_SF_qqLL(v35, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v36, this->m_ObjectState, 3u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 3;
      }
      m_ObjectFlags = this->m_ObjectFlags;
      this->m_ObjectState = 3;
      if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v15) )
      {
        if ( (m_ObjectFlags & 0x200) != 0 )
        {
          v38 = this->m_Globals;
          if ( v38->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v39 = 0LL;
            WPP_IFR_SF_qqLL(v38, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v39, 3u, 4u);
          }
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 4;
        }
        this->m_ObjectState = 4;
        if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v15, 1u) )
        {
          v18 = this->m_ObjectFlags;
          if ( (v18 & 0x104) == 0x104 )
          {
            FxObject::DeletedAndDisposedWorkerLocked(this, v15, 0);
          }
          else
          {
            if ( (v18 & 0x200) != 0 )
            {
              v40 = this->m_Globals;
              if ( v40->FxVerboseOn )
              {
                if ( this->m_ObjectSize )
                  v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v41 = 0LL;
                WPP_IFR_SF_qqLL(v40, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v41, this->m_ObjectState, 2u);
              }
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 2;
            }
            this->m_ObjectState = 2;
          }
          v19 = 1;
        }
        else
        {
          v19 = 0;
        }
        if ( v19 )
          goto LABEL_30;
        goto LABEL_93;
      }
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    }
LABEL_92:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v15);
LABEL_93:
    v37 = this->m_Globals;
    if ( v37->FxVerifierOn )
      FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v37);
LABEL_30:
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( 1 )
    {
      if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      {
        _a2 = v80;
        v14 = 1LL;
        m_CompletionState = v79;
        break;
      }
      Flink = p_m_ChildListHead->Flink;
      v43 = p_m_ChildListHead->Flink->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v43->Blink != Flink )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v43;
      v43->Blink = p_m_ChildListHead;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v44 = (unsigned __int64 *)&Flink[-1];
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v45 = KeAcquireSpinLockRaiseToDpc(v44);
      v46 = p_Blink;
      m_ObjectState = p_Blink->m_ObjectState;
      p_Blink->m_ParentObject = 0LL;
      v48 = m_ObjectState - 2;
      if ( !v48 )
        goto LABEL_120;
      v49 = v48 - 2;
      if ( !v49 )
        goto LABEL_117;
      v50 = v49 - 4;
      if ( v50 )
      {
        if ( v50 == 1 )
          FxObject::TraceDroppedEvent(v46, FxObjectDroppedEventParentDeleteEvent);
LABEL_117:
        KeReleaseSpinLock(v44, v45);
      }
      else
      {
LABEL_120:
        FxObject::DeletedAndDisposedWorkerLocked(v46, v45, 1u);
      }
    }
  }
  p_m_IrpReferenceCount = &this->m_IrpReferenceCount;
  if ( this->m_IrpReferenceCount )
  {
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
      id = (const void *)((__int64 (__fastcall *)(FxRequestOutputBuffer *, __int64))this->m_OutputBuffer.GetHandle)(
                           &this->m_OutputBuffer,
                           1LL);
    else
      id = 0LL;
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
      v52 = (const void *)((__int64 (__fastcall *)(FxRequestSystemBuffer *, __int64))this->m_SystemBuffer.GetHandle)(
                            &this->m_SystemBuffer,
                            v14);
    else
      v52 = 0LL;
    if ( this->m_ObjectSize )
      v53 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v53 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      (unsigned __int8)v52,
      (unsigned int)this->m_Irp.m_Irp,
      a4,
      traceGuid,
      v53,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v52,
      id);
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v54 = this->m_SystemBuffer.GetBufferSize(&this->m_SystemBuffer);
      v55 = this->m_SystemBuffer.GetMdl(&this->m_SystemBuffer);
      v56 = (const void *)this->m_SystemBuffer.GetBuffer(&this->m_SystemBuffer);
      v57 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v58, v59, 0x15u, traceGuida, v57, v56, v55, v54);
    }
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v60 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v61 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v62 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v63 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v64, v65, 0x16u, traceGuida, v63, v62, v61, v60);
    }
    if ( this->m_ObjectSize )
      v66 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v66 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v66, *p_m_IrpReferenceCount);
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v5;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, m_CompletionState, m_IoQueue);
    return (unsigned int)v5;
  }
  v22 = irp.m_Irp;
  this->m_Irp.m_Irp = 0LL;
  if ( v22->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = 0LL;
  }
  else
  {
    m_DeviceBase = this->m_DeviceBase;
    v31 = _InterlockedIncrement(&m_DeviceBase->m_Refcnt);
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      m_CallbackLockPtr = (FxTagTracker *)m_DeviceBase[-1].m_CallbackLockPtr;
      if ( m_CallbackLockPtr )
        FxTagTracker::UpdateTagHistory(
          m_CallbackLockPtr,
          &irp,
          850,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v31);
    }
    v22 = irp.m_Irp;
    m_Lock = (FxPkgGeneral *)m_DeviceBase[3].m_SpinLock.m_Lock;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        m_Lock->m_Device,
        (_WDF_FILEOBJECT_CLASS)m_Lock->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(m_Lock);
      v22 = irp.m_Irp;
    }
  }
  IofCompleteRequest(v22, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    if ( m_CompletionState )
    {
      if ( (m_CompletionState & 0x80u) == 0 )
      {
        v25 = m_IoQueue->m_Globals;
        if ( v25->FxVerifierOn )
          FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v25, this);
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (Blink = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Lock(Blink, &PreviousIrql, v24);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
        }
        p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
        v28 = this->m_OwnerListEntry2.Flink;
        v29 = this->m_OwnerListEntry2.Blink;
        if ( v28->Blink != &this->m_OwnerListEntry2 || v29->Flink != p_m_OwnerListEntry2 )
          __fastfail(3u);
        v29->Flink = v28;
        v28->Blink = v29;
        this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
        p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
        {
          if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
            && (v69 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          {
            FxVerifierLock::Unlock(v69, PreviousIrql, v26);
          }
          else
          {
            KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
          }
        }
        else
        {
          FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
        }
      }
      this->m_ObjectFlags |= 4u;
      if ( !this->m_ParentObject )
        goto LABEL_49;
      v70 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v71 = this->m_ParentObject;
      v72 = v70;
      if ( v71 )
      {
        if ( FxObject::RemoveChildObjectInternal(v71, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v72);
          goto LABEL_51;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v72);
LABEL_49:
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v73 = this->m_Globals;
        if ( v73->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqLL(v73, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v9, this->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 10;
      }
      this->m_ObjectState = 10;
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      goto LABEL_51;
    }
    FxObject::AddRef(this, (void *)0x706D6F43, 917, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
LABEL_51:
  if ( m_DeviceBase )
    m_DeviceBase->Release(m_DeviceBase, &irp, 871, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return (unsigned int)v5;
}
