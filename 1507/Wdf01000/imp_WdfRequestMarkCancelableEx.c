/*
 * XREFs of imp_WdfRequestMarkCancelableEx @ 0x1C00233E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C000B620 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestMarkCancelableEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  FxRequest *v5; // r10
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest *v8; // rcx
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v10; // r10
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - v6);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, v6);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( FxRequest::GetCurrentQueue(v5) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v8);
    return FxIoQueue::RequestCancelable(CurrentQueue, v10, 1u, EvtRequestCancel, 1u);
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x51u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    v13 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v13,
      m_Globals->Public.DriverName,
      (const char *)&v13);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
}
