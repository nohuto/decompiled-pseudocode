/*
 * XREFs of imp_WdfRequestUnmarkCancelable @ 0x1C0014220
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C001B8B0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001D17C (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfRequestUnmarkCancelable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxRequest *v4; // rcx
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v6; // rdx
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
    return FxIoQueue::RequestCancelable(CurrentQueue, v6, 0, 0LL, 0);
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x53u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741808;
  }
}
