/*
 * XREFs of imp_WdfRequestCancelSentRequest @ 0x1C002FBA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0013F60 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

BOOLEAN __fastcall imp_WdfRequestCancelSentRequest(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  WDFREQUEST__ *_a1; // rbx
  FxRequest *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  _a1 = (WDFREQUEST__ *)Request;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v3 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Request) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Request = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Request);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, _a1, 0x1008u, Request);
    v3 = pRequest;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x32u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    v3 = pRequest;
  }
  return FxRequestBase::Cancel(v3);
}
