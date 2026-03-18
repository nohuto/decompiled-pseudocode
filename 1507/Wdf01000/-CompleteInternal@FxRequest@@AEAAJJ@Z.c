/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRequestComplete @ 0x1C0003590 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0003650 (imp_WdfRequestCompleteWithInformation.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00053C0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C006E2D0 (imp_WdfRequestCompleteWithPriorityBoost.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00A4CF0 (-_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0004A80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C005BA6C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005CBFC (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005CE34 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005CF20 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0075140 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007526C (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C00759CC (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C0075AF4 (WPP_IFR_SF_qqqi.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C0076DFC (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C007BAC4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D07AC (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00D0860 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D251C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
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
  const void *v9; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequestCompletionState m_CompletionState; // r14d
  FxIoQueue *m_IoQueue; // rdi
  FxRequestContext *m_RequestContext; // rcx
  KIRQL v14; // si
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v17; // cx
  char v18; // al
  _LIST_ENTRY *p_m_ChildListHead; // rsi
  int *p_m_IrpReferenceCount; // r15
  _IRP *v21; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  unsigned __int8 v23; // r8
  _FX_DRIVER_GLOBALS *v24; // rdx
  unsigned __int8 v25; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v27; // rdx
  _LIST_ENTRY *v28; // rcx
  _LIST_ENTRY *v29; // rdi
  unsigned int v31; // edx
  FxPkgGeneral *m_Lock; // r15
  _LIST_ENTRY *v33; // rcx
  _LIST_ENTRY *v34; // rax
  FxObject *v35; // rcx
  const void *_a1; // rax
  const char *v37; // rdx
  unsigned __int8 v38; // dl
  const char *v39; // rdx
  _FX_DRIVER_GLOBALS *v40; // r10
  const void *v41; // rcx
  _FX_DRIVER_GLOBALS *v42; // r10
  const void *v43; // rcx
  _FX_DRIVER_GLOBALS *v44; // rdx
  _FX_DRIVER_GLOBALS *v45; // rcx
  const void *v46; // rax
  _FX_DRIVER_GLOBALS *v47; // r10
  const void *v48; // rcx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v50; // rax
  FxObject *p_Blink; // rcx
  WDFMEMORY__ *id; // rdi
  WDFMEMORY__ *v53; // rdx
  const void *v54; // rcx
  __int64 v55; // rbp
  _MDL *v56; // rsi
  const void *v57; // rdi
  WDFMEMORY__ *v58; // rax
  unsigned __int8 v59; // dl
  unsigned int v60; // r8d
  __int64 v61; // rbp
  _MDL *v62; // rsi
  const void *v63; // rdi
  WDFMEMORY__ *v64; // rax
  unsigned __int8 v65; // dl
  unsigned int v66; // r8d
  unsigned __int64 v67; // rbx
  FxTagTracker *m_CallbackLockPtr; // rcx
  FxVerifierLock *v69; // rcx
  FxVerifierLock *v70; // rcx
  KIRQL v71; // al
  FxObject *v72; // rcx
  KIRQL v73; // r14
  _FX_DRIVER_GLOBALS *v74; // rcx
  _FX_DRIVER_GLOBALS *v75; // rcx
  unsigned int v76; // r15d
  _LIST_ENTRY *Blink; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-98h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-98h]
  _IRP *v80; // [rsp+58h] [rbp-60h]
  FxIrp irp; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+C8h] [rbp+10h] BYREF
  int v83; // [rsp+D0h] [rbp+18h] BYREF
  int v84; // [rsp+D8h] [rbp+20h] BYREF

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
    {
      v83 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v83,
        m_Globals->Public.DriverName,
        (const char *)&v83);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      else
        Mx::MxDbgPrint(
          "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
          v37,
          (const char *)&v83);
    }
    _a2 = v80;
    this->m_Irp.m_Irp->Flags &= ~0x40u;
  }
  if ( (v5 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, (unsigned __int8)m_Irp, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v5);
    if ( v5 == -1071644159 )
    {
      v5 = -1073741595;
      goto LABEL_85;
    }
    if ( v5 > -1071644158 )
    {
      if ( v5 <= -1071644156 )
      {
        v5 = -2147483631;
        goto LABEL_85;
      }
      if ( v5 == -1071644150 )
      {
        v5 = -1073741808;
LABEL_85:
        WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v5);
        _a2 = v80;
        goto LABEL_8;
      }
    }
    WPP_IFR_SF_D(m_Globals, v38, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v5);
    v5 = -1073741808;
    goto LABEL_85;
  }
LABEL_8:
  if ( this->m_IrpAllocation && !this->m_CanComplete )
  {
    v84 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v84,
      m_Globals->Public.DriverName,
      (const char *)&v84);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    else
      Mx::MxDbgPrint(
        "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
        v39,
        (const char *)&v84);
    _a2 = v80;
  }
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
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
  if ( !this->m_Reserved && !this->m_IrpAllocation )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    if ( this->m_ObjectState == 1 )
    {
      m_ParentObject = this->m_ParentObject;
      if ( m_ParentObject )
      {
        if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
        {
          if ( (this->m_ObjectFlags & 0x200) != 0 )
          {
            v40 = this->m_Globals;
            if ( v40->FxVerboseOn )
            {
              if ( this->m_ObjectSize )
                v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v41 = 0LL;
              WPP_IFR_SF_qqLL(v40, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v41, this->m_ObjectState, 7u);
            }
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 7;
          }
          this->m_ObjectState = 7;
          goto LABEL_111;
        }
        this->m_ParentObject = 0LL;
      }
      this->m_ObjectFlags |= 0x100u;
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v42 = this->m_Globals;
        if ( v42->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v43 = 0LL;
          WPP_IFR_SF_qqLL(v42, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v43, this->m_ObjectState, 3u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 3;
      }
      m_ObjectFlags = this->m_ObjectFlags;
      this->m_ObjectState = 3;
      if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v14) )
      {
        if ( (m_ObjectFlags & 0x200) != 0 )
        {
          v45 = this->m_Globals;
          if ( v45->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v46 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v46 = 0LL;
            WPP_IFR_SF_qqLL(v45, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v46, 3u, 4u);
          }
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 4;
        }
        this->m_ObjectState = 4;
        if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v14, 1u) )
        {
          v17 = this->m_ObjectFlags;
          if ( (v17 & 0x104) == 0x104 )
          {
            FxObject::DeletedAndDisposedWorkerLocked(this, v14, 0);
          }
          else
          {
            if ( (v17 & 0x200) != 0 )
            {
              v47 = this->m_Globals;
              if ( v47->FxVerboseOn )
              {
                if ( this->m_ObjectSize )
                  v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v48 = 0LL;
                WPP_IFR_SF_qqLL(v47, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v48, this->m_ObjectState, 2u);
              }
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 2;
            }
            this->m_ObjectState = 2;
          }
          v18 = 1;
        }
        else
        {
          v18 = 0;
        }
        if ( v18 )
          goto LABEL_30;
        goto LABEL_112;
      }
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    }
LABEL_111:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
LABEL_112:
    v44 = this->m_Globals;
    if ( v44->FxVerifierOn )
      FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v44);
