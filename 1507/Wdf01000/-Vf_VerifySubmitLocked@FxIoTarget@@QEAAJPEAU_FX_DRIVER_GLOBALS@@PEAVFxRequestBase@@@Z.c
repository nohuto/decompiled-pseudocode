/*
 * XREFs of ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00D1770
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0084D18 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxIoTarget::Vf_VerifySubmitLocked(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestBase *Request)
{
  unsigned int v5; // esi
  unsigned __int8 v7; // r8
  __int16 m_VerifierFlags; // ax
  unsigned __int64 v9; // rcx
  FxRequestBase *_a1; // rax
  unsigned __int64 v11; // rcx
  FxRequestBase *v12; // rax
  ULONG_PTR v13; // rbx
  _IRP *m_Irp; // r10
  int _a6; // edx
  int CurrentLocation; // r9d
  const void *_a5; // rdi
  unsigned __int64 v18; // rax
  FxRequestBase *v19; // rcx
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  m_VerifierFlags = Request->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x80u) != 0 )
  {
    if ( (m_VerifierFlags & 0x100) != 0 )
    {
      if ( Request->m_ObjectSize )
        v11 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v11 = 0LL;
      v12 = Request;
      if ( v11 )
        v12 = (FxRequestBase *)v11;
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xEu, 0x1Bu, WPP_FxIoTarget_cpp_Traceguids, v12);
      if ( Request->m_ObjectSize )
        v13 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v13 = 0LL;
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v13);
    }
    m_Irp = Request->m_Irp.m_Irp;
    _a6 = this->m_TargetStackSize;
    CurrentLocation = m_Irp->CurrentLocation;
    if ( CurrentLocation - 1 < _a6 )
    {
      v5 = -1073741616;
      if ( this->m_ObjectSize )
        _a5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a5 = 0LL;
      if ( Request->m_ObjectSize )
        v18 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v18 = 0LL;
      v19 = Request;
      if ( v18 )
        v19 = (FxRequestBase *)v18;
      WPP_IFR_SF_qqdqdd(
        FxDriverGlobals,
        _a6,
        0xEu,
        0x1Cu,
        WPP_FxIoTarget_cpp_Traceguids,
        v19,
        m_Irp,
        (char)CurrentLocation - 1,
        _a5,
        _a6,
        -1073741616);
    }
  }
  else
  {
    v5 = -1073741616;
    if ( Request->m_ObjectSize )
      v9 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v9 = 0LL;
    _a1 = Request;
    if ( v9 )
      _a1 = (FxRequestBase *)v9;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xEu, 0x1Au, WPP_FxIoTarget_cpp_Traceguids, _a1, -1073741616);
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
    FxVerifierLock::Unlock(m_IrpQueue, irql, v7);
  else
    KeReleaseSpinLock(&Request->m_NPLock.m_Lock, irql);
  return v5;
}
