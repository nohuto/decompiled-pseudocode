/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0095C5C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C00967D0 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00206C4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0032B08 (WPP_IFR_SF_qLsqd.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  unsigned int *v5; // r8
  _FX_IO_QUEUE_STATE _a4; // ecx
  const char *_a5; // rdx
  const void *v8; // rsi
  const void *_a3; // rax
  unsigned __int8 v10; // r8
  _LIST_ENTRY *v11; // rcx
  bool v13; // bp
  int inserted; // eax
  unsigned __int8 v15; // r8
  unsigned __int16 v16; // r9
  unsigned int v17; // ecx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v19; // r8
  _LIST_ENTRY *v20; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-38h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    v13 = pRequest->m_IrpAllocation == 0;
    inserted = FxRequest::InsertTailIrpQueue(pRequest, &this->m_Queue, v5);
    pRequest->m_IoQueue = this;
    if ( inserted >= 0 )
    {
      if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
      {
        this->m_TransitionFromEmpty = 1;
        this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
        if ( this->m_IsDevicePowerPolicyOwner )
        {
          if ( this->m_PowerManaged
            && !this->m_PowerReferenced
            && (int)FxPowerIdleMachine::PowerReferenceWorker(
                      *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
                                             + 880LL),
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
    }
    else
    {
      v17 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) >= 0 )
        Blink = 0LL;
      else
        Blink = pRequest[-1].m_ForwardProgressList.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Blink,
          (void *)0x75657551,
          2434,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v17);
      FxIoQueue::CancelForQueue(this, pRequest, irql);
      FxNonPagedObject::Lock(this, &irql, v19);
    }
    if ( v13 || !this->m_Dispatching )
    {
      FxIoQueue::DispatchEvents(this, irql, 0LL, v16);
    }
    else if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    {
      FxVerifierLock::Unlock((FxVerifierLock *)v20, irql, v15);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
    return 0LL;
  }
  else
  {
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = &a5;
    if ( pRequest->m_ObjectSize )
      v8 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v8 = 0LL;
    if ( this->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    WPP_IFR_SF_qLsqd(this->m_Globals, 3u, (unsigned int)&a5, 0x29u, RefType, _a3, _a4, _a5, v8, -1071644156);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v11 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v11, irql, v10);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 3223323140LL;
  }
}
