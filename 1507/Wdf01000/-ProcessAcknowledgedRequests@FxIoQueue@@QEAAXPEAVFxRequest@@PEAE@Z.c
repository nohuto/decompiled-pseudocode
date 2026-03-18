/*
 * XREFs of ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000721C
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000B888 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00074C4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0007544 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qqs @ 0x1C0097C98 (WPP_IFR_SF_qqs.c)
 */

void __fastcall FxIoQueue::ProcessAcknowledgedRequests(
        FxIoQueue *this,
        FxRequest *Request,
        unsigned __int8 *PreviousIrql,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  bool v7; // r15
  _LIST_ENTRY *p_m_OwnerListEntry2; // rsi
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned int v13; // ecx
  _LIST_ENTRY *v14; // rax
  unsigned __int8 v15; // r8
  unsigned int *v16; // r8
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v18; // rax
  const char *id; // rdx
  const void *flags; // rcx
  const void *level; // rax
  unsigned int v22; // ecx
  FxTagTracker *v23; // rax
  _LIST_ENTRY *v24; // rcx
  unsigned __int8 v25; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 v27; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *v29; // rcx
  unsigned int v30; // edx
  _LIST_ENTRY *v31; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-48h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  KIRQL v34; // [rsp+78h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  v7 = Request->m_PowerStopState == 2;
  if ( m_Globals->FxVerboseOn )
  {
    id = "with";
    if ( !v7 )
      id = "without";
    if ( this->m_ObjectSize )
      flags = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      flags = 0LL;
    if ( Request->m_ObjectSize )
      level = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      level = 0LL;
    WPP_IFR_SF_qqs(m_Globals, (unsigned __int8)id, (unsigned int)PreviousIrql, a4, RefType, level, flags, id);
  }
  Request->m_PowerStopState = 0;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Flink = &Request->m_OwnerListEntry2;
  Blink = this->m_DriverOwned.Blink;
  Request->m_OwnerListEntry2.Flink = &this->m_DriverOwned;
  Request->m_OwnerListEntry2.Blink = Blink;
  if ( Blink->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  Blink->Flink = p_m_OwnerListEntry2;
  this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  if ( m_Globals->FxVerifierOn )
  {
    v22 = _InterlockedIncrement(&Request->m_Refcnt);
    v23 = SLOBYTE(Request->m_ObjectFlags) >= 0 ? 0LL : (FxTagTracker *)Request[-1].m_ForwardProgressList.Blink;
    if ( v23 )
      FxTagTracker::UpdateTagHistory(
        v23,
        (void *)0x646C6F48,
        5678,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        v22);
  }
  v11 = *PreviousIrql;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v24 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v24, v11, (unsigned __int8)PreviousIrql);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(Request, &NewIrql, v12);
    Request->m_VerifierFlags &= ~0x200u;
    if ( SLOBYTE(Request->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, NewIrql, v25);
    }
    else
    {
      KeReleaseSpinLock(&Request->m_NPLock.m_Lock, NewIrql);
    }
    Request->Release(
      Request,
      (void *)1684827976,
      5685,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  if ( !v7 )
    goto LABEL_59;
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(Request, &v34, v12);
    m_ObjectFlags = Request->m_ObjectFlags;
    Request->m_VerifierFlags &= 0xFFF6u;
    if ( m_ObjectFlags < 0 && (v29 = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(v29, v34, v27);
    else
      KeReleaseSpinLock(&Request->m_NPLock.m_Lock, v34);
  }
  v13 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    v14 = Request[-1].m_ForwardProgressList.Blink;
  else
    v14 = 0LL;
  if ( v14 )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)v14,
      (void *)0x74617453,
      5709,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
      TagAddRef,
      v13);
  FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
  FxNonPagedObject::Lock(this, PreviousIrql, v15);
  Flink = p_m_OwnerListEntry2->Flink;
  v18 = Request->m_OwnerListEntry2.Blink;
  if ( p_m_OwnerListEntry2->Flink->Blink != p_m_OwnerListEntry2 || v18->Flink != p_m_OwnerListEntry2 )
    __fastfail(3u);
  v18->Flink = Flink;
  Flink->Blink = v18;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  --this->m_DriverIoCount;
  if ( this->m_CancelDispatchedRequests || FxRequest::InsertHeadIrpQueue(Request, &this->m_Queue, v16) < 0 )
  {
    v30 = _InterlockedIncrement(&Request->m_Refcnt);
    if ( SLOBYTE(Request->m_ObjectFlags) >= 0 )
      v31 = 0LL;
    else
      v31 = Request[-1].m_ForwardProgressList.Blink;
    if ( v31 )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v31,
        (void *)0x75657551,
        5753,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        v30);
    FxIoQueue::CancelForQueue(this, Request, *PreviousIrql);
LABEL_59:
    FxNonPagedObject::Lock(this, PreviousIrql, v12);
    return;
  }
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
  {
    this->m_TransitionFromEmpty = 1;
    this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
    if ( this->m_IsDevicePowerPolicyOwner
      && this->m_PowerManaged
      && !this->m_PowerReferenced
      && FxPowerIdleMachine::PowerReferenceWorker(
           *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
           0,
           FxPowerReferenceDefault,
           0LL,
           0,
           0LL) >= 0 )
    {
      this->m_PowerReferenced = 1;
    }
  }
}
