/*
 * XREFs of ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C008391C
 * Callers:
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A990 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C008B7F8 (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00916B0 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0083AA0 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0084B9C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::CancelSentIo(FxIoTarget *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoTarget *v5; // rcx
  unsigned __int8 v6; // r8
  _FILE_OBJECT *m_TargetFileObject; // rcx
  const void *_a1; // rbx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 sentAdded; // [rsp+58h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY sentRequestListHead; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  sentRequestListHead.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  FxIoTarget::GetSentRequestsListLocked(v5, &sentRequestListHead, &this->m_SentIoListHead, &sentAdded);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetFileObject = this[-1].m_TargetFileObject) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_TargetFileObject, irql, v6);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x38u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  if ( sentAdded )
    FxIoTarget::_CancelSentRequests(&sentRequestListHead);
}
