/*
 * XREFs of ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E4F8 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0008504 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C000EA54 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000EC00 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000EE78 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qqs @ 0x1C0083504 (WPP_IFR_SF_qqs.c)
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
  Request->m_OwnerListEntry2.Flink = &this->m_DriverOwned;
  Request->m_OwnerListEntry2.Blink = Blink;
  if ( Blink->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  Blink->Flink = p_m_OwnerListEntry2;
  this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  if ( m_Globals->FxVerifierOn )
    FxObject::AddRef(
      Request,
      (void *)0x646C6F48,
      5678,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)PreviousIrql);
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(Request, 512);
    Request->Release(
      Request,
      (void *)1684827976,
      5685,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  if ( v7 )
  {
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(Request, 9);
    FxObject::AddRef(
      Request,
      (void *)0x74617453,
      5709,
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
      5753,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, Request, *PreviousIrql);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v11);
}
