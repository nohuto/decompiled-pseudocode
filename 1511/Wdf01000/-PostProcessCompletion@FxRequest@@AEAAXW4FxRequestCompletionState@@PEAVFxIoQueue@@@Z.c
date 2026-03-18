/*
 * XREFs of ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0022B88
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004AD0 (imp_WdfRequestSend.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00557FC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0023590 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAF6C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
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
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  if ( State )
  {
    if ( (State & 0x80u) == 0 )
    {
      m_Globals = Queue->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(Queue, m_Globals, this);
      if ( SLOBYTE(Queue->m_ObjectFlags) < 0 && (Blink = Queue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Lock((FxVerifierLock *)Blink, &PreviousIrql, (unsigned __int8)Queue);
      else
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&Queue->m_NPLock.m_Lock);
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
        FxNonPagedObject::Unlock(Queue, PreviousIrql, v6);
      else
        FxIoQueue::DispatchEvents(Queue, PreviousIrql, 0LL, v7);
    }
    FxObject::DeleteEarlyDisposedObject(this);
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 917, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
}
