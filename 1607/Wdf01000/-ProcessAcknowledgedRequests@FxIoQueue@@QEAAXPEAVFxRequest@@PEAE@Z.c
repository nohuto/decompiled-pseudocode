/*
 * XREFs of ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0011FFC
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D3D4 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00077C8 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0011FC4 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0012268 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00125E0 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0078594 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qqs @ 0x1C0091468 (WPP_IFR_SF_qqs.c)
 */

void __fastcall FxIoQueue::ProcessAcknowledgedRequests(
        FxIoQueue *this,
        FxRequest *Request,
        unsigned __int8 *PreviousIrql,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  bool v7; // bp
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned int *v13; // r8
  const char *id; // rdx
  const void *flags; // rcx
  const void *level; // rax
  const _GUID *v17; // [rsp+20h] [rbp-38h]

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
    WPP_IFR_SF_qqs(m_Globals, (unsigned __int8)id, (unsigned int)PreviousIrql, a4, v17, level, flags, id);
  }
  Request->m_PowerStopState = 0;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Flink = &Request->m_OwnerListEntry2;
  Blink = this->m_DriverOwned.Blink;
  if ( Blink->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
  Request->m_OwnerListEntry2.Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry2;
  this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  if ( m_Globals->FxVerifierOn )
    FxObject::AddRef(
      Request,
      (void *)0x646C6F48,
      5700,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)PreviousIrql);
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(Request, 512);
    Request->Release(
      Request,
      (void *)1684827976,
      5707,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  if ( v7 )
  {
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(Request, 9);
    FxObject::AddRef(
      Request,
      (void *)0x74617453,
      5731,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
    FxNonPagedObject::Lock(this, PreviousIrql, v12);
    FxIoQueue::RemoveFromDriverOwnedList(this, Request);
    if ( !this->m_CancelDispatchedRequests && FxRequest::InsertHeadIrpQueue(Request, &this->m_Queue, v13) >= 0 )
    {
      FxIoQueue::CheckTransitionFromEmpty(this);
      return;
    }
    FxObject::AddRef(
      Request,
      (void *)0x75657551,
      5775,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, Request, *PreviousIrql);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v11);
}
