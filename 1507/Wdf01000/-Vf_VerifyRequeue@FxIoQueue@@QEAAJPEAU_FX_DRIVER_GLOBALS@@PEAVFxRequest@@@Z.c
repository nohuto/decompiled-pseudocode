/*
 * XREFs of ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D2474
 * Callers:
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D12B0 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequeue(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // edi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    IsDriverOwned = FxDriverGlobals->FxVerifierOn
                  ? FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals)
                  : 0;
    if ( IsDriverOwned >= 0 )
      pRequest->m_VerifierFlags &= 0xFFF6u;
  }
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, (KIRQL)irql, v5);
  }
  else
  {
    KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, (KIRQL)irql);
  }
  return (unsigned int)IsDriverOwned;
}
