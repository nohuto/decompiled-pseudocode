/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C000AF00 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000BE58 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000C874 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C000C930 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0020744 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0026B80 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00750D0 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0075140 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C00942D0 (imp_WdfIoQueueStart.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0095890 (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0095930 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0095C5C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0097618 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00053C0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00086B8 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C000A1B8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qcq @ 0x1C000A4D0 (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000B888 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000BCC0 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C002D644 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0096184 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009637C (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0096470 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0096564 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D0A50 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
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
  unsigned __int8 v7; // si
  FxCallbackLock *m_CallbackLockPtr; // rcx
  _LIST_ENTRY **p_Blink; // r8
  _LIST_ENTRY *p_m_Cancelled; // rdx
  int v11; // edi
  int m_PowerState; // ecx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *NextRequest; // rdi
  bool v16; // zf
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v18; // r15d
  __int64 v19; // r14
  unsigned __int64 *v20; // r12
  KIRQL v21; // al
  char v22; // cl
  KIRQL v23; // r13
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // ecx
  const FxPowerIdleTargetState *v27; // r8
  int v28; // esi
  FxTagTracker *v29; // rcx
  _LIST_ENTRY *v30; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  unsigned __int8 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rdi
  unsigned __int64 *v35; // r15
  _FX_DRIVER_GLOBALS *v36; // rsi
  KIRQL v37; // r12
  __int64 v38; // rax
  unsigned int v39; // r13d
  __int64 v40; // rsi
  unsigned int TargetStatesCount; // edx
  __int64 v42; // rcx
  const FxPowerIdleTargetState *TargetStates; // r8
  FxTagTracker *v44; // rcx
  const void *id; // rcx
  unsigned __int8 v46; // r8
  FxSystemWorkItem *v47; // rdi
  _FX_DRIVER_GLOBALS *v48; // r15
  unsigned __int8 v49; // r14
  unsigned __int8 v50; // r8
  FxRequest *v51; // rdi
  _FX_DRIVER_GLOBALS *v52; // rdx
  _FX_DRIVER_GLOBALS **p_m_Globals; // r12
  unsigned __int8 v54; // r14
  FxIrpQueue *p_m_Queue; // rsi
  signed __int32 v56; // edx
  FxRequest *v57; // rdi
  unsigned int v58; // edx
  _IRP *m_Irp; // r9
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v60; // r10
  _LIST_ENTRY *v61; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int v63; // r15d
  unsigned __int8 v64; // al
  const void *v65; // rax
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *Flink; // rcx
  const char *v69; // rdx
  unsigned __int8 v70; // r8
  FxVerifierLock *v71; // rcx
  const char *v72; // rdx
  FxVerifierLock *v73; // rcx
  FxVerifierLock *v74; // rcx
  const void *v75; // rcx
  int inserted; // eax
  int v77; // eax
  unsigned __int8 v78; // al
  __int64 v79; // rcx
  const void *v80; // rdx
  const void *v81; // rcx
  unsigned int v82; // edx
  const char *v83; // rdx
  unsigned int PowerIdleState; // edi
  __int64 v85; // rcx
  const void *v86; // rdx
  const void *v87; // rcx
  char v88; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *v90; // rax
  int v91; // eax
  FxVerifierLock *v92; // rcx
  const void *v93; // rcx
  int v94; // eax
  _LIST_ENTRY *v95; // rcx
  __int64 v96; // r9
  __int64 v97; // r10
  FxIrpQueue *v98; // r11
  FxVerifierLock *v99; // rcx
  __int64 v100; // r8
  unsigned __int16 v101; // r9
  FxDeviceBase *v102; // rsi
  const void *v103; // rax
  unsigned __int8 v104; // r8
  int v105; // eax
  unsigned int v106; // esi
  __int64 v107; // r12
  __int64 v108; // rcx
  const void *v109; // rdx
  const void *v110; // rcx
  char v111; // al
  FxPowerIdleStates (__fastcall *v112)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v113; // rcx
  FxVerifierLock *v114; // rcx
  FxVerifierLock *v115; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  unsigned __int8 v117[8]; // [rsp+58h] [rbp-29h] BYREF
  KIRQL v118; // [rsp+60h] [rbp-21h]
  int v119; // [rsp+64h] [rbp-1Dh] BYREF
  int v120; // [rsp+68h] [rbp-19h] BYREF
  int v121; // [rsp+6Ch] [rbp-15h] BYREF
  unsigned int v122; // [rsp+70h] [rbp-11h]
  _FX_DRIVER_GLOBALS *v123; // [rsp+78h] [rbp-9h]
  FxIrp Irp; // [rsp+80h] [rbp-1h] BYREF
  __int64 v125; // [rsp+88h] [rbp+7h]
  unsigned __int8 flags; // [rsp+F0h] [rbp+6Fh] BYREF
  FxRequest *pRequest; // [rsp+F8h] [rbp+77h] BYREF
  unsigned __int8 v129; // [rsp+100h] [rbp+7Fh] BYREF

  pRequest = NewRequest;
  flags = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v123 = m_Globals;
  if ( m_Deleted )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)Blink, flags, (unsigned __int8)NewRequest);
    else
      KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
    return 0;
  }
  v7 = flags;
  if ( !flags || !this->m_PassiveLevel )
  {
    m_CallbackLockPtr = this->m_CallbackLockPtr;
    if ( m_CallbackLockPtr && m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
    {
      if ( v5->m_ObjectSize )
        v65 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v65 = 0LL;
      WPP_IFR_SF_q(
        v5->m_Globals,
        3u,
        0xDu,
        0x2Cu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v65);
      if ( v5->m_PassiveLevel )
      {
        if ( !v5->m_WorkItemQueued )
        {
          m_SystemWorkItem = v5->m_SystemWorkItem;
          v5->m_WorkItemQueued = 1;
          if ( !FxSystemWorkItem::EnqueueWorker(m_SystemWorkItem, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
            v5->m_WorkItemQueued = 0;
        }
      }
      else if ( !v5->m_DpcQueued )
      {
        v5->m_DpcQueued = 1;
        KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
      }
      goto LABEL_70;
    }
    ++v5->m_Dispatching;
    p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
    if ( m_Globals->FxVerboseOn )
    {
      if ( v5->m_ObjectSize )
        v75 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v75 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x2Du,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        KeGetCurrentThread(),
        v75);
      goto LABEL_58;
    }
LABEL_6:
    p_m_Cancelled = &v5->m_Cancelled;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v11 = (pRequest != 0LL) + v5->m_Queue.m_RequestCount + v5->m_DriverIoCount;
            if ( p_m_Cancelled->Flink == p_m_Cancelled )
              break;
            if ( pRequest )
            {
              inserted = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
              p_m_Cancelled = &v5->m_Cancelled;
              p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
              if ( inserted < 0 )
                continue;
            }
            v64 = FxIoQueue::ProcessCancelledRequests(v5, &flags);
            p_m_Cancelled = &v5->m_Cancelled;
            p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            if ( !v64 )
              break;
          }
          if ( v5->m_CanceledOnQueueList.Flink == &v5->m_CanceledOnQueueList )
            break;
          if ( pRequest )
          {
            v77 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
            p_m_Cancelled = &v5->m_Cancelled;
            p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            if ( v77 < 0 )
              continue;
          }
          v78 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &flags);
          p_m_Cancelled = &v5->m_Cancelled;
          p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          if ( !v78 )
            break;
        }
        if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessIdleComplete(v5, &flags);
          goto LABEL_48;
        }
        if ( v5->m_PurgeComplete.Method && !v11 && v5->m_Dispatching == 1 )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessPurgeComplete(v5, &flags);
          goto LABEL_48;
        }
        if ( v5->m_IsDevicePowerPolicyOwner
          && v5->m_PowerManaged
          && v5->m_PowerReferenced
          && !v11
          && v5->m_Dispatching == 1 )
        {
          v33 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
          v34 = *(_QWORD *)(v33 + 424);
          v35 = (unsigned __int64 *)(v33 + 16);
          v36 = *(_FX_DRIVER_GLOBALS **)(v34 + 16);
          v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v33 + 16));
          if ( !*(_DWORD *)(v33 + 24) )
          {
            v79 = *(_QWORD *)(v34 + 96);
            v80 = *(const void **)(v79 + 144);
            v81 = *(_WORD *)(v79 + 10) ? (const void *)(v79 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
            WPP_IFR_SF_qq(v36, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v81, v80);
            if ( v36->FxVerifierOn )
            {
              if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v36, v82, 0xBu) || v36->FxVerifyDownlevel )
              {
                v119 = 7567731;
                Mx::MxDbgPrint(
                  "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
                  v36->Public.DriverName,
                  (const char *)&v119,
                  v36->Public.DriverName,
                  (const char *)&v119);
                if ( v36->FxVerifierDbgBreakOnError )
                  DbgBreakPoint();
                else
                  Mx::MxDbgPrint(
                    "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
                    v83,
                    (const char *)&v119);
              }
            }
          }
          v38 = *(unsigned __int8 *)(v33 + 225);
          v39 = --*(_DWORD *)(v33 + 24);
          v40 = *(_QWORD *)(v33 + 424);
          *(_DWORD *)(v33 + 4 * v38 + 232) = 256;
          *(_BYTE *)(v33 + 225) = (*(_BYTE *)(v33 + 225) + 1) & 7;
          TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v33 + 228) - 1].TargetStatesCount;
          v42 = 0LL;
          if ( TargetStatesCount )
          {
            TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v33 + 228) - 1].TargetStates;
            while ( TargetStates[v42].PowerIdleEvent != PowerIdleEventIoDecrement )
            {
              v42 = (unsigned int)(v42 + 1);
              if ( (unsigned int)v42 >= TargetStatesCount )
                goto LABEL_55;
            }
            PowerIdleState = TargetStates[v42].PowerIdleState;
            if ( PowerIdleState != 35 )
            {
              do
              {
                v85 = *(_QWORD *)(v40 + 96);
                v86 = *(const void **)(v85 + 144);
                if ( *(_WORD *)(v85 + 10) )
                  v87 = (const void *)(v85 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v87 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v40 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v87,
                  v86,
                  PowerIdleState,
                  *(_DWORD *)(v33 + 228));
                *(_DWORD *)(v33 + 4LL * *(unsigned __int8 *)(v33 + 226) + 264) = PowerIdleState;
                v88 = *(_BYTE *)(v33 + 226) + 1;
                *(_DWORD *)(v33 + 228) = PowerIdleState;
                *(_BYTE *)(v33 + 226) = v88 & 7;
                StateFunc = FxPowerIdleMachine::m_StateTable[PowerIdleState - 1].StateFunc;
                if ( !StateFunc )
                  break;
                PowerIdleState = StateFunc((FxPowerIdleMachine *)v33);
              }
              while ( PowerIdleState != 35 );
              v5 = this;
              v35 = (unsigned __int64 *)(v33 + 16);
            }
          }
