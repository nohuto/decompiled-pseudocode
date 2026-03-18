/*
 * XREFs of ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0075140
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     imp_WdfRequestSend @ 0x1C0012AA0 (imp_WdfRequestSend.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C005C318 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D251C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PostProcessCompletionForReserved(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v6; // r8
  unsigned __int16 v7; // r9
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v11; // rcx
  unsigned int RefCount; // edx
  _LIST_ENTRY *v13; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF

  if ( State )
  {
    if ( (State & 0x80u) == 0 )
    {
      m_Globals = Queue->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(Queue, m_Globals, this);
      FxNonPagedObject::Lock(Queue, &PreviousIrql, (unsigned __int8)Queue);
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      Flink = this->m_OwnerListEntry2.Flink;
      Blink = this->m_OwnerListEntry2.Blink;
      if ( Flink->Blink != &this->m_OwnerListEntry2 || Blink->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --Queue->m_DriverIoCount;
      if ( Queue->m_Dispatching )
      {
        if ( SLOBYTE(Queue->m_ObjectFlags) < 0 && (v11 = Queue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock((FxVerifierLock *)v11, PreviousIrql, v6);
        else
          KeReleaseSpinLock(&Queue->m_NPLock.m_Lock, PreviousIrql);
      }
      else
      {
        FxIoQueue::DispatchEvents(Queue, PreviousIrql, 0LL, v7);
      }
    }
  }
  else
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v13 = 0LL;
    else
      v13 = this[-1].m_ForwardProgressList.Blink;
    if ( v13 )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v13,
        (void *)0x706D6F43,
        952,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        RefCount);
  }
  this->Release(this, (void *)1348761414, 955, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
}
