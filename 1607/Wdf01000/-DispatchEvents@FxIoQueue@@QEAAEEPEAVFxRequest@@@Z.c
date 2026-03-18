/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0005F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000BBAC (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000BD10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000E410 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfRequestSend @ 0x1C000EAA0 (imp_WdfRequestSend.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00105C0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0012284 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001C900 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001D978 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001E43C (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001E4F4 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C0038C60 (imp_WdfIoQueueStart.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006347C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0063734 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C00900E0 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00908B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0090E28 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0090FDC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0091170 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000B290 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000BAF8 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     WPP_IFR_SF_qcq @ 0x1C0011EA0 (WPP_IFR_SF_qcq.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001C200 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D3D4 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D7FC (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C003039C (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0034BDC (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0034C7C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0090444 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C00905B4 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009068C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C8B48 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
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
  unsigned __int8 (*IsOwner)(void); // rax
  const _GUID *v10; // r8
  _LIST_ENTRY *p_m_Cancelled; // rdx
  void **v12; // r11
  int v13; // edi
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v15; // r14
  bool v17; // zf
  FxDeviceBase *v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rdi
  unsigned __int64 *v21; // r12
  KIRQL v22; // al
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // esi
  FxTagTracker *v31; // rcx
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  unsigned __int8 v34; // r8
  FxRequest *v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rdi
  unsigned __int64 *v38; // r15
  _FX_DRIVER_GLOBALS *v39; // rsi
  KIRQL v40; // r12
  __int64 v41; // rax
  unsigned int v42; // r13d
  __int64 v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // r8
  FxTagTracker *v47; // rcx
  const void *id; // rcx
  unsigned __int8 v49; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rdi
  _FX_DRIVER_GLOBALS *v51; // r15
  unsigned __int8 v52; // r14
  unsigned __int8 v53; // r8
  const void *v54; // rax
  FxSystemWorkItem *v55; // rcx
  _FX_DRIVER_GLOBALS *v56; // rdx
  FxIrpQueue *p_m_Queue; // rdi
  unsigned __int8 v58; // r14
  signed __int32 v59; // edx
  FxRequest *v60; // rsi
  unsigned int v61; // edx
  _IRP *m_Irp; // r9
  $8B26BD50DADCE63D5F5F71A785E147C5 *v63; // r10
  _LIST_ENTRY *v64; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int v66; // r15d
  FxIrpQueue *v67; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *v69; // rcx
  _LIST_ENTRY *v70; // rcx
  _LIST_ENTRY **p_Flink; // rdx
  _QWORD *v72; // r14
  __int64 v73; // rax
  __int64 (__fastcall *v74)(FxRequest *, void *, __int64, char *); // rax
  char m_ObjectFlags; // al
  unsigned __int8 m_Reserved; // r13
  bool v77; // cl
  unsigned int m_CanComplete; // edx
  signed __int32 v79; // r12d
  unsigned __int16 v80; // cx
  FxTagTracker *v81; // r15
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v83; // rdi
  void (__fastcall *v84)(unsigned __int64); // rax
  void (__fastcall *v85)(unsigned __int64); // rax
  unsigned __int16 v86; // ax
  _QWORD *v87; // rcx
  _QWORD *v88; // rdi
  void (__fastcall *v89)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // r15
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v94; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v96; // rsi
  __int64 v97; // rax
  _SLIST_ENTRY *v98; // rsi
  void (__fastcall *v99)(FxObject *, unsigned int); // rdx
  void (__fastcall *v100)(FxObject *); // rax
  void *m_Lock; // rcx
  void *v102; // rcx
  _LIST_ENTRY **v103; // rax
  FX_POOL_TRACKER *v104; // rdi
  unsigned __int8 v105; // al
  _SLIST_ENTRY *m_InternalContext; // rdi
  unsigned int v107; // edi
  __int64 v108; // rcx
  const void *v109; // rdx
  const void *v110; // rcx
  char v111; // al
  __int64 (__fastcall *v112)(__int64); // rax
  _MDL *v113; // rcx
  FxRequestContext *v114; // rcx
  _IRP *v115; // rdi
  FxRequestTimer *v116; // rcx
  _LIST_ENTRY **v117; // rcx
  FxVerifierLock *Flink; // rcx
  FxVerifierLock *v119; // rcx
  FxVerifierLock *Blink; // rcx
  const void *v121; // rcx
  int inserted; // eax
  int v123; // eax
  unsigned __int8 v124; // al
  __int64 v125; // rcx
  const void *v126; // rdx
  const void *v127; // rcx
  unsigned int v128; // edx
  WDFWORKITEM__ *Handle; // rax
  int v130; // edx
  const _GUID *v131; // r8
  int v132; // eax
  unsigned __int8 v133; // dl
  WDFWORKITEM__ *v134; // rax
  int v135; // edx
  const _GUID *v136; // r8
  int v137; // eax
  _LIST_ENTRY *v138; // rcx
  __int64 v139; // r9
  __int64 v140; // r10
  int v141; // eax
  FxTagTracker *v142; // rcx
  FxRequestContext *v143; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FX_POOL_HEADER *v145; // rax
  FxVerifierLock *v146; // rcx
  FxRequestContext *v147; // rcx
  FxVerifierLock *v148; // rcx
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *v151; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v153; // rcx
  unsigned int v154; // esi
  const void *ObjectHandleUnchecked; // rax
  __int64 v156; // rdx
  char v157; // al
  __int64 (__fastcall *v158)(__int64); // rax
  FxVerifierLock *v159; // rcx
  FxVerifierLock *v160; // rcx
  FxVerifierLock *v161; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-49h]
  unsigned __int8 v163; // [rsp+58h] [rbp-19h]
  unsigned __int8 v164[7]; // [rsp+59h] [rbp-18h] BYREF
  unsigned __int8 v165[8]; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int8 v166; // [rsp+68h] [rbp-9h]
  unsigned int v167; // [rsp+6Ch] [rbp-5h]
  _FX_DRIVER_GLOBALS *v168; // [rsp+70h] [rbp-1h]
  FxIrp Irp; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v170; // [rsp+80h] [rbp+Fh]
  ULONG_PTR retaddr; // [rsp+D0h] [rbp+5Fh]
  unsigned __int8 flags; // [rsp+E0h] [rbp+6Fh] BYREF
  FxRequest *pRequest; // [rsp+E8h] [rbp+77h] BYREF
  char v175; // [rsp+F0h] [rbp+7Fh]

  pRequest = NewRequest;
  flags = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v168 = m_Globals;
  if ( m_Deleted )
  {
    FxNonPagedObject::Unlock(this, flags);
    return 0;
  }
  v7 = flags;
  if ( flags && this->m_PassiveLevel )
  {
    if ( this->m_ObjectSize )
      id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      id = 0LL;
    v7 = flags;
    WPP_IFR_SF_qcq(
      v5->m_Globals,
      PreviousIrql,
      (unsigned int)NewRequest,
      a4,
      traceGuid,
      KeGetCurrentThread(),
      flags,
      id);
    if ( v5->m_WorkItemQueued )
      goto LABEL_74;
    m_SystemWorkItem = v5->m_SystemWorkItem;
    v5->m_WorkItemQueued = 1;
    v51 = m_SystemWorkItem->m_Globals;
    if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
      && (Flink = (FxVerifierLock *)m_SystemWorkItem[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    {
      FxVerifierLock::Lock(Flink, v164, v49);
      v52 = v164[0];
    }
    else
    {
      v52 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
      v164[0] = v52;
    }
    if ( m_SystemWorkItem->m_Enqueued )
    {
      WPP_IFR_SF_qq(
        v51,
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
          && (v119 = (FxVerifierLock *)m_SystemWorkItem[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
        {
          FxVerifierLock::Unlock(v119, v164[0], v53);
        }
        else
        {
          KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v164[0]);
        }
        IoQueueWorkItem(
          m_SystemWorkItem->m_WorkItem.m_WorkItem,
          FxSystemWorkItem::_WorkItemThunk,
          DelayedWorkQueue,
          m_SystemWorkItem);
        v7 = flags;
LABEL_74:
        v17 = pRequest == 0LL;
        v5->m_RequeueDeferredDispatcher = 1;
        if ( !v17 )
          FxIoQueue::InsertNewRequestLocked(v5, &pRequest, v7);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (Blink = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(Blink, v7, v49);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v7);
        }
        return 1;
      }
      WPP_IFR_SF_q(v51, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
    }
    FxVerifierDbgBreakPoint(v51);
    FxNonPagedObject::Unlock(m_SystemWorkItem, v52);
    v5->m_WorkItemQueued = 0;
    goto LABEL_74;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( !m_CallbackLockPtr )
    goto LABEL_6;
  IsOwner = (unsigned __int8 (*)(void))m_CallbackLockPtr->IsOwner;
  if ( (char *)IsOwner != (char *)FxCallbackMutexLock::IsOwner )
  {
    if ( (char *)IsOwner != (char *)FxCallbackSpinLock::IsOwner )
    {
      if ( !IsOwner() )
        goto LABEL_6;
LABEL_81:
      if ( v5->m_ObjectSize )
        v54 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v54 = 0LL;
      WPP_IFR_SF_q(v5->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v54);
      if ( v5->m_PassiveLevel )
      {
        if ( !v5->m_WorkItemQueued )
        {
          v55 = v5->m_SystemWorkItem;
          v5->m_WorkItemQueued = 1;
          if ( !FxSystemWorkItem::EnqueueWorker(v55, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
            v5->m_WorkItemQueued = 0;
        }
      }
      else if ( !v5->m_DpcQueued )
      {
        v5->m_DpcQueued = 1;
        KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
      }
      goto LABEL_74;
    }
    if ( m_CallbackLockPtr->m_OwnerThread != KeGetCurrentThread() )
      goto LABEL_6;
LABEL_80:
    v7 = flags;
    goto LABEL_81;
  }
  if ( m_CallbackLockPtr->m_OwnerThread == KeGetCurrentThread() )
    goto LABEL_80;
LABEL_6:
  ++v5->m_Dispatching;
  v10 = WPP_FxIoQueue_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    if ( v5->m_ObjectSize )
      v121 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v121 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, KeGetCurrentThread(), v121);
    v10 = WPP_FxIoQueue_cpp_Traceguids;
  }
LABEL_7:
  while ( 2 )
  {
    p_m_Cancelled = &v5->m_Cancelled;
    v12 = &FxRequestBase::`vftable';
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = (pRequest != 0LL) + v5->m_Queue.m_RequestCount + v5->m_DriverIoCount;
            if ( p_m_Cancelled->Flink == p_m_Cancelled )
              break;
            if ( pRequest )
            {
              inserted = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
              p_m_Cancelled = &v5->m_Cancelled;
              v10 = WPP_FxIoQueue_cpp_Traceguids;
              v12 = &FxRequestBase::`vftable';
              if ( inserted < 0 )
                continue;
            }
            v105 = FxIoQueue::ProcessCancelledRequests(v5, &flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            v12 = &FxRequestBase::`vftable';
            if ( !v105 )
              break;
          }
          if ( v5->m_CanceledOnQueueList.Flink == &v5->m_CanceledOnQueueList )
            break;
          if ( pRequest )
          {
            v123 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            v12 = &FxRequestBase::`vftable';
            if ( v123 < 0 )
              continue;
          }
          v124 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v12 = &FxRequestBase::`vftable';
          if ( !v124 )
            break;
        }
        if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessIdleComplete(v5, &flags);
          goto LABEL_62;
        }
        if ( v5->m_PurgeComplete.Method && !v13 && v5->m_Dispatching == 1 )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessPurgeComplete(v5, &flags);
          goto LABEL_62;
        }
        if ( v5->m_IsDevicePowerPolicyOwner
          && v5->m_PowerManaged
          && v5->m_PowerReferenced
          && !v13
          && v5->m_Dispatching == 1 )
        {
          v36 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
          v37 = *(_QWORD *)(v36 + 424);
          v38 = (unsigned __int64 *)(v36 + 16);
          v39 = *(_FX_DRIVER_GLOBALS **)(v37 + 16);
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 16));
          if ( !*(_DWORD *)(v36 + 24) )
          {
            v125 = *(_QWORD *)(v37 + 96);
            v126 = *(const void **)(v125 + 144);
            v127 = *(_WORD *)(v125 + 10) ? (const void *)(v125 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
            WPP_IFR_SF_qq(v39, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v127, v126);
            if ( v39->FxVerifierOn )
            {
              if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v39, v128, 0xBu) || v39->FxVerifyDownlevel )
                FxVerifierDbgBreakPoint(v39);
            }
          }
          v41 = *(unsigned __int8 *)(v36 + 225);
          v42 = --*(_DWORD *)(v36 + 24);
          v43 = *(_QWORD *)(v36 + 424);
          *(_DWORD *)(v36 + 4 * v41 + 232) = 256;
          *(_BYTE *)(v36 + 225) = (*(_BYTE *)(v36 + 225) + 1) & 7;
          v44 = *((_DWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Blink
                + 6 * *(_DWORD *)(v36 + 228));
          v45 = 0LL;
          if ( v44 )
          {
            v46 = *((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Flink
                  + 3 * *(_DWORD *)(v36 + 228));
            while ( *(_DWORD *)(v46 + 8 * v45) != 256 )
            {
              v45 = (unsigned int)(v45 + 1);
              if ( (unsigned int)v45 >= v44 )
                goto LABEL_59;
            }
            v107 = *(_DWORD *)(v46 + 8 * v45 + 4);
            if ( v107 != 35 )
            {
              do
              {
                v108 = *(_QWORD *)(v43 + 96);
                v109 = *(const void **)(v108 + 144);
                if ( *(_WORD *)(v108 + 10) )
                  v110 = (const void *)(v108 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v110 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v43 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v110,
                  v109,
                  v107,
                  *(_DWORD *)(v36 + 228));
                *(_DWORD *)(v36 + 4LL * *(unsigned __int8 *)(v36 + 226) + 264) = v107;
                v111 = *(_BYTE *)(v36 + 226) + 1;
                *(_DWORD *)(v36 + 228) = v107;
                *(_BYTE *)(v36 + 226) = v111 & 7;
                v112 = (__int64 (__fastcall *)(__int64))*((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.OldIrql
                                                        + 3 * (int)(v107 - 1));
                if ( !v112 )
                  break;
                v107 = v112(v36);
              }
              while ( v107 != 35 );
              v5 = this;
              v38 = (unsigned __int64 *)(v36 + 16);
            }
          }
LABEL_59:
          KeReleaseSpinLock(v38, v40);
          v47 = *(FxTagTracker **)(v36 + 32);
          if ( v47 )
            FxTagTracker::UpdateTagHistory(v47, 0LL, 0, 0LL, TagRelease, v42);
          m_Globals = v168;
          v5->m_PowerReferenced = 0;
          goto LABEL_62;
        }
        if ( (unsigned int)(v5->m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          Handle = FxWmiProvider::GetHandle((FxWorkItem *)v5);
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, v131, Handle, v130);
        }
        if ( pRequest )
        {
          v132 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v12 = &FxRequestBase::`vftable';
          if ( v132 < 0 )
            continue;
        }
        if ( !FxIoQueue::ProcessPowerEvents(v5, &flags) )
          goto $Done_2;
LABEL_62:
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        goto LABEL_7;
      }
      if ( v5->m_Disposing && !v13 && v5->m_Dispatching == 1 )
      {
        v133 = flags;
        v5->m_Deleted = 1;
        FxNonPagedObject::Unlock(v5, v133);
        KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v5->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_88;
      if ( (v5->m_QueueState & 2) == 0 )
      {
        v134 = FxWmiProvider::GetHandle((FxWorkItem *)v5);
        WPP_IFR_SF_ql(m_Globals, 3u, 0xDu, 0x31u, v136, v134, v135);
        goto LABEL_88;
      }
      m_Type = v5->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
        break;
      v35 = pRequest;
      if ( !pRequest )
        goto LABEL_51;
      v56 = pRequest->m_Globals;
      p_m_Queue = &v5->m_Queue;
      v58 = flags;
      v165[0] = flags;
      if ( !v56->FxVerifierOn
        || (v137 = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v56, &v5->m_Queue),
            v10 = WPP_FxIoQueue_cpp_Traceguids,
            v66 = v137,
            v12 = &FxRequestBase::`vftable',
            v137 >= 0) )
      {
        v59 = _InterlockedExchangeAdd(&v35->m_Refcnt, 1u);
        v60 = pRequest;
        v61 = v59 + 1;
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          v138 = pRequest[-1].m_ForwardProgressList.Blink;
          if ( v138 )
          {
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v138,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v61);
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            v12 = &FxRequestBase::`vftable';
          }
        }
        m_Irp = v60->m_Irp.m_Irp;
        v63 = &v60->120;
        v60->m_IrpQueue = p_m_Queue;
        Irp.m_Irp = m_Irp;
        if ( v60 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v63;
          v60->m_CsqContext.Irp = m_Irp;
          v60->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
          v63->m_CsqContext.Type = 1;
        }
        v64 = v5->m_Queue.m_Queue.Blink;
        p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
        if ( (FxIrpQueue *)v64->Flink != p_m_Queue )
          __fastfail(3u);
        p_ListEntry->Flink = &p_m_Queue->m_Queue;
        m_Irp->Tail.Overlay.ListEntry.Blink = v64;
        v64->Flink = p_ListEntry;
        v5->m_Queue.m_Queue.Blink = p_ListEntry;
        ++v5->m_Queue.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          FxIrpQueue::RemoveIrpFromListEntry(&v5->m_Queue, &Irp);
          if ( v140 )
            *(_QWORD *)(v140 + 8) = 0LL;
          *(_QWORD *)(v139 + 144) = 0LL;
          v60->m_IrpQueue = 0LL;
          v35 = pRequest;
          v66 = -1073741536;
          pRequest->Release(
            pRequest,
            (void *)1969583441,
            1916,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v12 = &FxRequestBase::`vftable';
        }
        else
        {
          v35 = pRequest;
          v66 = 0;
        }
        v58 = flags;
      }
      if ( v66 < 0 )
      {
        FxNonPagedObject::Unlock(v5, v58);
        v35->m_Irp.m_Irp->IoStatus.Information = 0LL;
        FxRequest::Complete(v35, v66);
        v35->Release(v35, (void *)1886220099, 2633, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v5, v165);
      }
      else
      {
        v35->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount != 1 && !v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          goto LABEL_102;
        v17 = v5->m_IsDevicePowerPolicyOwner == 0;
        v5->m_TransitionFromEmpty = 1;
        v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
        if ( v17 || !v5->m_PowerManaged || v5->m_PowerReferenced )
          goto LABEL_102;
        if ( FxPowerIdleMachine::PowerReferenceWorker(
               *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL) >= 0 )
          v5->m_PowerReferenced = 1;
      }
      v10 = WPP_FxIoQueue_cpp_Traceguids;
      v12 = &FxRequestBase::`vftable';
LABEL_102:
      m_Globals = v168;
      p_m_Cancelled = &v5->m_Cancelled;
      pRequest = 0LL;
      if ( v66 >= 0 )
      {
LABEL_51:
        if ( !v5->m_ReadyNotify.Method || !v5->m_TransitionFromEmpty )
          goto $Done_2;
        FxIoQueue::ProcessReadyNotify(v5, &flags);
        goto LABEL_62;
      }
    }
    if ( m_Type == WdfIoQueueDispatchSequential && v5->m_DriverIoCount > 0
      || v5->m_Type == WdfIoQueueDispatchParallel && v5->m_DriverIoCount >= v5->m_MaxParallelQueuePresentedRequests )
    {
LABEL_88:
      if ( !pRequest )
        goto $Done_2;
      v141 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
      if ( v141 >= 0 )
        goto $Done_2;
      goto LABEL_62;
    }
    if ( v5->m_Queue.m_RequestCount > 0 )
    {
      v67 = &v5->m_Queue;
      p_Blink = 0LL;
      v69 = v5->m_Queue.m_Queue.Flink;
      if ( v69 != (_LIST_ENTRY *)&v5->m_Queue )
        p_Blink = (_IRP *)&v69[-11].Blink;
      if ( p_Blink )
      {
        while ( !_InterlockedExchange64((volatile __int64 *)&p_Blink->CancelRoutine, 0LL) )
        {
          p_Blink = FxIrpQueue::PeekNextIrpFromQueue(v67, p_Blink, 0LL);
          if ( !p_Blink )
            goto LABEL_25;
        }
        v70 = &p_Blink->Tail.Overlay.ListEntry;
        v10 = (const _GUID *)p_Blink->Tail.Overlay.ListEntry.Flink;
        p_Flink = &p_Blink->Tail.Overlay.ListEntry.Blink->Flink;
        if ( *(_IRP **)v10->Data4 != (_IRP *)(&p_Blink->Tail.CompletionKey + 6) || *p_Flink != v70 )
          __fastfail(3u);
        *p_Flink = (_LIST_ENTRY *)v10;
        *(_QWORD *)v10->Data4 = p_Flink;
        p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
        v70->Flink = v70;
        --v67->m_RequestCount;
        v72 = p_Blink->Tail.Overlay.DriverContext[3];
        if ( *(_DWORD *)v72 == 1 )
          v72[1] = 0LL;
        p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
        v73 = *(v72 - 15);
        v170 = v72;
        v15 = (FxRequest *)(v72 - 15);
        v74 = *(__int64 (__fastcall **)(FxRequest *, void *, __int64, char *))(v73 + 16);
        v15->m_IrpQueue = 0LL;
        if ( v74 == FxRequest::Release )
        {
          m_ObjectFlags = v15->m_ObjectFlags;
          m_Reserved = v15->m_Reserved;
          v77 = v15->m_IrpAllocation == 0;
          m_CanComplete = v15->m_CanComplete;
          v175 = v77;
          v166 = m_Reserved;
          v163 = m_CanComplete;
          if ( m_ObjectFlags < 0 )
          {
            v142 = (FxTagTracker *)v15[-1].m_ForwardProgressList.Blink;
            if ( v142 )
            {
              FxTagTracker::UpdateTagHistory(
                v142,
                (void *)0x75657551,
                2062,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagRelease,
                v15->m_Refcnt - 1);
              m_CanComplete = v163;
              v12 = &FxRequestBase::`vftable';
            }
            v77 = v175;
          }
          v79 = _InterlockedDecrement(&v15->m_Refcnt);
          if ( !v79 )
          {
            v80 = v15->m_ObjectFlags;
            if ( (v80 & 0x20) != 0 || (v80 & 0x10) != 0 && KeGetCurrentIrql() )
            {
              FxObject::SetObjectStateLocked(v15, FxObjectStateDeferedDestroy);
              FxDisposeList::Add(v15->m_Globals->Driver->m_DisposeList, v15);
            }
            else
            {
              if ( (v80 & 0x80u) != 0 )
              {
                v81 = (FxTagTracker *)v15[-1].m_ForwardProgressList.Blink;
                if ( v81 )
                {
                  FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v15[-1].m_ForwardProgressList.Blink);
                  v12 = &FxRequestBase::`vftable';
                }
              }
              else
              {
                v81 = 0LL;
              }
              m_ObjectSize = v15->m_ObjectSize;
              if ( m_ObjectSize && (v15->m_ObjectFlags & 8) != 0 )
              {
                v83 = (FxRequest_vtbl **)((char *)&v15->__vftable + m_ObjectSize);
                if ( v83 )
                {
                  do
                  {
                    v84 = (void (__fastcall *)(unsigned __int64))v83[2];
                    if ( v84 )
                    {
                      v84((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v83[2] = 0LL;
                    }
                    v85 = (void (__fastcall *)(unsigned __int64))v83[3];
                    if ( v85 )
                    {
                      v85((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v83[3] = 0LL;
                    }
                    v83 = (_QWORD *)v83[1];
                  }
                  while ( v83 );
                  m_Reserved = v166;
                  v12 = &FxRequestBase::`vftable';
                }
                v86 = v15->m_ObjectSize;
                LOBYTE(m_CanComplete) = 1;
                if ( v86 )
                {
                  v87 = (FxRequest_vtbl **)((char *)&v15->__vftable + v86);
                  if ( v87 )
                  {
                    do
                    {
                      v88 = (_QWORD *)v87[1];
                      if ( !(_BYTE)m_CanComplete )
                        FxPoolFree(v87);
                      LOBYTE(m_CanComplete) = 0;
                      v87 = v88;
                    }
                    while ( v88 );
                    v12 = &FxRequestBase::`vftable';
                  }
                }
              }
              if ( v81 )
              {
                v15[-1].m_ForwardProgressList.Blink = 0LL;
                FxTagTracker::`scalar deleting destructor'(v81, m_CanComplete);
                v12 = &FxRequestBase::`vftable';
              }
              v89 = FxRequestFromLookaside::SelfDestruct;
              SelfDestruct = v15->SelfDestruct;
              if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
              {
                m_AllocatedMdl = v15->m_AllocatedMdl;
                m_DeviceBase = v15->m_DeviceBase;
                v15->__vftable = (FxRequest_vtbl *)v12;
                if ( m_AllocatedMdl )
                {
                  if ( v15->m_Globals->FxVerifierOn )
                    FxMdlFreeDebug(v15->m_Globals, m_AllocatedMdl);
                  else
                    IoFreeMdl(m_AllocatedMdl);
                }
                m_RequestContext = v15->m_RequestContext;
                v94 = v15->m_Irp.m_Irp;
                if ( m_RequestContext )
                {
                  if ( v94 )
                    m_RequestContext->ReleaseAndRestore(m_RequestContext, v15);
                  v143 = v15->m_RequestContext;
                  if ( v143 )
                    ((void (__fastcall *)(FxRequestContext *, __int64))v143->~FxRequestContext)(v143, 1LL);
                }
                if ( v94 && v15->m_IrpAllocation == 1 )
                  IoFreeIrp(v15->m_Irp.m_Irp);
                m_Timer = v15->m_Timer;
                if ( m_Timer )
                  FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v89);
                v15->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                {
                  m_ForwardProgressQueue = (FxVerifierLock *)v15[-1].m_ForwardProgressQueue;
                  if ( m_ForwardProgressQueue )
                  {
                    FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, (unsigned int)v89);
                    v15[-1].m_ForwardProgressQueue = 0LL;
                  }
                }
                v15->m_NPLock.m_DbgFlagIsInitialized = 0;
                FxObject::~FxObject(v15, (unsigned int)v89, (unsigned int)v10);
                if ( v15->m_ForwardRequestToParent )
                {
                  v145 = FxObject::_CleanupPointer(v15->m_Globals, v15);
                  ExFreePoolWithTag(v145->Base, 0);
                }
                else
                {
                  if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                    v96 = (FxRequest *)((char *)v15 - 32);
                  else
                    v96 = v15;
                  if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
                    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v96[-1].m_InternalContext);
                  v97 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
                  if ( v97 && *(_WORD *)(v97 + 8) == 4354 && *(_BYTE *)(v97 + 1651) )
                  {
                    m_InternalContext = (_SLIST_ENTRY *)v96[-1].m_InternalContext;
                    if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
                      v77 = v175;
                      LOBYTE(m_CanComplete) = v163;
                      goto LABEL_115;
                    }
                    (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
                  }
                  else
                  {
                    v98 = (_SLIST_ENTRY *)v96[-1].m_InternalContext;
                    ++HIDWORD(m_DeviceBase[2].m_ChildEntry.Flink);
                    if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
                    {
                      ++LODWORD(m_DeviceBase[2].m_ChildEntry.Blink);
                      (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v98);
                    }
                    else
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, v98);
                    }
                  }
                }
              }
              else
              {
                v99 = FxObject::SelfDestruct;
                if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
                {
                  v100 = v15->~FxObject;
                  if ( (char *)v100 == (char *)FxRegKey::`scalar deleting destructor' )
                  {
                    v15->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
                    m_Lock = (void *)v15->m_NPLock.m_Lock;
                    if ( m_Lock )
                    {
                      ZwClose(m_Lock);
                      v15->m_NPLock.m_Lock = 0LL;
                    }
                    v102 = *(void **)&v15->m_NPLock.m_DbgFlagIsInitialized;
                    v15->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
                    if ( v102 )
                    {
                      FxPoolFree(v102);
                      *(_QWORD *)&v15->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                    }
                    FxObject::~FxObject(v15, (unsigned int)v99, (unsigned int)v10);
                    if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                      v103 = &v15[-1].m_ForwardProgressList.Blink;
                    else
                      v103 = (_LIST_ENTRY **)v15;
                    if ( !v103 )
                      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                  }
                  else
                  {
                    if ( (char *)v100 != (char *)FxFileObject::`vector deleting destructor' )
                    {
                      if ( (char *)v100 == (char *)FxRequest::`scalar deleting destructor' )
                      {
                        v15->__vftable = (FxRequest_vtbl *)v12;
                        v113 = v15->m_AllocatedMdl;
                        if ( v113 )
                        {
                          if ( v15->m_Globals->FxVerifierOn )
                            FxMdlFreeDebug(v15->m_Globals, v15->m_AllocatedMdl);
                          else
                            IoFreeMdl(v113);
                        }
                        v114 = v15->m_RequestContext;
                        v115 = v15->m_Irp.m_Irp;
                        if ( v114 )
                        {
                          if ( v115 )
                            v114->ReleaseAndRestore(v114, v15);
                          v147 = v15->m_RequestContext;
                          if ( v147 )
                            ((void (__fastcall *)(FxRequestContext *, __int64))v147->~FxRequestContext)(v147, 1LL);
                        }
                        if ( v115 && v15->m_IrpAllocation == 1 )
                          IoFreeIrp(v15->m_Irp.m_Irp);
                        v116 = v15->m_Timer;
                        if ( v116 )
                          FxRequestTimer::`scalar deleting destructor'(v116, (unsigned int)v99);
                        v15->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                        if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                        {
                          v148 = (FxVerifierLock *)v15[-1].m_ForwardProgressQueue;
                          if ( v148 )
                          {
                            FxVerifierLock::`scalar deleting destructor'(v148, (unsigned int)v99);
                            v15[-1].m_ForwardProgressQueue = 0LL;
                          }
                        }
                        v15->m_NPLock.m_DbgFlagIsInitialized = 0;
                        FxObject::~FxObject(v15, (unsigned int)v99, (unsigned int)v10);
                        if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                          v117 = &v15[-1].m_ForwardProgressList.Blink;
                        else
                          v117 = (_LIST_ENTRY **)v15;
                        FxPoolFree(v117);
                        v77 = v175;
                        LOBYTE(m_CanComplete) = v163;
                      }
                      else
                      {
                        ((void (__fastcall *)(FxRequest *, __int64))v100)(v15, 1LL);
                        v77 = v175;
                        LOBYTE(m_CanComplete) = v163;
                      }
                      goto LABEL_115;
                    }
                    v15->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
                    v15->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                    if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                    {
                      v146 = (FxVerifierLock *)v15[-1].m_ForwardProgressQueue;
                      if ( v146 )
                      {
                        FxVerifierLock::`scalar deleting destructor'(v146, (unsigned int)FxObject::SelfDestruct);
                        v15[-1].m_ForwardProgressQueue = 0LL;
                      }
                    }
                    v15->m_NPLock.m_DbgFlagIsInitialized = 0;
                    FxObject::~FxObject(v15, (unsigned int)v99, (unsigned int)v10);
                    if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
                      v103 = &v15[-1].m_ForwardProgressList.Blink;
                    else
                      v103 = (_LIST_ENTRY **)v15;
                    if ( !v103 )
                      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                  }
                  if ( ((unsigned __int16)v103 & 0xFFF) != 0 )
                  {
                    v104 = (FX_POOL_TRACKER *)*(v103 - 2);
                    if ( LOBYTE((*(v103 - 1))[16].Blink) )
                    {
                      if ( FxIsPagedPoolType(v104->PoolType) )
                        FxPoolRemovePagedAllocateTracker(v104);
                      else
                        FxPoolRemoveNonPagedAllocateTracker(v104);
                      memset(v104, 0, v104->Size + 64);
                    }
                    ExFreePoolWithTag(v104, 0);
                    v77 = v175;
                    LOBYTE(m_CanComplete) = v163;
                    goto LABEL_115;
                  }
                  ExFreePoolWithTag(v103, 0);
                }
                else
                {
                  SelfDestruct(v15);
                }
              }
            }
            v77 = v175;
            LOBYTE(m_CanComplete) = v163;
          }
LABEL_115:
          if ( m_Reserved && v79 == 1 && v15->m_Completed )
          {
            FxIoQueue::ReturnReservedRequest(v15->m_ForwardProgressQueue, v15);
          }
          else if ( !v77 && (_BYTE)m_CanComplete && v79 == 1 && v15->m_Completed )
          {
            m_CompletionState = v15->m_CompletionState;
            m_IoQueue = v15->m_IoQueue;
            v151 = v15->m_Irp.m_Irp;
            m_PriorityBoost = v15->m_PriorityBoost;
            v15->m_CompletionState = 0;
            v15->m_IoQueue = 0LL;
            v15->m_Irp.m_Irp = 0LL;
            IofCompleteRequest(v151, m_PriorityBoost);
            FxRequest::PostProcessCompletionForDriverRequest(v153, m_CompletionState, m_IoQueue);
          }
        }
        else
        {
          v74(v15, (void *)1969583441, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        if ( pRequest )
          FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
LABEL_44:
        ++v5->m_DriverIoCount;
        v32 = v5->m_DriverOwned.Blink;
        p_m_OwnerListEntry2 = &v15->m_OwnerListEntry2;
        if ( v32->Flink != &v5->m_DriverOwned )
          __fastfail(3u);
        p_m_OwnerListEntry2->Flink = &v5->m_DriverOwned;
        v15->m_OwnerListEntry2.Blink = v32;
        v32->Flink = p_m_OwnerListEntry2;
        v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v159 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v159, flags, (unsigned __int8)v10);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        }
        FxIoQueue::DispatchRequestToDriver(v5, v15);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v160 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Lock(v160, &flags, v34);
        }
        else
        {
          flags = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
        }
        m_Globals = v168;
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        continue;
      }
    }
    break;
  }
LABEL_25:
  v15 = pRequest;
  if ( pRequest )
  {
    pRequest->m_IoQueue = v5;
    v17 = v5->m_IsDevicePowerPolicyOwner == 0;
    v5->m_TransitionFromEmpty = 1;
    v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
    if ( !v17 && v5->m_PowerManaged && !v5->m_PowerReferenced )
    {
      v18 = v5->m_DeviceBase;
      v19 = 0;
      v167 = 0;
      v20 = *(_QWORD *)(*(_QWORD *)&v18[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
      v21 = (unsigned __int64 *)(v20 + 16);
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 16));
      v23 = *(_BYTE *)(v20 + 224);
      v175 = v22;
      if ( (v23 & 0x10) != 0 )
      {
        v30 = -1073741101;
      }
      else if ( (v23 & 0x20) != 0 )
      {
        v24 = *(unsigned __int8 *)(v20 + 225);
        v19 = ++*(_DWORD *)(v20 + 24);
        v25 = *(_QWORD *)(v20 + 424);
        *(_DWORD *)(v20 + 4 * v24 + 232) = 512;
        LOBYTE(v24) = *(_BYTE *)(v20 + 225) + 1;
        v167 = v19;
        *(_BYTE *)(v20 + 225) = v24 & 7;
        v26 = *(_DWORD *)(v20 + 228) - 1;
        v27 = *((_DWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedHead.Blink + 6 * v26);
        v28 = 0LL;
        if ( v27 )
        {
          v29 = *((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedHead.Flink + 3 * v26);
          while ( *(_DWORD *)(v29 + 8 * v28) != 512 )
          {
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v27 )
              goto LABEL_38;
          }
          v154 = *(_DWORD *)(v29 + 8 * v28 + 4);
          if ( v154 != 35 )
          {
            do
            {
              ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(*(FxObject **)(v25 + 96));
              WPP_IFR_SF_qqLL(
                *(_FX_DRIVER_GLOBALS **)(v25 + 16),
                4u,
                0x15u,
                0x11u,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v156 + 144),
                v154,
                *(_DWORD *)(v20 + 228));
              *(_DWORD *)(v20 + 4LL * *(unsigned __int8 *)(v20 + 226) + 264) = v154;
              v157 = *(_BYTE *)(v20 + 226) + 1;
              *(_DWORD *)(v20 + 228) = v154;
              *(_BYTE *)(v20 + 226) = v157 & 7;
              v158 = (__int64 (__fastcall *)(__int64))*((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.OldIrql
                                                      + 3 * (int)(v154 - 1));
              if ( !v158 )
                break;
              v154 = v158(v20);
            }
            while ( v154 != 35 );
            v5 = this;
            v21 = (unsigned __int64 *)(v20 + 16);
          }
        }
LABEL_38:
        v30 = 259;
        v17 = KeReadStateEvent((PRKEVENT)(v20 + 192)) == 0;
        v22 = v175;
        if ( !v17 )
          v30 = 0;
      }
      else
      {
        v30 = -1073741101;
      }
      KeReleaseSpinLock(v21, v22);
      v31 = *(FxTagTracker **)(v20 + 32);
      if ( v31 && (!v30 || v30 == 259) )
        FxTagTracker::UpdateTagHistory(v31, 0LL, 0, 0LL, TagAddRef, v19);
      if ( v30 >= 0 )
        v5->m_PowerReferenced = 1;
    }
    pRequest = 0LL;
    goto LABEL_44;
  }
$Done_2:
  --v5->m_Dispatching;
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v161 = (FxVerifierLock *)v5[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock(v161, flags, (unsigned __int8)v10);
  else
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
  return 1;
}
