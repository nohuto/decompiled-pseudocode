/*
 * XREFs of ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D114C
 * Callers:
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1C006F6C0 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C006FA30 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D1A58 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsInCallerContext(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // edi
  const void *_a1; // rcx

  if ( (this->m_VerifierFlags & 0x20) != 0 )
  {
    return 0;
  }
  else
  {
    v3 = -1073741808;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x37u, WPP_FxRequest_cpp_Traceguids, _a1, -1073741808);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  return v3;
}
