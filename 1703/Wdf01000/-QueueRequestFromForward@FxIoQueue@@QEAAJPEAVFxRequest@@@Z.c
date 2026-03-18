/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000F1A0
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00059B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000F038 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C006662C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0004560 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0016C94 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00953C8 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D40BC (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  unsigned int v5; // r8d
  _FX_IO_QUEUE_STATE _a4; // eax
  bool v7; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v10; // edx
  _IRP *m_Irp; // r9
  $4F60D2EEAF443BADC51864A01D9AEC36 *v12; // r10
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  int inserted; // ebp
  const char *_a5; // rcx
  const void *v18; // r14
  const void *globals; // rdi
  FxVerifierLock *v20; // rcx
  _LIST_ENTRY *Blink; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  FxRequest_vtbl *v24; // rax
  const _GUID *Line; // [rsp+20h] [rbp-58h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxIrp Irp; // [rsp+90h] [rbp+18h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v20 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v20, &irql, a3);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    v7 = pRequest->m_IrpAllocation == 0;
    m_Globals = pRequest->m_Globals;
    p_m_Queue = &this->m_Queue;
    if ( !m_Globals->FxVerifierOn
      || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, m_Globals, &this->m_Queue), inserted >= 0) )
    {
      v10 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v10);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v12 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v12;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v12->m_CsqContext.Type = 1;
      }
      v13 = this->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v13->Flink != p_m_Queue )
        __fastfail(3u);
      m_Irp->Tail.Overlay.ListEntry.Blink = v13;
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      v13->Flink = p_ListEntry;
      this->m_Queue.m_Queue.Blink = p_ListEntry;
      ++this->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&this->m_Queue, &Irp);
        if ( v23 )
          *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v22 + 144) = 0LL;
        v24 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v24->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        inserted = 0;
      }
    }
    pRequest->m_IoQueue = this;
    if ( inserted < 0 )
    {
      FxObject::AddRef(
        pRequest,
        (void *)0x75657551,
        2459,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, pRequest, irql);
      FxNonPagedObject::Lock(this, &irql);
    }
    else if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      this->m_TransitionFromEmpty = 1;
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
      if ( this->m_IsDevicePowerPolicyOwner )
      {
        if ( this->m_PowerManaged
          && !this->m_PowerReferenced
          && (int)FxPowerIdleMachine::PowerReferenceWorker(
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
    if ( v7 || !this->m_Dispatching )
      FxIoQueue::DispatchEvents(this, irql, 0LL, (unsigned __int16)m_Irp);
    else
      FxNonPagedObject::Unlock(this, irql);
    return 0LL;
  }
  else
  {
    if ( (_a4 & 0x10000) != 0 )
      _a5 = "power stopping (Drain) in progress,";
    else
      _a5 = a5;
    v18 = 0LL;
    if ( pRequest->m_ObjectSize )
      globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    if ( this->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qLsqd(this->m_Globals, 3u, v5, 0x2Bu, Line, v18, _a4, _a5, globals, -1071644156);
    FxNonPagedObject::Unlock(this, irql);
    return 3223323140LL;
  }
}