LABEL_55:
          KeReleaseSpinLock(v35, v37);
          v44 = *(FxTagTracker **)(v33 + 32);
          if ( v44 )
            FxTagTracker::UpdateTagHistory(v44, 0LL, 0, 0LL, TagRelease, v39);
          m_Globals = v123;
          v5->m_PowerReferenced = 0;
LABEL_58:
          p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          goto LABEL_6;
        }
        m_PowerState = v5->m_PowerState;
        if ( (unsigned int)(m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          if ( v5->m_ObjectSize )
            v90 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v90 = 0LL;
          WPP_IFR_SF_ql(
            m_Globals,
            5u,
            0xDu,
            0x2Eu,
            (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
            v90,
            m_PowerState);
        }
        if ( pRequest )
        {
          v91 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          if ( v91 < 0 )
            continue;
        }
        if ( FxIoQueue::ProcessPowerEvents(v5, &flags) )
          goto LABEL_48;
        goto $Done_0;
      }
      if ( v5->m_Disposing && !v11 && v5->m_Dispatching == 1 )
      {
        v5->m_Deleted = 1;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v92 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock(v92, flags, (unsigned __int8)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink);
        else
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v5->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_78;
      if ( (v5->m_QueueState & 2) == 0 )
      {
        if ( v5->m_ObjectSize )
          v93 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v93 = 0LL;
        WPP_IFR_SF_ql(
          m_Globals,
          3u,
          0xDu,
          0x2Fu,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v93,
          v5->m_QueueState);
LABEL_78:
        if ( pRequest )
        {
          v105 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          if ( v105 < 0 )
          {
LABEL_48:
            p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            goto LABEL_6;
          }
        }
        goto $Done_0;
      }
      m_Type = v5->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
      {
        if ( m_Type == WdfIoQueueDispatchSequential && v5->m_DriverIoCount > 0
          || v5->m_Type == WdfIoQueueDispatchParallel && v5->m_DriverIoCount >= v5->m_MaxParallelQueuePresentedRequests )
        {
          goto LABEL_78;
        }
        if ( v5->m_Queue.m_RequestCount > 0 && (NextRequest = FxRequest::GetNextRequest(&v5->m_Queue)) != 0LL )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
        }
        else
        {
          NextRequest = pRequest;
          if ( !pRequest )
            goto $Done_0;
          pRequest->m_IoQueue = v5;
          v16 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v16 && v5->m_PowerManaged && !v5->m_PowerReferenced )
          {
            m_DeviceBase = v5->m_DeviceBase;
            v18 = 0;
            v122 = 0;
            v19 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
            v20 = (unsigned __int64 *)(v19 + 16);
            v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 16));
            v22 = *(_BYTE *)(v19 + 224);
            v23 = v21;
            v118 = v21;
            if ( (v22 & 0x10) != 0 )
            {
              v28 = -1073741101;
            }
            else if ( (v22 & 0x20) != 0 )
            {
              v18 = ++*(_DWORD *)(v19 + 24);
              v125 = *(_QWORD *)(v19 + 424);
              v24 = *(unsigned __int8 *)(v19 + 225);
              v122 = v18;
              *(_DWORD *)(v19 + 4 * v24 + 232) = 512;
              *(_BYTE *)(v19 + 225) = (*(_BYTE *)(v19 + 225) + 1) & 7;
              v25 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v19 + 228) - 1].TargetStatesCount;
              v26 = 0;
              if ( v25 )
              {
                v27 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v19 + 228) - 1].TargetStates;
                while ( v27[v26].PowerIdleEvent != PowerIdleEventIoIncrement )
                {
                  if ( ++v26 >= v25 )
                    goto LABEL_37;
                }
                v106 = v27[v26].PowerIdleState;
                if ( v106 != 35 )
                {
                  v107 = v125;
                  do
                  {
                    v108 = *(_QWORD *)(v107 + 96);
                    v109 = *(const void **)(v108 + 144);
                    if ( *(_WORD *)(v108 + 10) )
                      v110 = (const void *)(v108 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v110 = 0LL;
                    WPP_IFR_SF_qqLL(
                      *(_FX_DRIVER_GLOBALS **)(v107 + 16),
                      4u,
                      0x15u,
                      0x11u,
                      WPP_PowerIdleStateMachine_cpp_Traceguids,
                      v110,
                      v109,
                      v106,
                      *(_DWORD *)(v19 + 228));
                    *(_DWORD *)(v19 + 4LL * *(unsigned __int8 *)(v19 + 226) + 264) = v106;
                    v111 = *(_BYTE *)(v19 + 226) + 1;
                    *(_DWORD *)(v19 + 228) = v106;
                    *(_BYTE *)(v19 + 226) = v111 & 7;
                    v112 = FxPowerIdleMachine::m_StateTable[v106 - 1].StateFunc;
                    if ( !v112 )
                      break;
                    v106 = v112((FxPowerIdleMachine *)v19);
                  }
                  while ( v106 != 35 );
                  v5 = this;
                  v20 = (unsigned __int64 *)(v19 + 16);
                  v18 = v122;
                  v23 = v118;
                }
              }
