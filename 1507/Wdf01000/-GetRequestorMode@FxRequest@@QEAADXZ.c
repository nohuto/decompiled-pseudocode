/*
 * XREFs of ?GetRequestorMode@FxRequest@@QEAADXZ @ 0x1C0074FF4
 * Callers:
 *     imp_WdfRequestGetRequestorMode @ 0x1C006EA40 (imp_WdfRequestGetRequestorMode.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

char __fastcall FxRequest::GetRequestorMode(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  int IsNotCompleted; // eax
  char RequestorMode; // di
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return this->m_Irp.m_Irp->RequestorMode;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  else
    IsNotCompleted = 0;
  if ( IsNotCompleted >= 0 )
    RequestorMode = this->m_Irp.m_Irp->RequestorMode;
  else
    RequestorMode = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v5);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  return RequestorMode;
}
