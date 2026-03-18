/*
 * XREFs of ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D1A58
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D114C (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OrigVerifierFlags)
{
  unsigned __int8 v7; // r8
  bool v8; // zf
  int v9; // ebx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FxPkgIo *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  FxNonPagedObject::Lock(Request, (unsigned __int8 *)&irql, (unsigned __int8)Request);
  v8 = FxDriverGlobals->FxVerifierOn == 0;
  *OrigVerifierFlags = Request->m_VerifierFlags;
  if ( v8 )
    v9 = 0;
  else
    v9 = FxRequest::Vf_VerifyRequestIsInCallerContext(Request, FxDriverGlobals);
  if ( v9 >= 0 )
  {
    v9 = FxDriverGlobals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals) : 0;
    if ( v9 >= 0 )
      Request->m_VerifierFlags &= 0xFFDEu;
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)Request[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, (KIRQL)irql, v7);
  }
  else
  {
    KeReleaseSpinLock(&Request->m_NPLock.m_Lock, (KIRQL)irql);
  }
  return (unsigned int)v9;
}
