/*
 * XREFs of ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x1C005CA48
 * Callers:
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0014698 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxIoTarget::ClearCompletedRequestVerifierFlags(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v5; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(Request, &irql, a3);
    Request->m_VerifierFlags &= ~0x100u;
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
      FxVerifierLock::Unlock(m_IrpQueue, irql, v5);
    else
      KeReleaseSpinLock(&Request->m_NPLock.m_Lock, irql);
  }
}
