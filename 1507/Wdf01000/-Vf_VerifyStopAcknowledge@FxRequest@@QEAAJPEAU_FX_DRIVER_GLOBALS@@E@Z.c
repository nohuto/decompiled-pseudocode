/*
 * XREFs of ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D14C8
 * Callers:
 *     imp_WdfRequestStopAcknowledge @ 0x1C00073C0 (imp_WdfRequestStopAcknowledge.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D11FC (-Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D12B0 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyStopAcknowledge(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Requeue)
{
  unsigned __int8 v6; // r8
  int IsNotCancelable; // ebx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, Requeue);
  if ( FxDriverGlobals->FxVerifierOn )
    IsNotCancelable = FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(this, FxDriverGlobals);
  else
    IsNotCancelable = 0;
  if ( IsNotCancelable >= 0 && !this->m_Completed && Requeue )
  {
    IsNotCancelable = FxDriverGlobals->FxVerifierOn
                    ? FxRequest::Vf_VerifyRequestIsDriverOwned(this, FxDriverGlobals)
                    : 0;
    if ( IsNotCancelable >= 0 )
    {
      if ( FxDriverGlobals->FxVerifierOn )
        IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(this, FxDriverGlobals);
      else
        IsNotCancelable = 0;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v6);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  return (unsigned int)IsNotCancelable;
}
