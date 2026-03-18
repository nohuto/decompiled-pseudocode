/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0095C5C
 * Callers:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0095AF4 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0095B4C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0007544 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D1FE8 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned int RefCount; // ecx
  _LIST_ENTRY *Blink; // rax
  _FX_DRIVER_GLOBALS *v9; // rdx
  FxIoQueue *v10; // rcx
  unsigned __int8 v11; // r8
  FxRequestCompletionState v12; // r13d
  __int16 updated; // r15
  unsigned __int8 v14; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rcx
  unsigned __int8 v19; // r8
  int v20; // r14d
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // r8
  _LIST_ENTRY *v27; // rcx
  _LIST_ENTRY *v28; // rcx
  unsigned __int16 v29; // r9
  unsigned __int8 irql; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+48h] BYREF

  m_Globals = this->m_Globals;
  RefCount = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) >= 0 )
    Blink = 0LL;
  else
    Blink = Request[-1].m_ForwardProgressList.Blink;
  if ( Blink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Blink,
      (void *)0x74617453,
      1374,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
      TagAddRef,
      RefCount);
  v12 = (unsigned int)FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v10, v9, Request);
  else
    updated = 0;
  FxNonPagedObject::Lock(this, &irql, v11);
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  v17 = Request->m_OwnerListEntry2.Blink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 || v17->Flink != p_m_OwnerListEntry2 )
    __fastfail(3u);
  v17->Flink = Flink;
  Flink->Blink = v17;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v18, irql, v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  v20 = FxIoQueue::QueueRequestFromForward(DestQueue, Request);
  if ( v20 >= 0 )
  {
    FxNonPagedObject::Lock(this, &irql, v19);
    --this->m_DriverIoCount;
    if ( !this->m_Dispatching )
    {
      FxIoQueue::DispatchEvents(this, irql, 0LL, v29);
      return (unsigned int)v20;
    }
  }
  else
  {
    FxRequest::SetCompletionState(Request, v12);
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock(Request, &PreviousIrql, v21);
      m_ObjectFlags = Request->m_ObjectFlags;
      Request->m_VerifierFlags |= updated;
      if ( m_ObjectFlags < 0 && (m_ForwardProgressQueue = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
        FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v22);
      else
        KeReleaseSpinLock(&Request->m_NPLock.m_Lock, PreviousIrql);
    }
    Request->Release(
      Request,
      (void *)1952543827,
      1436,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v25);
    v27 = this->m_DriverOwned.Blink;
    p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
    Request->m_OwnerListEntry2.Blink = v27;
    if ( v27->Flink != &this->m_DriverOwned )
      __fastfail(3u);
    v27->Flink = p_m_OwnerListEntry2;
    this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v28, irql, v26);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return (unsigned int)v20;
}
