/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000AFE0
 * Callers:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C000AAC8 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0082318 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0008504 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAB8C (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxIoQueue *v8; // rcx
  unsigned __int8 v9; // r8
  FxRequestCompletionState v10; // r12d
  __int16 updated; // bp
  unsigned __int8 v12; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  int v18; // r14d
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r8
  _LIST_ENTRY *v21; // rcx
  unsigned __int16 v23; // r9
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxObject::AddRef(
    Request,
    (void *)0x74617453,
    1374,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v10 = (unsigned int)FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v8, v7, Request);
  else
    updated = 0;
  FxNonPagedObject::Lock(this, &irql, v9);
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 || Blink->Flink != p_m_OwnerListEntry2 )
    __fastfail(3u);
  v16 = irql;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  FxNonPagedObject::Unlock(this, v16, v12);
  v18 = FxIoQueue::QueueRequestFromForward(DestQueue, Request);
  if ( v18 >= 0 )
  {
    FxNonPagedObject::Lock(this, &irql, v17);
    --this->m_DriverIoCount;
    if ( !this->m_Dispatching )
    {
      FxIoQueue::DispatchEvents(this, irql, 0LL, v23);
      return (unsigned int)v18;
    }
  }
  else
  {
    FxRequest::SetCompletionState(Request, v10);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1436,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v19);
    v21 = this->m_DriverOwned.Blink;
    p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
    Request->m_OwnerListEntry2.Blink = v21;
    if ( v21->Flink != &this->m_DriverOwned )
      __fastfail(3u);
    v21->Flink = p_m_OwnerListEntry2;
    this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  }
  FxNonPagedObject::Unlock(this, irql, v20);
  return (unsigned int)v18;
}
