/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000AFE0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B970 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001DA90 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001EA9C (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001F510 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001F5CC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0022200 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0022B88 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C0033F70 (imp_WdfIoQueueStart.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0055FBC (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0056278 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0069E6C (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0082170 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082940 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082EB8 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C008306C (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0083200 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000AB20 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000AC10 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000AF2C (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qcq @ 0x1C000BA20 (WPP_IFR_SF_qcq.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0012D90 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E4F8 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E920 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00289E4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0029338 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0057AB0 (WPP_IFR_SF_ql.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00824D4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0082644 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C008271C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00B9B28 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  volatile unsigned __int8 m_Deleted; // al
  FxIoQueue *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v8; // si
  const void *id; // r12
  unsigned __int8 v10; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rdi
  _FX_DRIVER_GLOBALS *v12; // r15
  FxVerifierLock *Flink; // rcx
  unsigned __int8 v14; // r14
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  FxVerifierLock *v17; // rcx
  FxCallbackLock *m_CallbackLockPtr; // rcx
  const void *v19; // r12
  FxSystemWorkItem *v20; // rcx
  bool v21; // zf
  FxVerifierLock *Blink; // rcx
  const void *v23; // rcx
  _LIST_ENTRY *p_m_Cancelled; // rdx
  int v25; // edi
  int inserted; // eax
  unsigned __int8 v27; // al
  int v28; // eax
  unsigned __int8 v29; // al
  __int64 v30; // rdi
  __int64 v31; // r14
  unsigned __int64 *v32; // r13
  _FX_DRIVER_GLOBALS *v33; // rsi
  __int64 v34; // rcx
  const void *v35; // rdx
  const void *v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int v39; // r15d
  __int64 v40; // r14
  unsigned int TargetStatesCount; // r8d
  int v42; // ecx
  const FxPowerIdleTargetState *TargetStates; // rdx
  unsigned int PowerIdleState; // esi
  __int64 v45; // rcx
  const void *v46; // rdx
  const void *v47; // rcx
  char v48; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *v50; // rcx
  WDFWORKITEM__ *Handle; // rax
  int v52; // edx
  int v53; // eax
  FxVerifierLock *v54; // rcx
  WDFWORKITEM__ *v55; // rax
  int v56; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v58; // rdi
  _FX_DRIVER_GLOBALS *v59; // rdx
  FxIrpQueue *v60; // rsi
  unsigned __int8 v61; // r15
  int v62; // r14d
  signed __int32 v63; // edx
  FxRequest *v64; // rdi
  unsigned int v65; // edx
  _LIST_ENTRY *v66; // rcx
  _IRP *m_Irp; // r9
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v68; // r10
  _LIST_ENTRY *v69; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  __int64 v71; // r9
  __int64 v72; // r10
  unsigned __int8 v73; // r8
  bool v74; // sf
  FxIrpQueue *p_m_Queue; // rdx
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *v77; // rcx
  int *p_m_RequestCount; // rcx
  FxIrpQueue *v79; // rax
  FxRequest *v80; // r15
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v82; // r13d
  __int64 v83; // rsi
  KIRQL v84; // al
  char v85; // cl
  int v86; // edi
  _LIST_ENTRY *v87; // rcx
  _LIST_ENTRY *v88; // r9
  _LIST_ENTRY *v89; // r8
  _LIST_ENTRY *v90; // rcx
  _LIST_ENTRY *v91; // rax
  __int64 v92; // rax
  __int64 v93; // r14
  unsigned int v94; // r8d
  int v95; // ecx
  const FxPowerIdleTargetState *v96; // rdx
  unsigned int v97; // edi
  __int64 v98; // rcx
  const void *v99; // rdx
  const void *v100; // rcx
  char v101; // al
  FxPowerIdleStates (__fastcall *v102)(FxPowerIdleMachine *); // rax
  LONG StateEvent; // eax
  FxTagTracker *v104; // rcx
  _LIST_ENTRY *v105; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  FxVerifierLock *v107; // rcx
  unsigned __int8 v108; // r8
  FxVerifierLock *v109; // rcx
  unsigned __int8 v110; // dl
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  KIRQL v112; // [rsp+50h] [rbp-29h]
  KIRQL v113; // [rsp+50h] [rbp-29h]
  unsigned __int8 v114[8]; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v115; // [rsp+60h] [rbp-19h]
  _FX_DRIVER_GLOBALS *v116; // [rsp+68h] [rbp-11h]
  FxIrp Irp; // [rsp+70h] [rbp-9h] BYREF
  FxRequest *v118; // [rsp+78h] [rbp-1h]
  _LIST_ENTRY *v119; // [rsp+80h] [rbp+7h]
  unsigned __int8 flags; // [rsp+E8h] [rbp+6Fh] BYREF
  FxRequest *Request; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int8 v123; // [rsp+F8h] [rbp+7Fh] BYREF

  Request = NewRequest;
  flags = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v116 = m_Globals;
  if ( m_Deleted )
  {
    FxNonPagedObject::Unlock(this, flags, (unsigned __int8)NewRequest);
    return 0;
  }
  v8 = flags;
  if ( flags && this->m_PassiveLevel )
  {
    if ( this->m_ObjectSize )
      id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      id = 0LL;
    v8 = flags;
    WPP_IFR_SF_qcq(
      this->m_Globals,
      PreviousIrql,
      (unsigned int)NewRequest,
      a4,
      traceGuid,
      KeGetCurrentThread(),
      flags,
      id);
    if ( v5->m_WorkItemQueued )
      goto LABEL_34;
    m_SystemWorkItem = v5->m_SystemWorkItem;
    v5->m_WorkItemQueued = 1;
    v12 = m_SystemWorkItem->m_Globals;
    if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
      && (Flink = (FxVerifierLock *)m_SystemWorkItem[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    {
      FxVerifierLock::Lock(Flink, &v123, v10);
      v14 = v123;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
      v123 = v14;
    }
    if ( m_SystemWorkItem->m_Enqueued )
    {
      WPP_IFR_SF_qq(
        v12,
        2u,
        0x12u,
        0xEu,
        WPP_FxSystemWorkitem_cpp_Traceguids,
        m_SystemWorkItem,
        m_SystemWorkItem->m_WorkItem.m_WorkItem);
    }
    else
    {
      if ( !m_SystemWorkItem->m_RunningDown )
      {
        KeClearEvent(&m_SystemWorkItem->m_WorkItemCompleted.m_Event.m_Event);
        m_SystemWorkItem->m_CallbackArg = v5;
        m_SystemWorkItem->m_Callback = FxIoQueue::_DeferredDispatchThreadThunk;
        m_SystemWorkItem->m_Enqueued = 1;
        _InterlockedIncrement(&m_SystemWorkItem->m_OutStandingWorkItem);
        if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
          && (v17 = (FxVerifierLock *)m_SystemWorkItem[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
        {
          FxVerifierLock::Unlock(v17, v123, v16);
        }
        else
        {
          KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v123);
        }
        IoQueueWorkItem(
          m_SystemWorkItem->m_WorkItem.m_WorkItem,
          (PIO_WORKITEM_ROUTINE)FxSystemWorkItem::_WorkItemThunk,
          DelayedWorkQueue,
          m_SystemWorkItem);
        v8 = flags;
LABEL_34:
        v21 = Request == 0LL;
        v5->m_RequeueDeferredDispatcher = 1;
        if ( !v21 )
          FxIoQueue::InsertNewRequestLocked(v5, &Request, v8);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (Blink = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(Blink, v8, v10);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v8);
        }
        return 1;
      }
      WPP_IFR_SF_q(v12, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
    }
    FxVerifierDbgBreakPoint(v12);
    FxNonPagedObject::Unlock(m_SystemWorkItem, v14, v15);
    v5->m_WorkItemQueued = 0;
    goto LABEL_34;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr && m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
  {
    if ( v5->m_ObjectSize )
      v19 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v19 = 0LL;
    WPP_IFR_SF_q(v5->m_Globals, 3u, 0xDu, 0x2Cu, (const _GUID *)&FxObject::`vftable'.DebugExtension, v19);
    if ( v5->m_PassiveLevel )
    {
      if ( !v5->m_WorkItemQueued )
      {
        v20 = v5->m_SystemWorkItem;
        v5->m_WorkItemQueued = 1;
        if ( !FxSystemWorkItem::EnqueueWorker(v20, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
          v5->m_WorkItemQueued = 0;
      }
    }
    else if ( !v5->m_DpcQueued )
    {
      v5->m_DpcQueued = 1;
      KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
    }
    goto LABEL_34;
  }
  ++v5->m_Dispatching;
  if ( m_Globals->FxVerboseOn )
  {
    if ( v5->m_ObjectSize )
      v23 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      5u,
      0xDu,
      0x2Du,
      (const _GUID *)&FxObject::`vftable'.DebugExtension,
      KeGetCurrentThread(),
      v23);
  }
LABEL_45:
  while ( 2 )
  {
    p_m_Cancelled = &v5->m_Cancelled;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v25 = (Request != 0LL) + v5->m_Queue.m_RequestCount + v5->m_DriverIoCount;
            if ( p_m_Cancelled->Flink == p_m_Cancelled )
              break;
            if ( Request )
            {
              inserted = FxIoQueue::InsertNewRequestLocked(v5, &Request, flags);
              p_m_Cancelled = &v5->m_Cancelled;
              if ( inserted < 0 )
                continue;
            }
            v27 = FxIoQueue::ProcessCancelledRequests(v5, &flags);
            p_m_Cancelled = &v5->m_Cancelled;
            if ( !v27 )
              break;
          }
          if ( v5->m_CanceledOnQueueList.Flink == &v5->m_CanceledOnQueueList )
            break;
          if ( Request )
          {
            v28 = FxIoQueue::InsertNewRequestLocked(v5, &Request, flags);
            p_m_Cancelled = &v5->m_Cancelled;
            if ( v28 < 0 )
              continue;
          }
          v29 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &flags);
          p_m_Cancelled = &v5->m_Cancelled;
          if ( !v29 )
            break;
        }
        if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
        {
          if ( Request )
            FxIoQueue::InsertNewRequestLocked(v5, &Request, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessIdleComplete(v5, &flags);
          goto LABEL_45;
        }
        if ( v5->m_PurgeComplete.Method && !v25 && v5->m_Dispatching == 1 )
        {
          if ( Request )
            FxIoQueue::InsertNewRequestLocked(v5, &Request, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessPurgeComplete(v5, &flags);
          goto LABEL_45;
        }
        if ( v5->m_IsDevicePowerPolicyOwner
          && v5->m_PowerManaged
          && v5->m_PowerReferenced
          && !v25
          && v5->m_Dispatching == 1 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
          v31 = *(_QWORD *)(v30 + 424);
          v32 = (unsigned __int64 *)(v30 + 16);
          v33 = *(_FX_DRIVER_GLOBALS **)(v31 + 16);
          v112 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 16));
          if ( !*(_DWORD *)(v30 + 24) )
          {
            v34 = *(_QWORD *)(v31 + 96);
            v35 = *(const void **)(v34 + 144);
            v36 = *(_WORD *)(v34 + 10) ? (const void *)(v34 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
            WPP_IFR_SF_qq(v33, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v36, v35);
            if ( v33->FxVerifierOn )
            {
              if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v33, v37, 0xBu) || v33->FxVerifyDownlevel )
                FxVerifierDbgBreakPoint(v33);
            }
          }
          v38 = *(unsigned __int8 *)(v30 + 225);
          v39 = --*(_DWORD *)(v30 + 24);
          v40 = *(_QWORD *)(v30 + 424);
          *(_DWORD *)(v30 + 4 * v38 + 232) = 256;
          *(_BYTE *)(v30 + 225) = (*(_BYTE *)(v30 + 225) + 1) & 7;
          TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v30 + 228) - 1].TargetStatesCount;
          v42 = 0;
          if ( TargetStatesCount )
          {
            TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v30 + 228) - 1].TargetStates;
            while ( TargetStates[v42].PowerIdleEvent != PowerIdleEventIoDecrement )
            {
              if ( ++v42 >= TargetStatesCount )
                goto LABEL_91;
            }
            PowerIdleState = TargetStates[v42].PowerIdleState;
            if ( PowerIdleState != 35 )
            {
              do
              {
                v45 = *(_QWORD *)(v40 + 96);
                v46 = *(const void **)(v45 + 144);
                if ( *(_WORD *)(v45 + 10) )
                  v47 = (const void *)(v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v47 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v40 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v47,
                  v46,
                  PowerIdleState,
                  *(_DWORD *)(v30 + 228));
                *(_DWORD *)(v30 + 4LL * *(unsigned __int8 *)(v30 + 226) + 264) = PowerIdleState;
                v48 = *(_BYTE *)(v30 + 226) + 1;
                *(_DWORD *)(v30 + 228) = PowerIdleState;
                *(_BYTE *)(v30 + 226) = v48 & 7;
                StateFunc = FxPowerIdleMachine::m_StateTable[PowerIdleState - 1].StateFunc;
                if ( !StateFunc )
                  break;
                PowerIdleState = StateFunc((FxPowerIdleMachine *)v30);
              }
              while ( PowerIdleState != 35 );
              v5 = this;
              v32 = (unsigned __int64 *)(v30 + 16);
            }
          }
LABEL_91:
          KeReleaseSpinLock(v32, v112);
          v50 = *(FxTagTracker **)(v30 + 32);
          if ( v50 )
            FxTagTracker::UpdateTagHistory(v50, 0LL, 0, 0LL, TagRelease, v39);
          m_Globals = v116;
          v5->m_PowerReferenced = 0;
          goto LABEL_45;
        }
        if ( (unsigned int)(v5->m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          Handle = FxWmiProvider::GetHandle((FxWorkItem *)v5);
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x2Eu, (const _GUID *)&FxObject::`vftable'.DebugExtension, Handle, v52);
        }
        if ( Request )
        {
          v53 = FxIoQueue::InsertNewRequestLocked(v5, &Request, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          if ( v53 < 0 )
            continue;
        }
        if ( FxIoQueue::ProcessPowerEvents(v5, &flags) )
          goto LABEL_45;
        goto $Done_3;
      }
      if ( v5->m_Disposing && !v25 && v5->m_Dispatching == 1 )
      {
        v110 = flags;
        v5->m_Deleted = 1;
        FxNonPagedObject::Unlock(v5, v110, (unsigned __int8)NewRequest);
        KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v5->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_144;
      if ( (v5->m_QueueState & 2) == 0 )
      {
        v55 = FxWmiProvider::GetHandle((FxWorkItem *)v5);
        WPP_IFR_SF_ql(m_Globals, 3u, 0xDu, 0x2Fu, (const _GUID *)&FxObject::`vftable'.DebugExtension, v55, v56);
LABEL_144:
        if ( !Request || FxIoQueue::InsertNewRequestLocked(v5, &Request, flags) >= 0 )
          goto $Done_3;
        goto LABEL_45;
      }
      m_Type = v5->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
      {
        if ( (m_Type != WdfIoQueueDispatchSequential || v5->m_DriverIoCount <= 0)
          && (v5->m_Type != WdfIoQueueDispatchParallel || v5->m_DriverIoCount < v5->m_MaxParallelQueuePresentedRequests) )
        {
          if ( v5->m_Queue.m_RequestCount <= 0 )
            goto LABEL_158;
          p_m_Queue = &v5->m_Queue;
          p_Blink = 0LL;
          v77 = v5->m_Queue.m_Queue.Flink;
          if ( v77 != (_LIST_ENTRY *)&v5->m_Queue )
            p_Blink = &v77[-11].Blink;
          if ( p_Blink )
          {
            while ( !_InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL) )
            {
              p_m_RequestCount = 0LL;
              if ( p_Blink )
                v79 = (FxIrpQueue *)p_Blink[21];
              else
                v79 = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
              if ( v79 != p_m_Queue )
                p_m_RequestCount = &v79[-5].m_RequestCount;
              p_Blink = (_LIST_ENTRY **)p_m_RequestCount;
              if ( !p_m_RequestCount )
                goto LABEL_158;
            }
            v87 = (_LIST_ENTRY *)(p_Blink + 21);
            v88 = p_Blink[21];
            v89 = p_Blink[22];
            if ( (_LIST_ENTRY **)v88->Blink != p_Blink + 21 || v89->Flink != v87 )
              __fastfail(3u);
            v89->Flink = v88;
            v88->Blink = v89;
            p_Blink[22] = (_LIST_ENTRY *)(p_Blink + 21);
            v87->Flink = v87;
            --v5->m_Queue.m_RequestCount;
            v90 = p_Blink[18];
            if ( LODWORD(v90->Flink) == 1 )
              v90->Blink = 0LL;
            v80 = (FxRequest *)&v90[-8].Blink;
            p_Blink[18] = 0LL;
            v91 = v90[-8].Blink;
            v119 = v90;
            v90[6].Blink = 0LL;
            ((void (__fastcall *)(_LIST_ENTRY **, __int64, __int64, const char *))v91[1].Flink)(
              &v90[-8].Blink,
              1969583441LL,
              2054LL,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            if ( Request )
              FxIoQueue::InsertNewRequestLocked(v5, &Request, flags);
          }
          else
          {
LABEL_158:
            v80 = Request;
            v118 = Request;
            if ( !Request )
              goto $Done_3;
            Request->m_IoQueue = v5;
            v5->m_TransitionFromEmpty = 1;
            v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( v5->m_IsDevicePowerPolicyOwner && v5->m_PowerManaged && !v5->m_PowerReferenced )
            {
              m_DeviceBase = v5->m_DeviceBase;
              v82 = 0;
              v115 = 0;
              v83 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
              v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v83 + 16));
              v85 = *(_BYTE *)(v83 + 224);
              v113 = v84;
              if ( (v85 & 0x10) != 0 )
              {
                v86 = -1073741101;
              }
              else if ( (v85 & 0x20) != 0 )
              {
                v92 = *(unsigned __int8 *)(v83 + 225);
                v82 = ++*(_DWORD *)(v83 + 24);
                v93 = *(_QWORD *)(v83 + 424);
                *(_DWORD *)(v83 + 4 * v92 + 232) = 512;
                LOBYTE(v92) = *(_BYTE *)(v83 + 225) + 1;
                v115 = v82;
                *(_BYTE *)(v83 + 225) = v92 & 7;
                v94 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v83 + 228) - 1].TargetStatesCount;
                v95 = 0;
                if ( v94 )
                {
                  v96 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v83 + 228) - 1].TargetStates;
                  while ( v96[v95].PowerIdleEvent != PowerIdleEventIoIncrement )
                  {
                    if ( ++v95 >= v94 )
                      goto LABEL_184;
                  }
                  v97 = v96[v95].PowerIdleState;
                  if ( v97 != 35 )
                  {
                    do
                    {
                      v98 = *(_QWORD *)(v93 + 96);
                      v99 = *(const void **)(v98 + 144);
                      if ( *(_WORD *)(v98 + 10) )
                        v100 = (const void *)(v98 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v100 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(v93 + 16),
                        4u,
                        0x15u,
                        0x11u,
                        WPP_PowerIdleStateMachine_cpp_Traceguids,
                        v100,
                        v99,
                        v97,
                        *(_DWORD *)(v83 + 228));
                      *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v83 + 226) + 264) = v97;
                      v101 = *(_BYTE *)(v83 + 226) + 1;
                      *(_DWORD *)(v83 + 228) = v97;
                      *(_BYTE *)(v83 + 226) = v101 & 7;
                      v102 = FxPowerIdleMachine::m_StateTable[v97 - 1].StateFunc;
                      if ( !v102 )
                        break;
                      v97 = v102((FxPowerIdleMachine *)v83);
                    }
                    while ( v97 != 35 );
                    v5 = this;
                    v80 = v118;
                  }
                }
LABEL_184:
                StateEvent = KeReadStateEvent((PRKEVENT)(v83 + 192));
                m_Globals = v116;
                v86 = 259;
                v21 = StateEvent == 0;
                v84 = v113;
                if ( !v21 )
                  v86 = 0;
              }
              else
              {
                v86 = -1073741101;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v83 + 16), v84);
              v104 = *(FxTagTracker **)(v83 + 32);
              if ( v104 && (!v86 || v86 == 259) )
                FxTagTracker::UpdateTagHistory(v104, 0LL, 0, 0LL, TagAddRef, v82);
              if ( v86 >= 0 )
                v5->m_PowerReferenced = 1;
            }
            Request = 0LL;
          }
          ++v5->m_DriverIoCount;
          v105 = v5->m_DriverOwned.Blink;
          p_m_OwnerListEntry2 = &v80->m_OwnerListEntry2;
          v80->m_OwnerListEntry2.Flink = &v5->m_DriverOwned;
          v80->m_OwnerListEntry2.Blink = v105;
          if ( v105->Flink != &v5->m_DriverOwned )
            __fastfail(3u);
          v105->Flink = p_m_OwnerListEntry2;
          v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
          if ( SLOBYTE(v5->m_ObjectFlags) < 0
            && (v107 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          {
            FxVerifierLock::Unlock(v107, flags, (unsigned __int8)NewRequest);
          }
          else
          {
            KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
          }
          FxIoQueue::DispatchRequestToDriver(v5, v80);
          if ( SLOBYTE(v5->m_ObjectFlags) < 0
            && (v109 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          {
            FxVerifierLock::Lock(v109, &flags, v108);
          }
          else
          {
            flags = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
          }
          goto LABEL_45;
        }
        goto LABEL_144;
      }
      v58 = Request;
      if ( !Request )
        break;
      v59 = Request->m_Globals;
      v60 = &v5->m_Queue;
      v61 = flags;
      v114[0] = flags;
      if ( v59->FxVerifierOn )
      {
        v62 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v59, &v5->m_Queue);
        if ( v62 < 0 )
          continue;
      }
      v63 = _InterlockedExchangeAdd(&v58->m_Refcnt, 1u);
      v64 = Request;
      v65 = v63 + 1;
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
      {
        v66 = Request[-1].m_ForwardProgressList.Blink;
        if ( v66 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v66,
            (void *)0x75657551,
            1892,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v65);
      }
      m_Irp = v64->m_Irp.m_Irp;
      v68 = &v64->120;
      v64->m_IrpQueue = v60;
      Irp.m_Irp = m_Irp;
      if ( v64 == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v60;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v68;
        v64->m_CsqContext.Irp = m_Irp;
        v64->m_CsqContext.Csq = (_IO_CSQ *)v60;
        v68->m_CsqContext.Type = 1;
      }
      v69 = v5->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      m_Irp->Tail.Overlay.ListEntry.Flink = &v60->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v69;
      if ( (FxIrpQueue *)v69->Flink != v60 )
        __fastfail(3u);
      v69->Flink = p_ListEntry;
      v5->m_Queue.m_Queue.Blink = p_ListEntry;
      ++v5->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&v5->m_Queue, &Irp);
        if ( v72 )
          *(_QWORD *)(v72 + 8) = 0LL;
        *(_QWORD *)(v71 + 144) = 0LL;
        v64->m_IrpQueue = 0LL;
        v58 = Request;
        v62 = -1073741536;
        Request->Release(Request, (void *)1969583441, 1908, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        v58 = Request;
        v62 = 0;
      }
      v61 = flags;
      if ( v62 >= 0 )
      {
        v58->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( v5->m_IsDevicePowerPolicyOwner )
          {
            if ( v5->m_PowerManaged
              && !v5->m_PowerReferenced
              && FxPowerIdleMachine::PowerReferenceWorker(
                   *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
                   0,
                   FxPowerReferenceDefault,
                   0LL,
                   0,
                   0LL) >= 0 )
            {
              v5->m_PowerReferenced = 1;
            }
          }
        }
      }
      else
      {
        FxNonPagedObject::Unlock(v5, v61, (unsigned __int8)NewRequest);
        v58->m_Irp.m_Irp->IoStatus.Information = 0LL;
        FxRequest::Complete(v58, v62);
        v58->Release(v58, (void *)1886220099, 2611, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v5, v114, v73);
      }
      v74 = v62 < 0;
      Request = 0LL;
      m_Globals = v116;
      p_m_Cancelled = &v5->m_Cancelled;
    }
    while ( v74 );
    if ( v5->m_ReadyNotify.Method && v5->m_TransitionFromEmpty )
    {
      FxIoQueue::ProcessReadyNotify(v5, &flags);
      continue;
    }
    break;
  }
$Done_3:
  --v5->m_Dispatching;
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v54 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock(v54, flags, (unsigned __int8)NewRequest);
  else
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
  return 1;
}
