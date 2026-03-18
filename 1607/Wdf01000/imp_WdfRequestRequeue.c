/*
 * XREFs of imp_WdfRequestRequeue @ 0x1C0075570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C001B8B0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0090FDC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 */

int __fastcall imp_WdfRequestRequeue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxRequest *v4; // rcx
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v7; // rdx
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( FxRequest::GetCurrentQueue(pRequest) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v4);
    return FxIoQueue::Requeue(CurrentQueue, v7);
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x4Du, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741808;
  }
}
