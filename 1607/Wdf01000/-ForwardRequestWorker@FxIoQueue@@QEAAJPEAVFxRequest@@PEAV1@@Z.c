/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000BBAC
 * Callers:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C000B238 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0090288 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00077C8 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000BD10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9BAC (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxIoQueue *v8; // rcx
  FxRequestCompletionState v9; // r12d
  __int16 updated; // bp
  unsigned __int8 v11; // dl
  int v12; // r14d
  unsigned __int16 v13; // r9
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxObject::AddRef(
    Request,
    (void *)0x74617453,
    1396,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v9 = (unsigned int)FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v8, v7, Request);
  else
    updated = 0;
  FxNonPagedObject::Lock(this, &irql);
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 || Blink->Flink != p_m_OwnerListEntry2 )
    __fastfail(3u);
  v11 = irql;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  FxNonPagedObject::Unlock(this, v11);
  v12 = FxIoQueue::QueueRequestFromForward(DestQueue, Request);
  if ( v12 < 0 )
  {
    FxRequest::SetCompletionState(Request, v9);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1458,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql);
    v15 = this->m_DriverOwned.Blink;
    if ( v15->Flink != &this->m_DriverOwned )
      __fastfail(3u);
    p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
    Request->m_OwnerListEntry2.Blink = v15;
    v15->Flink = p_m_OwnerListEntry2;
    this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
    goto LABEL_12;
  }
  FxNonPagedObject::Lock(this, &irql);
  --this->m_DriverIoCount;
  if ( this->m_Dispatching )
  {
LABEL_12:
    FxNonPagedObject::Unlock(this, irql);
    return (unsigned int)v12;
  }
  FxIoQueue::DispatchEvents(this, irql, 0LL, v13);
  return (unsigned int)v12;
}
