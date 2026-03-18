/*
 * XREFs of ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC
 * Callers:
 *     imp_WdfRequestRequeue @ 0x1C006F0F0 (imp_WdfRequestRequeue.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00074C4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0007544 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D2474 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::Requeue(FxIoQueue *this, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  unsigned int v6; // ecx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v8; // r8
  unsigned int *v9; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v12; // rcx
  const void *v13; // rax
  int inserted; // esi
  unsigned __int16 v15; // r9
  unsigned int v16; // edx
  _LIST_ENTRY *v17; // rcx
  unsigned __int8 v18; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+70h] [rbp+18h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxIoQueue::Vf_VerifyRequeue(this, this->m_Globals, pRequest);
  else
    result = 0;
  if ( result >= 0 )
  {
    if ( FxRequest::GetCurrentQueue(pRequest)->m_Type == WdfIoQueueDispatchManual )
    {
      v6 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) >= 0 )
        Blink = 0LL;
      else
        Blink = pRequest[-1].m_ForwardProgressList.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Blink,
          (void *)0x74617453,
          1967,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v6);
      FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateNone);
      FxNonPagedObject::Lock(this, &irql, v8);
      p_m_OwnerListEntry2 = &pRequest->m_OwnerListEntry2;
      Flink = pRequest->m_OwnerListEntry2.Flink;
      v12 = pRequest->m_OwnerListEntry2.Blink;
      if ( Flink->Blink != &pRequest->m_OwnerListEntry2 || v12->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      v12->Flink = Flink;
      Flink->Blink = v12;
      pRequest->m_OwnerListEntry2.Blink = &pRequest->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --this->m_DriverIoCount;
      if ( m_Globals->FxVerboseOn )
      {
        if ( pRequest->m_ObjectSize )
          v13 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v13 = 0LL;
        WPP_IFR_SF_q(
          m_Globals,
          5u,
          0xDu,
          0x26u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v13);
      }
      if ( this->m_CancelDispatchedRequests
        || (inserted = FxRequest::InsertHeadIrpQueue(pRequest, &this->m_Queue, v9), inserted < 0) )
      {
        inserted = 0;
        v16 = _InterlockedIncrement(&pRequest->m_Refcnt);
        if ( SLOBYTE(pRequest->m_ObjectFlags) >= 0 )
          v17 = 0LL;
        else
          v17 = pRequest[-1].m_ForwardProgressList.Blink;
        if ( v17 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v17,
            (void *)0x75657551,
            2021,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v16);
        FxIoQueue::CancelForQueue(this, pRequest, irql);
        FxNonPagedObject::Lock(this, &irql, v18);
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
      FxIoQueue::DispatchEvents(this, irql, 0LL, v15);
      return inserted;
    }
    else
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xDu,
        0x25u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        pRequest,
        -1073741808);
      v20 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  return result;
}