LABEL_37:
              v28 = 259;
              if ( KeReadStateEvent((PRKEVENT)(v19 + 192)) )
                v28 = 0;
            }
            else
            {
              v28 = -1073741101;
            }
            KeReleaseSpinLock(v20, v23);
            v29 = *(FxTagTracker **)(v19 + 32);
            if ( v29 && (!v28 || v28 == 259) )
              FxTagTracker::UpdateTagHistory(v29, 0LL, 0, 0LL, TagAddRef, v18);
            m_Globals = v123;
            if ( v28 >= 0 )
              v5->m_PowerReferenced = 1;
          }
          pRequest = 0LL;
        }
        ++v5->m_DriverIoCount;
        v30 = v5->m_DriverOwned.Blink;
        p_m_OwnerListEntry2 = &NextRequest->m_OwnerListEntry2;
        NextRequest->m_OwnerListEntry2.Flink = &v5->m_DriverOwned;
        NextRequest->m_OwnerListEntry2.Blink = v30;
        if ( v30->Flink != &v5->m_DriverOwned )
          __fastfail(3u);
        v30->Flink = p_m_OwnerListEntry2;
        v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v113 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v113, flags, (unsigned __int8)p_Blink);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        }
        FxIoQueue::DispatchRequestToDriver(v5, NextRequest);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v114 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Lock(v114, &flags, v32);
        }
        else
        {
          flags = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
        }
        goto LABEL_48;
      }
      v51 = pRequest;
      if ( !pRequest )
        goto LABEL_75;
      v52 = pRequest->m_Globals;
      p_m_Globals = &pRequest->m_Globals;
      v54 = flags;
      p_m_Queue = &v5->m_Queue;
      v117[0] = flags;
      if ( !v52->FxVerifierOn
        || (v94 = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v52, &v5->m_Queue),
            p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
            v63 = v94,
            v94 >= 0) )
      {
        v56 = _InterlockedExchangeAdd(&v51->m_Refcnt, 1u);
        v57 = pRequest;
        v58 = v56 + 1;
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          v95 = pRequest[-1].m_ForwardProgressList.Blink;
          if ( v95 )
          {
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v95,
              (void *)0x75657551,
              1892,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v58);
            p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          }
        }
        m_Irp = v57->m_Irp.m_Irp;
        v60 = &v57->120;
        v57->m_IrpQueue = p_m_Queue;
        Irp.m_Irp = m_Irp;
        if ( v57 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v60;
          v57->m_CsqContext.Irp = m_Irp;
          v57->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
          v60->m_CsqContext.Type = 1;
        }
        v61 = v5->m_Queue.m_Queue.Blink;
        p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
        m_Irp->Tail.Overlay.ListEntry.Flink = &p_m_Queue->m_Queue;
        m_Irp->Tail.Overlay.ListEntry.Blink = v61;
        if ( (FxIrpQueue *)v61->Flink != p_m_Queue )
          __fastfail(3u);
        v61->Flink = p_ListEntry;
        v5->m_Queue.m_Queue.Blink = p_ListEntry;
        ++v5->m_Queue.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          FxIrpQueue::RemoveIrpFromListEntry(&v5->m_Queue, &Irp);
          if ( v97 )
            *(_QWORD *)(v97 + 8) = v98;
          *(_QWORD *)(v96 + 144) = v98;
          v57->m_IrpQueue = v98;
          v51 = pRequest;
          v63 = -1073741536;
          pRequest->Release(
            pRequest,
            (void *)1969583441,
            1908,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
        }
        else
        {
          v51 = pRequest;
          v63 = 0;
        }
        v54 = flags;
      }
      if ( v63 < 0 )
      {
        if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v99 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock(v99, v54, (unsigned __int8)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink);
        else
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v54);
        v101 = 0;
        v51->m_Irp.m_Irp->IoStatus.Information = 0LL;
        v102 = v51->m_DeviceBase;
        if ( (*p_m_Globals)->FxVerboseOn )
        {
          if ( v51->m_ObjectSize )
            v103 = (const void *)((unsigned __int64)v51 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v103 = 0LL;
          WPP_IFR_SF_qqxd(
            *p_m_Globals,
            (unsigned __int8)*p_m_Globals,
            v51->m_Irp.m_Irp->IoStatus.Information,
            0xBu,
            traceGuid,
            v103,
            v51->m_Irp.m_Irp,
            v51->m_Irp.m_Irp->IoStatus.Information,
            v63);
        }
        if ( v102 )
          v51->m_PriorityBoost = HIBYTE(v102[1].m_Globals);
        else
          v51->m_PriorityBoost = 0;
        FxRequest::CompleteInternal(v51, (_FX_DRIVER_GLOBALS *)(unsigned int)v63, v100, v101);
        v51->Release(v51, (void *)1886220099, 2611, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v5, v117, v104);
      }
      else
      {
        v51->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount != 1 && !v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          goto LABEL_96;
        v16 = v5->m_IsDevicePowerPolicyOwner == 0;
        v5->m_TransitionFromEmpty = 1;
        v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
        if ( v16 || !v5->m_PowerManaged || v5->m_PowerReferenced )
          goto LABEL_96;
        if ( FxPowerIdleMachine::PowerReferenceWorker(
               *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL) >= 0 )
          v5->m_PowerReferenced = 1;
      }
      p_Blink = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
