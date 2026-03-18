/*
 * XREFs of imp_WdfRequestMarkCancelable @ 0x1C002A380
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001E324 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfRequestMarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxRequest *v6; // rcx
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v8; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  if ( FxRequest::GetCurrentQueue(pRequest) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v6);
    FxIoQueue::RequestCancelable(CurrentQueue, v8, 1u, EvtRequestCancel, 0);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x10u, 0x4Fu, WPP_FxRequestApi_cpp_Traceguids, Request);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
