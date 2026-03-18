/*
 * XREFs of ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C008306C
 * Callers:
 *     imp_WdfRequestRequeue @ 0x1C0065680 (imp_WdfRequestRequeue.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0008504 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C000EA54 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000EC00 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000EE78 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAEE4 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::Requeue(FxIoQueue *this, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  FxObject *v6; // rcx
  unsigned __int8 v7; // r8
  unsigned int *v8; // r8
  const void *v9; // rax
  int inserted; // esi
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxIoQueue::Vf_VerifyRequeue(this, this->m_Globals, pRequest);
  else
    result = 0;
  if ( result >= 0 )
  {
    if ( FxRequest::GetCurrentQueue(pRequest)->m_Type == WdfIoQueueDispatchManual )
    {
      FxObject::AddRef(
        v6,
        (void *)0x74617453,
        1967,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateNone);
      FxNonPagedObject::Lock(this, &irql, v7);
      FxIoQueue::RemoveFromDriverOwnedList(this, pRequest);
      if ( m_Globals->FxVerboseOn )
      {
        if ( pRequest->m_ObjectSize )
          v9 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v9 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x26u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v9);
      }
      if ( this->m_CancelDispatchedRequests
        || (inserted = FxRequest::InsertHeadIrpQueue(pRequest, &this->m_Queue, v8), inserted < 0) )
      {
        inserted = 0;
        FxObject::AddRef(
          pRequest,
          (void *)0x75657551,
          2021,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxIoQueue::CancelForQueue(this, pRequest, irql);
        FxNonPagedObject::Lock(this, &irql, v12);
      }
      else
      {
        FxIoQueue::CheckTransitionFromEmpty(this);
      }
      FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
      return inserted;
    }
    else
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xDu,
        0x25u,
        (const _GUID *)&FxObject::`vftable'.DebugExtension,
        pRequest,
        -1073741808);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  return result;
}
