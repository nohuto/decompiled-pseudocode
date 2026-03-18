/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00059B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00096E0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C000ABA0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000F038 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000F1A0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0013D74 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001DF54 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001E9F0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001EAB0 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0022350 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035650 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C003BDB0 (imp_WdfIoQueueStart.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003F20C (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00667B4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0066A28 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0094160 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C009496C (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0094F0C (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00950C0 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0095270 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0004560 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000E714 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000EF80 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0016C94 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001CEF0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D990 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001DDD0 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qcq @ 0x1C0036680 (WPP_IFR_SF_qcq.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0038540 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003E22C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003F20C (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003FE38 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0066060 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00944E4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009466C (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009474C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D40BC (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
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
  void (__fastcall *const *v11)(); // r11
  _LIST_ENTRY *p_m_Cancelled; // rdx
  int v13; // edi
  int m_PowerState; // edx
  int m_QueueState; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v17; // rsi
  bool v19; // zf
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v21; // r15d
  __int64 v22; // rdi
  unsigned __int64 *v23; // r12
  KIRQL v24; // al
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned int v28; // edx
  __int64 v29; // rcx
  const FxPowerIdleTargetState *v30; // r8
  int v31; // r14d
  FxTagTracker *v32; // rcx
  bool v33; // sf
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  unsigned __int8 v36; // r8
  const void *_a1; // rax
  unsigned __int8 v38; // r8
  FxSystemWorkItem *v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rdi
  unsigned __int64 *v42; // r15
  _FX_DRIVER_GLOBALS *v43; // rsi
  KIRQL v44; // r12
  __int64 v45; // rax
  unsigned int v46; // r13d
  __int64 v47; // rsi
  unsigned int TargetStatesCount; // edx
  __int64 v49; // rcx
  const FxPowerIdleTargetState *TargetStates; // r8
  FxTagTracker *v51; // rcx
  FxRequest *v52; // rsi
  const void *id; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rdi
  _FX_DRIVER_GLOBALS *v55; // r15
  unsigned __int8 v56; // r14
  unsigned __int8 v57; // r8
  _FX_DRIVER_GLOBALS *v58; // rdx
  FxIrpQueue *v59; // rdi
  unsigned __int8 v60; // r14
  signed __int32 v61; // edx
  FxRequest *v62; // rsi
  unsigned int v63; // edx
  _IRP *v64; // r9
  $4F60D2EEAF443BADC51864A01D9AEC36 *v65; // r10
  _LIST_ENTRY *v66; // rcx
  _LIST_ENTRY *v67; // rax
  int v68; // r15d
  FxIrpQueue *p_m_Queue; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY **p_Flink; // rdx
  _QWORD *v74; // rsi
  __int64 v75; // rax
  __int64 (__fastcall *v76)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  unsigned __int8 m_IrpAllocation; // cl
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  char m_ObjectFlags; // al
  signed __int32 v80; // edi
  unsigned __int16 v81; // cx
  FxTagTracker *v82; // r12
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v84; // r14
  void (__fastcall *v85)(unsigned __int64); // rax
  void (__fastcall *v86)(unsigned __int64); // rax
  unsigned __int16 v87; // ax
  _QWORD *v88; // rcx
  _QWORD *v89; // r14
  void (__fastcall *v90)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *v93; // r13
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v95; // r14
  FxRequestTimer *m_Timer; // rcx
  char v97; // al
  FxRequest *v98; // r15
  __int64 v99; // rax
  _SLIST_ENTRY *v100; // r15
  void (__fastcall *v101)(FxObject *, unsigned int); // rdx
  FxRequest *(__fastcall *v102)(FxRequest *, char); // rax
  void *m_Lock; // rcx
  void *v104; // rcx
  _LIST_ENTRY **v105; // rax
  FX_POOL_TRACKER *v106; // r14
  unsigned __int8 v107; // al
  _MDL *v108; // rcx
  FxRequestContext *v109; // rcx
  _IRP *v110; // r14
  FxRequestTimer *v111; // rcx
  char v112; // al
  _LIST_ENTRY **v113; // rcx
  _SLIST_ENTRY *m_InternalContext; // r14
  unsigned int PowerIdleState; // edi
  __int64 v116; // rcx
  const void *v117; // rdx
  const void *v118; // rcx
  char v119; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v121; // rcx
  FxVerifierLock *v122; // rcx
  FxVerifierLock *v123; // rcx
  const void *v124; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int inserted; // eax
  int v127; // eax
  unsigned __int8 v128; // al
  __int64 v129; // r8
  const void *v130; // rdx
  __int16 v131; // cx
  const void *v132; // r8
  unsigned int v133; // edx
  const void *v134; // rcx
  int v135; // eax
  unsigned __int8 v136; // dl
  const void *v137; // rcx
  int v138; // eax
  _LIST_ENTRY *v139; // rcx
  __int64 v140; // r9
  __int64 v141; // r10
  int v142; // eax
  FxTagTracker *v143; // rcx
  FxRequestContext *v144; // rcx
  FxVerifierLock *v145; // rcx
  _SINGLE_LIST_ENTRY *v146; // rax
  void (__fastcall *v147)(_SLIST_ENTRY *); // rax
  FxRequestContext *v148; // rcx
  FxVerifierLock *v149; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // r14
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v154; // rdx
  unsigned int v155; // r14d
  const void *ObjectHandleUnchecked; // rax
  __int64 v157; // rdx
  char v158; // al
  FxPowerIdleStates (__fastcall *v159)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v160; // rcx
  FxVerifierLock *v161; // rcx
  FxVerifierLock *v162; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  unsigned __int8 v164; // [rsp+58h] [rbp-29h]
  unsigned __int8 v165[7]; // [rsp+59h] [rbp-28h] BYREF
  unsigned __int8 v166[8]; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int8 m_Reserved; // [rsp+68h] [rbp-19h]
  _FX_DRIVER_GLOBALS *v168; // [rsp+70h] [rbp-11h]
  unsigned int v169; // [rsp+78h] [rbp-9h]
  FxIrp Irp; // [rsp+80h] [rbp-1h] BYREF
  _QWORD *v171; // [rsp+88h] [rbp+7h]
  ULONG_PTR retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned __int8 flags; // [rsp+F0h] [rbp+6Fh] BYREF
  FxRequest *pRequest; // [rsp+F8h] [rbp+77h] BYREF
  KIRQL v176; // [rsp+100h] [rbp+7Fh]

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
      goto LABEL_82;
    m_SystemWorkItem = v5->m_SystemWorkItem;
    v5->m_WorkItemQueued = 1;
    v55 = m_SystemWorkItem->m_Globals;
    if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
      && (v121 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
    {
      FxVerifierLock::Lock(v121, v165, v38);
      v56 = v165[0];
    }
    else
    {
      v56 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
      v165[0] = v56;
    }
    if ( m_SystemWorkItem->m_Enqueued )
    {
      WPP_IFR_SF_qq(
        v55,
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
          && (v122 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
        {
          FxVerifierLock::Unlock(v122, v165[0], v57);
        }
        else
        {
          KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v165[0]);
        }
        IoQueueWorkItem(
          m_SystemWorkItem->m_WorkItem.m_WorkItem,
          FxSystemWorkItem::_WorkItemThunk,
          DelayedWorkQueue,
          m_SystemWorkItem);
        v7 = flags;
LABEL_82:
        v19 = pRequest == 0LL;
        v5->m_RequeueDeferredDispatcher = 1;
        if ( !v19 )
          FxIoQueue::InsertNewRequestLocked(v5, &pRequest, v7);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v123 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v123, v7, v38);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v7);
        }
        return 1;
      }
      WPP_IFR_SF_q(v55, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
    }
    FxVerifierDbgBreakPoint(v55);
    FxNonPagedObject::Unlock(m_SystemWorkItem, v56);
    v5->m_WorkItemQueued = 0;
    goto LABEL_82;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr )
  {
    IsOwner = (unsigned __int8 (*)(void))m_CallbackLockPtr->IsOwner;
    if ( (char *)IsOwner == (char *)FxCallbackMutexLock::IsOwner )
    {
      if ( m_CallbackLockPtr->m_OwnerThread != KeGetCurrentThread() )
        goto LABEL_6;
    }
    else
    {
      if ( (char *)IsOwner != (char *)FxCallbackSpinLock::IsOwner )
      {
        if ( !IsOwner() )
          goto LABEL_6;
LABEL_53:
        if ( v5->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_q(v5->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, _a1);
        if ( v5->m_PassiveLevel )
        {
          if ( !v5->m_WorkItemQueued )
          {
            v39 = v5->m_SystemWorkItem;
            v5->m_WorkItemQueued = 1;
            if ( !FxSystemWorkItem::EnqueueWorker(v39, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
              v5->m_WorkItemQueued = 0;
          }
        }
        else if ( !v5->m_DpcQueued )
        {
          v5->m_DpcQueued = 1;
          KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
        }
        goto LABEL_82;
      }
      if ( m_CallbackLockPtr->m_OwnerThread != KeGetCurrentThread() )
        goto LABEL_6;
    }
    v7 = flags;
    goto LABEL_53;
  }
LABEL_6:
  ++v5->m_Dispatching;
  v10 = WPP_FxIoQueue_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    v124 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    CurrentThread = KeGetCurrentThread();
    if ( !v5->m_ObjectSize )
      v124 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v124);
    v10 = WPP_FxIoQueue_cpp_Traceguids;
  }
LABEL_7:
  while ( 2 )
  {
    v11 = FxRegKey::`vftable';
    p_m_Cancelled = &v5->m_Cancelled;
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
              v11 = FxRegKey::`vftable';
              if ( inserted < 0 )
                continue;
            }
            v107 = FxIoQueue::ProcessCancelledRequests(v5, &flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            v11 = FxRegKey::`vftable';
            if ( !v107 )
              break;
          }
          if ( v5->m_CanceledOnQueueList.Flink == &v5->m_CanceledOnQueueList )
            break;
          if ( pRequest )
          {
            v127 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            v11 = FxRegKey::`vftable';
            if ( v127 < 0 )
              continue;
          }
          v128 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v11 = FxRegKey::`vftable';
          if ( !v128 )
            break;
        }
        if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessIdleComplete(v5, &flags);
          goto LABEL_49;
        }
        if ( v5->m_PurgeComplete.Method && !v13 && v5->m_Dispatching == 1 )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessPurgeComplete(v5, &flags);
          goto LABEL_49;
        }
        if ( v5->m_IsDevicePowerPolicyOwner
          && v5->m_PowerManaged
          && v5->m_PowerReferenced
          && !v13
          && v5->m_Dispatching == 1 )
        {
          v40 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
          v41 = *(_QWORD *)(v40 + 424);
          v42 = (unsigned __int64 *)(v40 + 16);
          v43 = *(_FX_DRIVER_GLOBALS **)(v41 + 16);
          v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 16));
          if ( !*(_DWORD *)(v40 + 24) )
          {
            v129 = *(_QWORD *)(v41 + 96);
            v130 = *(const void **)(v129 + 144);
            v131 = *(_WORD *)(v129 + 10);
            v132 = (const void *)(v129 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v131 )
              v132 = 0LL;
            WPP_IFR_SF_qq(v43, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v132, v130);
            if ( v43->FxVerifierOn
              && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v43, v133, 0xBu) || v43->FxVerifyDownlevel) )
            {
              FxVerifierDbgBreakPoint(v43);
            }
          }
          v45 = *(unsigned __int8 *)(v40 + 225);
          v46 = --*(_DWORD *)(v40 + 24);
          v47 = *(_QWORD *)(v40 + 424);
          *(_DWORD *)(v40 + 4 * v45 + 232) = 256;
          *(_BYTE *)(v40 + 225) = (*(_BYTE *)(v40 + 225) + 1) & 7;
          TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v40 + 228) - 1].TargetStatesCount;
          v49 = 0LL;
          if ( TargetStatesCount )
          {
            TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v40 + 228) - 1].TargetStates;
            while ( TargetStates[v49].PowerIdleEvent != PowerIdleEventIoDecrement )
            {
              v49 = (unsigned int)(v49 + 1);
              if ( (unsigned int)v49 >= TargetStatesCount )
                goto LABEL_65;
            }
            PowerIdleState = TargetStates[v49].PowerIdleState;
            if ( PowerIdleState != 35 )
            {
              do
              {
                v116 = *(_QWORD *)(v47 + 96);
                v117 = *(const void **)(v116 + 144);
                if ( *(_WORD *)(v116 + 10) )
                  v118 = (const void *)(v116 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v118 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v47 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v118,
                  v117,
                  PowerIdleState,
                  *(_DWORD *)(v40 + 228));
                *(_DWORD *)(v40 + 4LL * *(unsigned __int8 *)(v40 + 226) + 264) = PowerIdleState;
                v119 = *(_BYTE *)(v40 + 226) + 1;
                *(_DWORD *)(v40 + 228) = PowerIdleState;
                *(_BYTE *)(v40 + 226) = v119 & 7;
                StateFunc = FxPowerIdleMachine::m_StateTable[PowerIdleState - 1].StateFunc;
                if ( !StateFunc )
                  break;
                PowerIdleState = StateFunc((FxPowerIdleMachine *)v40);
              }
              while ( PowerIdleState != 35 );
              v5 = this;
              v42 = (unsigned __int64 *)(v40 + 16);
            }
          }
LABEL_65:
          KeReleaseSpinLock(v42, v44);
          v51 = *(FxTagTracker **)(v40 + 32);
          if ( v51 )
            FxTagTracker::UpdateTagHistory(v51, 0LL, 0, 0LL, TagRelease, v46);
          m_Globals = v168;
          v5->m_PowerReferenced = 0;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          goto LABEL_7;
        }
        m_PowerState = v5->m_PowerState;
        if ( (unsigned int)(m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          v134 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v134 = 0LL;
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v134, m_PowerState);
        }
        if ( pRequest )
        {
          v135 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v11 = FxRegKey::`vftable';
          if ( v135 < 0 )
            continue;
        }
        if ( FxIoQueue::ProcessPowerEvents(v5, &flags) )
          goto LABEL_49;
        goto $Done_3;
      }
      if ( v5->m_Disposing && !v13 && v5->m_Dispatching == 1 )
      {
        v136 = flags;
        v5->m_Deleted = 1;
        FxNonPagedObject::Unlock(v5, v136);
        KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v5->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_87;
      m_QueueState = v5->m_QueueState;
      if ( (m_QueueState & 2) == 0 )
        break;
      m_Type = v5->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
      {
        if ( m_Type == WdfIoQueueDispatchSequential && v5->m_DriverIoCount > 0
          || v5->m_Type == WdfIoQueueDispatchParallel && v5->m_DriverIoCount >= v5->m_MaxParallelQueuePresentedRequests )
        {
          goto LABEL_87;
        }
        if ( v5->m_Queue.m_RequestCount <= 0 )
          goto LABEL_25;
        p_m_Queue = &v5->m_Queue;
        p_Blink = 0LL;
        Flink = v5->m_Queue.m_Queue.Flink;
        if ( Flink != (_LIST_ENTRY *)&v5->m_Queue )
          p_Blink = (_IRP *)&Flink[-11].Blink;
        if ( !p_Blink )
        {
LABEL_25:
          v17 = pRequest;
          if ( !pRequest )
            goto $Done_3;
          pRequest->m_IoQueue = v5;
          v19 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v19 && v5->m_PowerManaged && !v5->m_PowerReferenced )
          {
            m_DeviceBase = v5->m_DeviceBase;
            v21 = 0;
            v169 = 0;
            v22 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
            v23 = (unsigned __int64 *)(v22 + 16);
            v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 16));
            v25 = *(_BYTE *)(v22 + 224);
            v176 = v24;
            if ( (v25 & 0x10) != 0 )
            {
              v31 = -1073741101;
            }
            else if ( (v25 & 0x20) != 0 )
            {
              v26 = *(unsigned __int8 *)(v22 + 225);
              v21 = ++*(_DWORD *)(v22 + 24);
              v27 = *(_QWORD *)(v22 + 424);
              *(_DWORD *)(v22 + 4 * v26 + 232) = 512;
              LOBYTE(v26) = *(_BYTE *)(v22 + 225) + 1;
              v169 = v21;
              *(_BYTE *)(v22 + 225) = v26 & 7;
              v28 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v22 + 228) - 1].TargetStatesCount;
              v29 = 0LL;
              if ( v28 )
              {
                v30 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v22 + 228) - 1].TargetStates;
                while ( v30[v29].PowerIdleEvent != PowerIdleEventIoIncrement )
                {
                  v29 = (unsigned int)(v29 + 1);
                  if ( (unsigned int)v29 >= v28 )
                    goto LABEL_38;
                }
                v155 = v30[v29].PowerIdleState;
                if ( v155 != 35 )
                {
                  do
                  {
                    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(*(FxObject **)(v27 + 96));
                    WPP_IFR_SF_qqLL(
                      *(_FX_DRIVER_GLOBALS **)(v27 + 16),
                      4u,
                      0x15u,
                      0x11u,
                      WPP_PowerIdleStateMachine_cpp_Traceguids,
                      ObjectHandleUnchecked,
                      *(const void **)(v157 + 144),
                      v155,
                      *(_DWORD *)(v22 + 228));
                    *(_DWORD *)(v22 + 4LL * *(unsigned __int8 *)(v22 + 226) + 264) = v155;
                    v158 = *(_BYTE *)(v22 + 226) + 1;
                    *(_DWORD *)(v22 + 228) = v155;
                    *(_BYTE *)(v22 + 226) = v158 & 7;
                    v159 = FxPowerIdleMachine::m_StateTable[v155 - 1].StateFunc;
                    if ( !v159 )
                      break;
                    v155 = v159((FxPowerIdleMachine *)v22);
                  }
                  while ( v155 != 35 );
                  v5 = this;
                  v23 = (unsigned __int64 *)(v22 + 16);
                }
              }
LABEL_38:
              v31 = 259;
              v19 = KeReadStateEvent((PRKEVENT)(v22 + 192)) == 0;
              v24 = v176;
              if ( !v19 )
                v31 = 0;
            }
            else
            {
              v31 = -1073741101;
            }
            KeReleaseSpinLock(v23, v24);
            v32 = *(FxTagTracker **)(v22 + 32);
            if ( v32 && (!v31 || v31 == 259) )
              FxTagTracker::UpdateTagHistory(v32, 0LL, 0, 0LL, TagAddRef, v21);
            v33 = v31 < 0;
            m_Globals = v168;
            if ( !v33 )
              v5->m_PowerReferenced = 1;
          }
          pRequest = 0LL;
LABEL_44:
          ++v5->m_DriverIoCount;
          Blink = v5->m_DriverOwned.Blink;
          p_m_OwnerListEntry2 = &v17->m_OwnerListEntry2;
          if ( Blink->Flink != &v5->m_DriverOwned )
            __fastfail(3u);
          p_m_OwnerListEntry2->Flink = &v5->m_DriverOwned;
          v17->m_OwnerListEntry2.Blink = Blink;
          Blink->Flink = p_m_OwnerListEntry2;
          v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
          if ( SLOBYTE(v5->m_ObjectFlags) < 0
            && (v160 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v160, flags, (unsigned __int8)v10);
          }
          else
          {
            KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
          }
          FxIoQueue::DispatchRequestToDriver(v5, v17);
          if ( SLOBYTE(v5->m_ObjectFlags) < 0
            && (v161 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v161, &flags, v36);
          }
          else
          {
            flags = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
          }
          goto LABEL_49;
        }
        while ( !_InterlockedExchange64((volatile __int64 *)&p_Blink->CancelRoutine, 0LL) )
        {
          p_Blink = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, p_Blink, 0LL);
          if ( !p_Blink )
            goto LABEL_25;
        }
        p_ListEntry = &p_Blink->Tail.Overlay.ListEntry;
        v10 = (const _GUID *)p_Blink->Tail.Overlay.ListEntry.Flink;
        p_Flink = &p_Blink->Tail.Overlay.ListEntry.Blink->Flink;
        if ( *(_IRP **)v10->Data4 != (_IRP *)(&p_Blink->Tail.CompletionKey + 6) || *p_Flink != p_ListEntry )
          __fastfail(3u);
        *p_Flink = (_LIST_ENTRY *)v10;
        *(_QWORD *)v10->Data4 = p_Flink;
        p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        --p_m_Queue->m_RequestCount;
        v74 = p_Blink->Tail.Overlay.DriverContext[3];
        if ( *(_DWORD *)v74 == 1 )
          v74[1] = 0LL;
        p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
        v75 = *(v74 - 15);
        v171 = v74;
        v17 = (FxRequest *)(v74 - 15);
        v76 = *(__int64 (__fastcall **)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))(v75 + 16);
        v17->m_IrpQueue = 0LL;
        if ( v76 != FxRequest::Release )
        {
          v76(
            v17,
            (FxObjectDebugLeakDetection *)1969583441,
            2062LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_117:
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          goto LABEL_44;
        }
        m_IrpAllocation = v17->m_IrpAllocation;
        LODWORD(FxVerifyLeakDetection) = v17->m_CanComplete;
        m_Reserved = v17->m_Reserved;
        m_ObjectFlags = v17->m_ObjectFlags;
        v176 = m_IrpAllocation;
        v164 = (unsigned __int8)FxVerifyLeakDetection;
        if ( m_ObjectFlags < 0 )
        {
          v143 = (FxTagTracker *)v17[-1].m_OwnerListEntry2.Blink;
          if ( v143 )
          {
            FxTagTracker::UpdateTagHistory(
              v143,
              (void *)0x75657551,
              2062,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagRelease,
              v17->m_Refcnt - 1);
            LODWORD(FxVerifyLeakDetection) = v164;
            v11 = FxRegKey::`vftable';
          }
          m_IrpAllocation = v176;
        }
        v80 = _InterlockedDecrement(&v17->m_Refcnt);
        if ( v80 )
        {
LABEL_114:
          if ( m_Reserved && v80 == 1 && v17->m_Completed )
          {
            FxIoQueue::ReturnReservedRequest(v17->m_ForwardProgressQueue, v17);
          }
          else if ( m_IrpAllocation )
          {
            if ( (_BYTE)FxVerifyLeakDetection )
            {
              if ( v80 == 1 )
              {
                if ( v17->m_Completed )
                {
                  m_CompletionState = v17->m_CompletionState;
                  m_IoQueue = v17->m_IoQueue;
                  m_Irp = v17->m_Irp.m_Irp;
                  m_PriorityBoost = v17->m_PriorityBoost;
                  v17->m_CompletionState = 0;
                  v17->m_IoQueue = 0LL;
                  v17->m_Irp.m_Irp = 0LL;
                  IofCompleteRequest(m_Irp, m_PriorityBoost);
                  if ( m_CompletionState == 1 )
                    FxIoQueue::PostRequestCompletedCallback(m_IoQueue, v154);
                }
              }
            }
          }
          m_Globals = v168;
          goto LABEL_117;
        }
        v81 = v17->m_ObjectFlags;
        if ( (v81 & 0x20) != 0 || (v81 & 0x10) != 0 && KeGetCurrentIrql() )
        {
          FxObject::SetObjectStateLocked(v17, FxObjectStateDeferedDestroy);
          FxDisposeList::Add(v17->m_Globals->Driver->m_DisposeList, v17);
        }
        else
        {
          if ( (v81 & 0x80u) != 0 )
          {
            v82 = (FxTagTracker *)v17[-1].m_OwnerListEntry2.Blink;
            if ( v82 )
            {
              FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v17[-1].m_OwnerListEntry2.Blink);
              v11 = FxRegKey::`vftable';
            }
          }
          else
          {
            v82 = 0LL;
          }
          m_ObjectSize = v17->m_ObjectSize;
          if ( m_ObjectSize && (v17->m_ObjectFlags & 8) != 0 )
          {
            v84 = (FxRequest_vtbl **)((char *)&v17->__vftable + m_ObjectSize);
            if ( v84 )
            {
              do
              {
                v85 = (void (__fastcall *)(unsigned __int64))v84[2];
                if ( v85 )
                {
                  v85((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  v84[2] = 0LL;
                }
                v86 = (void (__fastcall *)(unsigned __int64))v84[3];
                if ( v86 )
                {
                  v86((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  v84[3] = 0LL;
                }
                v84 = (_QWORD *)v84[1];
              }
              while ( v84 );
              v11 = FxRegKey::`vftable';
            }
            v87 = v17->m_ObjectSize;
            LOBYTE(FxVerifyLeakDetection) = 1;
            if ( v87 )
            {
              v88 = (FxRequest_vtbl **)((char *)&v17->__vftable + v87);
              if ( v88 )
              {
                do
                {
                  v89 = (_QWORD *)v88[1];
                  if ( !(_BYTE)FxVerifyLeakDetection )
                    FxPoolFree(v88);
                  LOBYTE(FxVerifyLeakDetection) = 0;
                  v88 = v89;
                }
                while ( v89 );
                v11 = FxRegKey::`vftable';
              }
            }
          }
          if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
          {
            if ( BYTE4(v17[-1].m_ForwardProgressQueue) )
            {
              _InterlockedDecrement(&v17->m_Globals->FxVerifyLeakDetection->ObjectCnt);
              if ( v17->m_Type == 4098
                && _InterlockedExchangeAdd(&v17->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
              {
                FxVerifyLeakDetection = v17->m_Globals->FxVerifyLeakDetection;
                _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
              }
            }
          }
          if ( v82 )
          {
            v17[-1].m_OwnerListEntry2.Blink = 0LL;
            FxTagTracker::`scalar deleting destructor'(v82, (unsigned int)FxVerifyLeakDetection);
            v11 = FxRegKey::`vftable';
          }
          v90 = FxRequestFromLookaside::SelfDestruct;
          SelfDestruct = v17->SelfDestruct;
          if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
          {
            m_AllocatedMdl = v17->m_AllocatedMdl;
            v93 = v17->m_DeviceBase;
            v17->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
            if ( m_AllocatedMdl )
            {
              if ( v17->m_Globals->FxVerifierOn )
                FxMdlFreeDebug(v17->m_Globals, m_AllocatedMdl);
              else
                IoFreeMdl(m_AllocatedMdl);
            }
            m_RequestContext = v17->m_RequestContext;
            v95 = v17->m_Irp.m_Irp;
            if ( m_RequestContext )
            {
              if ( v95 )
                m_RequestContext->ReleaseAndRestore(m_RequestContext, v17);
              v144 = v17->m_RequestContext;
              if ( v144 )
                ((void (__fastcall *)(FxRequestContext *, __int64))v144->~FxRequestContext)(v144, 1LL);
            }
            if ( v95 && v17->m_IrpAllocation == 1 )
              IoFreeIrp(v17->m_Irp.m_Irp);
            m_Timer = v17->m_Timer;
            if ( m_Timer )
              FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v90);
            v97 = v17->m_ObjectFlags;
            v17->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
            if ( v97 < 0 )
            {
              v145 = (FxVerifierLock *)v17[-1].m_ForwardProgressList.Flink;
              if ( v145 )
              {
                FxVerifierLock::`scalar deleting destructor'(v145, (unsigned int)v90);
                v17[-1].m_ForwardProgressList.Flink = 0LL;
              }
            }
            v17->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(v17, (unsigned int)v90, (unsigned int)v10);
            if ( v17->m_ForwardRequestToParent )
            {
              v146 = FxObject::_CleanupPointer(v17->m_Globals, v17);
              ExFreePoolWithTag(v146->Next, 0);
            }
            else
            {
              if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                v98 = (FxRequest *)((char *)v17 - 48);
              else
                v98 = v17;
              if ( v93->m_Globals->FxPoolTrackingOn )
                FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v98[-1].m_InternalContext);
              v99 = *(_QWORD *)&v93[3].m_SpinLock.m_DbgFlagIsInitialized;
              if ( v99 && *(_WORD *)(v99 + 8) == 4354 && *(_BYTE *)(v99 + 1667) )
              {
                m_InternalContext = (_SLIST_ENTRY *)v98[-1].m_InternalContext;
                if ( ExQueryDepthSList((PSLIST_HEADER)&v93[2].m_SpinLock) < LOWORD(v93[2].m_ParentObject) )
                {
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v93[2].m_SpinLock, m_InternalContext);
                  m_IrpAllocation = v176;
                  LOBYTE(FxVerifyLeakDetection) = v164;
                  goto LABEL_114;
                }
                (*(void (__fastcall **)(_SLIST_ENTRY *))&v93[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
              }
              else
              {
                v100 = (_SLIST_ENTRY *)v98[-1].m_InternalContext;
                ++HIDWORD(v93[2].m_ChildEntry.Flink);
                if ( ExQueryDepthSList((PSLIST_HEADER)&v93[2].m_SpinLock) >= LOWORD(v93[2].m_ParentObject) )
                {
                  v147 = *(void (__fastcall **)(_SLIST_ENTRY *))&v93[2].m_NPLock.m_DbgFlagIsInitialized;
                  ++LODWORD(v93[2].m_ChildEntry.Blink);
                  v147(v100);
                }
                else
                {
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v93[2].m_SpinLock, v100);
                }
              }
            }
          }
          else
          {
            v101 = FxObject::SelfDestruct;
            if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
            {
              v102 = (FxRequest *(__fastcall *)(FxRequest *, char))v17->~FxObject;
              if ( (char *)v102 == (char *)FxRegKey::`scalar deleting destructor' )
              {
                v17->__vftable = (FxRequest_vtbl *)v11;
                m_Lock = (void *)v17->m_NPLock.m_Lock;
                if ( m_Lock )
                {
                  ZwClose(m_Lock);
                  v17->m_NPLock.m_Lock = 0LL;
                }
                v104 = *(void **)&v17->m_NPLock.m_DbgFlagIsInitialized;
                v17->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
                if ( v104 )
                {
                  FxPoolFree(v104);
                  *(_QWORD *)&v17->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                }
                FxObject::~FxObject(v17, (unsigned int)v101, (unsigned int)v10);
                if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                  v105 = &v17[-1].m_OwnerListEntry2.Blink;
                else
                  v105 = (_LIST_ENTRY **)v17;
                if ( !v105 )
                  KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
              }
              else
              {
                if ( v102 == FxRequest::`scalar deleting destructor' )
                {
                  v17->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
                  v108 = v17->m_AllocatedMdl;
                  if ( v108 )
                  {
                    if ( v17->m_Globals->FxVerifierOn )
                      FxMdlFreeDebug(v17->m_Globals, v17->m_AllocatedMdl);
                    else
                      IoFreeMdl(v108);
                  }
                  v109 = v17->m_RequestContext;
                  v110 = v17->m_Irp.m_Irp;
                  if ( v109 )
                  {
                    if ( v110 )
                      v109->ReleaseAndRestore(v109, v17);
                    v148 = v17->m_RequestContext;
                    if ( v148 )
                      ((void (__fastcall *)(FxRequestContext *, __int64))v148->~FxRequestContext)(v148, 1LL);
                  }
                  if ( v110 && v17->m_IrpAllocation == 1 )
                    IoFreeIrp(v17->m_Irp.m_Irp);
                  v111 = v17->m_Timer;
                  if ( v111 )
                    FxRequestTimer::`scalar deleting destructor'(v111, (unsigned int)v101);
                  v112 = v17->m_ObjectFlags;
                  v17->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
                  if ( v112 < 0 )
                  {
                    v149 = (FxVerifierLock *)v17[-1].m_ForwardProgressList.Flink;
                    if ( v149 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v149, (unsigned int)v101);
                      v17[-1].m_ForwardProgressList.Flink = 0LL;
                    }
                  }
                  v17->m_NPLock.m_DbgFlagIsInitialized = 0;
                  FxObject::~FxObject(v17, (unsigned int)v101, (unsigned int)v10);
                  if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                    v113 = &v17[-1].m_OwnerListEntry2.Blink;
                  else
                    v113 = (_LIST_ENTRY **)v17;
                  FxPoolFree(v113);
                  m_IrpAllocation = v176;
                  LOBYTE(FxVerifyLeakDetection) = v164;
                  goto LABEL_114;
                }
                if ( (char *)v102 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
                {
                  v102(v17, 1);
                  m_IrpAllocation = v176;
                  LOBYTE(FxVerifyLeakDetection) = v164;
                  goto LABEL_114;
                }
                v17->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
                *(_QWORD *)&v17->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                FxObject::~FxObject(v17, (unsigned int)FxObject::SelfDestruct, (unsigned int)v10);
                if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                  v105 = &v17[-1].m_OwnerListEntry2.Blink;
                else
                  v105 = (_LIST_ENTRY **)v17;
                if ( !v105 )
                  KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
              }
              if ( ((unsigned __int16)v105 & 0xFFF) != 0 )
              {
                v106 = (FX_POOL_TRACKER *)*(v105 - 2);
                if ( LOBYTE((*(v105 - 1))[16].Blink) )
                {
                  if ( FxIsPagedPoolType(v106->PoolType) )
                    FxPoolRemovePagedAllocateTracker(v106);
                  else
                    FxPoolRemoveNonPagedAllocateTracker(v106);
                  memset(v106, 0, v106->Size + 64);
                }
                ExFreePoolWithTag(v106, 0);
                m_IrpAllocation = v176;
                LOBYTE(FxVerifyLeakDetection) = v164;
                goto LABEL_114;
              }
              ExFreePoolWithTag(v105, 0);
            }
            else
            {
              SelfDestruct(v17);
            }
          }
        }
        m_IrpAllocation = v176;
        LOBYTE(FxVerifyLeakDetection) = v164;
        goto LABEL_114;
      }
      v52 = pRequest;
      if ( !pRequest )
        goto LABEL_69;
      v58 = pRequest->m_Globals;
      v59 = &v5->m_Queue;
      v60 = flags;
      v166[0] = flags;
      if ( !v58->FxVerifierOn
        || (v138 = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v58, &v5->m_Queue),
            v10 = WPP_FxIoQueue_cpp_Traceguids,
            v68 = v138,
            v11 = FxRegKey::`vftable',
            v138 >= 0) )
      {
        v61 = _InterlockedExchangeAdd(&v52->m_Refcnt, 1u);
        v62 = pRequest;
        v63 = v61 + 1;
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          v139 = pRequest[-1].m_OwnerListEntry2.Blink;
          if ( v139 )
          {
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v139,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v63);
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            v11 = FxRegKey::`vftable';
          }
        }
        v64 = v62->m_Irp.m_Irp;
        v65 = &v62->120;
        v62->m_IrpQueue = v59;
        Irp.m_Irp = v64;
        if ( v62 == (FxRequest *)-120LL )
        {
          v64->Tail.Overlay.DriverContext[3] = v59;
        }
        else
        {
          v64->Tail.Overlay.DriverContext[3] = v65;
          v62->m_CsqContext.Irp = v64;
          v62->m_CsqContext.Csq = (_IO_CSQ *)v59;
          v65->m_CsqContext.Type = 1;
        }
        v66 = v5->m_Queue.m_Queue.Blink;
        v67 = &v64->Tail.Overlay.ListEntry;
        if ( (FxIrpQueue *)v66->Flink != v59 )
          __fastfail(3u);
        v67->Flink = &v59->m_Queue;
        v64->Tail.Overlay.ListEntry.Blink = v66;
        v66->Flink = v67;
        v5->m_Queue.m_Queue.Blink = v67;
        ++v5->m_Queue.m_RequestCount;
        v64->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64((volatile __int64 *)&v64->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( v64->Cancel && _InterlockedExchange64((volatile __int64 *)&v64->CancelRoutine, 0LL) )
        {
          FxIrpQueue::RemoveIrpFromListEntry(&v5->m_Queue, &Irp);
          if ( v141 )
            *(_QWORD *)(v141 + 8) = 0LL;
          *(_QWORD *)(v140 + 144) = 0LL;
          v62->m_IrpQueue = 0LL;
          v52 = pRequest;
          v68 = -1073741536;
          pRequest->Release(
            pRequest,
            (void *)1969583441,
            1916,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v11 = FxRegKey::`vftable';
        }
        else
        {
          v52 = pRequest;
          v68 = 0;
        }
        v60 = flags;
      }
      if ( v68 < 0 )
      {
        FxNonPagedObject::Unlock(v5, v60);
        v52->m_Irp.m_Irp->IoStatus.Information = 0LL;
        FxRequest::Complete(v52, v68);
        v52->Release(v52, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v5, v166);
      }
      else
      {
        v52->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount != 1 && !v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          goto LABEL_101;
        v19 = v5->m_IsDevicePowerPolicyOwner == 0;
        v5->m_TransitionFromEmpty = 1;
        v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
        if ( v19 || !v5->m_PowerManaged || v5->m_PowerReferenced )
          goto LABEL_101;
        if ( (int)FxPowerIdleMachine::PowerReferenceWorker(
                    *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
                    0,
                    FxPowerReferenceDefault,
                    0LL,
                    0,
                    0LL) >= 0 )
          v5->m_PowerReferenced = 1;
      }
      v10 = WPP_FxIoQueue_cpp_Traceguids;
      v11 = FxRegKey::`vftable';
LABEL_101:
      m_Globals = v168;
      p_m_Cancelled = &v5->m_Cancelled;
      pRequest = 0LL;
      if ( v68 >= 0 )
      {
LABEL_69:
        if ( v5->m_ReadyNotify.Method && v5->m_TransitionFromEmpty )
        {
          FxIoQueue::ProcessReadyNotify(v5, &flags);
          goto LABEL_49;
        }
        goto $Done_3;
      }
    }
    v137 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5->m_ObjectSize )
      v137 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v137, m_QueueState);
LABEL_87:
    if ( pRequest )
    {
      v142 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
      if ( v142 < 0 )
      {
LABEL_49:
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        continue;
      }
    }
    break;
  }
$Done_3:
  --v5->m_Dispatching;
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v162 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v162, flags, (unsigned __int8)v10);
  else
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
  return 1;
}
