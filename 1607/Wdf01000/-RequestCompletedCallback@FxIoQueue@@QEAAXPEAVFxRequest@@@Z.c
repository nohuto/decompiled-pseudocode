/*
 * XREFs of ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0063734
 * Callers:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0062F14 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0078664 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0011FC4 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9F8C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::RequestCompletedCallback(FxIoQueue *this, FxRequest *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyValidateCompletedRequest(this, m_Globals, Request);
  FxNonPagedObject::Lock(this, &irql, a3);
  FxIoQueue::RemoveFromDriverOwnedList(this, Request);
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, irql, v6);
  else
    FxIoQueue::DispatchEvents(this, irql, 0LL, 0);
}
