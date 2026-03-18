/*
 * XREFs of ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00BA4AC
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005E40 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0076888 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxIoTarget::Vf_VerifySubmitLocked(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestBase *Request)
{
  unsigned int v5; // esi
  unsigned __int8 v7; // r8
  __int16 m_VerifierFlags; // ax
  FxRequestBase *_a1; // rax
  int _a2; // r8d
  FxRequestBase *TraceObjectHandle; // rax
  ULONG_PTR v12; // rbx
  int _a6; // r14d
  const void *_a5; // rdi
  FxRequestBase *v15; // rax
  unsigned __int8 v16; // dl
  int v17; // r8d
  const void *v18; // r10
  int _a4; // r11d
  unsigned __int8 irql; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  m_VerifierFlags = Request->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x80u) != 0 )
  {
    if ( (m_VerifierFlags & 0x100) != 0 )
    {
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xEu, 0x1Bu, WPP_FxIoTarget_cpp_Traceguids, TraceObjectHandle);
      if ( Request->m_ObjectSize )
        v12 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v12 = 0LL;
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v12);
    }
    _a6 = this->m_TargetStackSize;
    if ( Request->m_Irp.m_Irp->CurrentLocation - 1 < _a6 )
    {
      v5 = -1073741616;
      if ( this->m_ObjectSize )
        _a5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a5 = 0LL;
      v15 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qqdqdd(FxDriverGlobals, v16, 0xEu, 0x1Cu, WPP_FxIoTarget_cpp_Traceguids, v15, v18, _a4, _a5, _a6, v17);
    }
  }
  else
  {
    v5 = -1073741616;
    _a1 = FxRequestBase::GetTraceObjectHandle(Request);
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xEu, 0x1Au, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Unlock(Request, irql, v7);
  return v5;
}
