/*
 * XREFs of ?PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00636B8
 * Callers:
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0007828 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9F8C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::PreRequestCompletedCallback(FxIoQueue *this, FxRequest *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v6; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyValidateCompletedRequest(this, m_Globals, Request);
  FxNonPagedObject::Lock(this, &irql, a3);
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 || Blink->Flink != p_m_OwnerListEntry2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  ++this->m_TwoPhaseCompletions;
  FxNonPagedObject::Unlock(this, irql, v6);
}