LABEL_30:
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
    {
      Flink = p_m_ChildListHead->Flink;
      v50 = p_m_ChildListHead->Flink->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v50->Blink != Flink )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v50;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v50->Blink = p_m_ChildListHead;
      p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
      p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
      FxObject::ParentDeleteEvent(p_Blink);
    }
    _a2 = v80;
  }
  p_m_IrpReferenceCount = &this->m_IrpReferenceCount;
  if ( this->m_IrpReferenceCount )
  {
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
      id = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
    else
      id = 0LL;
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
      v53 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    else
      v53 = 0LL;
    if ( this->m_ObjectSize )
      v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v54 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      (unsigned __int8)v53,
      (unsigned int)this->m_Irp.m_Irp,
      a4,
      traceGuid,
      v54,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v53,
      id);
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v55 = this->m_SystemBuffer.GetBufferSize(&this->m_SystemBuffer);
      v56 = this->m_SystemBuffer.GetMdl(&this->m_SystemBuffer);
      v57 = (const void *)this->m_SystemBuffer.GetBuffer(&this->m_SystemBuffer);
      v58 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v59, v60, 0x15u, traceGuida, v58, v57, v56, v55);
    }
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v61 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v62 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v63 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v64 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v65, v66, 0x16u, traceGuida, v64, v63, v62, v61);
    }
    if ( this->m_ObjectSize )
      v67 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v67 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v67, *p_m_IrpReferenceCount);
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v5;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, m_CompletionState, m_IoQueue);
    return (unsigned int)v5;
  }
  v21 = irp.m_Irp;
  this->m_Irp.m_Irp = 0LL;
  if ( v21->Tail.Overlay.CurrentStackLocation->MajorFunction )
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
    v21 = irp.m_Irp;
    m_Lock = (FxPkgGeneral *)m_DeviceBase[3].m_SpinLock.m_Lock;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        m_Lock->m_Device,
        (_WDF_FILEOBJECT_CLASS)m_Lock->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(m_Lock);
      v21 = irp.m_Irp;
    }
  }
  IofCompleteRequest(v21, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    if ( m_CompletionState == FxRequestCompletionStateNone )
    {
      v76 = _InterlockedIncrement(&this->m_Refcnt);
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        Blink = this[-1].m_ForwardProgressList.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x706D6F43,
            917,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v76);
      }
      this->DeleteObject(this);
      goto LABEL_53;
    }
    if ( (m_CompletionState & 0x80u) == 0 )
    {
      v24 = m_IoQueue->m_Globals;
      if ( v24->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v24, this);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v69 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      {
        FxVerifierLock::Lock(v69, &PreviousIrql, v23);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      v27 = this->m_OwnerListEntry2.Flink;
      v28 = this->m_OwnerListEntry2.Blink;
      if ( v27->Blink != &this->m_OwnerListEntry2 || v28->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      v28->Flink = v27;
      v27->Blink = v28;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v70 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v70, PreviousIrql, v25);
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
    if ( this->m_ParentObject )
    {
      v71 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v72 = this->m_ParentObject;
      v73 = v71;
      if ( v72 )
      {
        if ( FxObject::RemoveChildObjectInternal(v72, this) == -1073741738 )
        {
          if ( (this->m_ObjectFlags & 0x200) != 0 )
          {
            v74 = this->m_Globals;
            if ( v74->FxVerboseOn )
            {
              if ( this->m_ObjectSize )
                v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              WPP_IFR_SF_qqLL(v74, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v9, this->m_ObjectState, 8u);
            }
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 8;
          }
          this->m_ObjectState = 8;
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v73);
          goto LABEL_53;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v73);
    }
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      v75 = this->m_Globals;
      if ( v75->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(v75, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v9, this->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 10;
    }
    v29 = &this->m_ChildListHead;
    this->m_ObjectState = 10;
    while ( v29->Flink != v29 )
    {
      v33 = v29->Flink;
      v34 = v29->Flink->Flink;
      if ( v29->Flink->Blink != v29 || v34->Blink != v33 )
        __fastfail(3u);
      v29->Flink = v34;
      v35 = (FxObject *)&v33[-5].Blink;
      v34->Blink = v29;
      v35->m_ChildEntry.Blink = &v35->m_ChildEntry;
      v35->m_ChildEntry.Flink = &v35->m_ChildEntry;
      FxObject::ParentDeleteEvent(v35);
    }
    this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
  }
LABEL_53:
  if ( m_DeviceBase )
    m_DeviceBase->Release(m_DeviceBase, &irp, 871, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return (unsigned int)v5;
}