LABEL_96:
      m_Globals = v123;
      p_m_Cancelled = &v5->m_Cancelled;
      pRequest = 0LL;
      if ( v63 >= 0 )
      {
LABEL_75:
        if ( v5->m_ReadyNotify.Method && v5->m_TransitionFromEmpty )
        {
          FxIoQueue::ProcessReadyNotify(v5, &flags);
          goto LABEL_48;
        }
$Done_0:
        --v5->m_Dispatching;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v115 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v115, flags, (unsigned __int8)p_Blink);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        }
        return 1;
      }
    }
  }
  if ( this->m_ObjectSize )
    id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    id = 0LL;
  v7 = flags;
  WPP_IFR_SF_qcq(v5->m_Globals, PreviousIrql, (unsigned int)NewRequest, a4, traceGuid, KeGetCurrentThread(), flags, id);
  if ( !v5->m_WorkItemQueued )
  {
    v47 = v5->m_SystemWorkItem;
    v5->m_WorkItemQueued = 1;
    v48 = v47->m_Globals;
    if ( SLOBYTE(v47->m_ObjectFlags) < 0
      && (Flink = (FxVerifierLock *)v47[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    {
      FxVerifierLock::Lock(Flink, &v129, v46);
      v49 = v129;
    }
    else
    {
      v49 = KeAcquireSpinLockRaiseToDpc(&v47->m_NPLock.m_Lock);
      v129 = v49;
    }
    if ( v47->m_Enqueued )
    {
      WPP_IFR_SF_qq(v48, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, v47, v47->m_WorkItem.m_WorkItem);
      v121 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v48->Public.DriverName,
        (const char *)&v121,
        v48->Public.DriverName,
        (const char *)&v121);
      if ( v48->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      else
        Mx::MxDbgPrint(
          "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
          v69,
          (const char *)&v121);
      if ( SLOBYTE(v47->m_ObjectFlags) < 0 )
      {
        v71 = (FxVerifierLock *)v47[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink;
        if ( v71 )
        {
LABEL_132:
          FxVerifierLock::Unlock(v71, v49, v70);
          goto LABEL_126;
        }
      }
    }
    else
    {
      if ( !v47->m_RunningDown )
      {
        KeClearEvent(&v47->m_WorkItemCompleted.m_Event.m_Event);
        v47->m_CallbackArg = v5;
        v47->m_Callback = FxIoQueue::_DeferredDispatchThreadThunk;
        v47->m_Enqueued = 1;
        _InterlockedIncrement(&v47->m_OutStandingWorkItem);
        if ( SLOBYTE(v47->m_ObjectFlags) < 0
          && (v73 = (FxVerifierLock *)v47[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
        {
          FxVerifierLock::Unlock(v73, v129, v50);
        }
        else
        {
          KeReleaseSpinLock(&v47->m_NPLock.m_Lock, v129);
        }
        IoQueueWorkItem(v47->m_WorkItem.m_WorkItem, FxSystemWorkItem::_WorkItemThunk, DelayedWorkQueue, v47);
        v7 = flags;
        goto LABEL_70;
      }
      WPP_IFR_SF_q(v48, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, v47);
      v120 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v48->Public.DriverName,
        (const char *)&v120,
        v48->Public.DriverName,
        (const char *)&v120);
      if ( v48->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      else
        Mx::MxDbgPrint(
          "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
          v72,
          (const char *)&v120);
      if ( SLOBYTE(v47->m_ObjectFlags) < 0 )
      {
        v71 = (FxVerifierLock *)v47[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink;
        if ( v71 )
          goto LABEL_132;
      }
    }
    KeReleaseSpinLock(&v47->m_NPLock.m_Lock, v49);
LABEL_126:
    v5->m_WorkItemQueued = 0;
  }
LABEL_70:
  v16 = pRequest == 0LL;
  v5->m_RequeueDeferredDispatcher = 1;
  if ( !v16 )
    FxIoQueue::InsertNewRequestLocked(v5, &pRequest, v7);
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v74 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock(v74, v7, v46);
  else
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v7);
  return 1;
}
