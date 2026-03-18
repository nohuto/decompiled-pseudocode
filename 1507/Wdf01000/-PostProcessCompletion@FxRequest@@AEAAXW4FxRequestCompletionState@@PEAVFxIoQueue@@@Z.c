/*
 * XREFs of ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0020744
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0012AA0 (imp_WdfRequestSend.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C005C318 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0015F90 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D251C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PostProcessCompletion(FxRequest *this, FxRequestCompletionState State, FxIoQueue *Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v6; // r8
  unsigned __int16 v7; // r9
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v12; // rcx
  unsigned int RefCount; // ecx
  _LIST_ENTRY *v14; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  if ( State )
  {
    if ( (State & 0x80u) == 0 )
    {
      m_Globals = Queue->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(Queue, m_Globals, this);
      if ( SLOBYTE(Queue->m_ObjectFlags) < 0 && (Blink = Queue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Lock((FxVerifierLock *)Blink, &NewIrql, (unsigned __int8)Queue);
      else
        NewIrql = KeAcquireSpinLockRaiseToDpc(&Queue->m_NPLock.m_Lock);
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      Flink = this->m_OwnerListEntry2.Flink;
      v10 = this->m_OwnerListEntry2.Blink;
      if ( Flink->Blink != &this->m_OwnerListEntry2 || v10->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      v10->Flink = Flink;
      Flink->Blink = v10;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --Queue->m_DriverIoCount;
      if ( Queue->m_Dispatching )
      {
        if ( SLOBYTE(Queue->m_ObjectFlags) < 0 && (v12 = Queue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock((FxVerifierLock *)v12, NewIrql, v6);
        else
          KeReleaseSpinLock(&Queue->m_NPLock.m_Lock, NewIrql);
      }
      else
      {
        FxIoQueue::DispatchEvents(Queue, NewIrql, 0LL, v7);
      }
    }
    FxObject::DeleteEarlyDisposedObject(this);
  }
  else
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v14 = 0LL;
    else
      v14 = this[-1].m_ForwardProgressList.Blink;
    if ( v14 )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v14,
        (void *)0x706D6F43,
        917,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        RefCount);
    this->DeleteObject(this);
  }
}
