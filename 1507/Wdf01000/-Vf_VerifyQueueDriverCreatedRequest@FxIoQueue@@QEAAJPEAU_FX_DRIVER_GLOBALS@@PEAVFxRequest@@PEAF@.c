/*
 * XREFs of ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D2320
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C00967D0 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D12B0 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OldFlags)
{
  unsigned __int8 v7; // r8
  bool v8; // zf
  int IsNotCancelable; // ebx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  FxNonPagedObject::Lock(Request, (unsigned __int8 *)&irql, (unsigned __int8)Request);
  v8 = FxDriverGlobals->FxVerifierOn == 0;
  *OldFlags = Request->m_VerifierFlags;
  if ( v8 )
    IsNotCancelable = 0;
  else
    IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
  if ( IsNotCancelable >= 0 )
    Request->m_VerifierFlags &= ~1u;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, (KIRQL)irql, v7);
  }
  else
  {
    KeReleaseSpinLock(&Request->m_NPLock.m_Lock, (KIRQL)irql);
  }
  return (unsigned int)IsNotCancelable;
}
