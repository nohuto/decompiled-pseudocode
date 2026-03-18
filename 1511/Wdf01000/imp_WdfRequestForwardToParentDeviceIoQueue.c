/*
 * XREFs of imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C0065120
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0055C6C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C0064BBC (WPP_IFR_SF_qDDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0082318 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00B9540 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 */

__int64 __fastcall imp_WdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFQUEUE__ *ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // dl
  unsigned int v8; // ebx
  unsigned int _a3; // eax
  FxRequest *v10; // rdx
  FxRequest *v11; // rcx
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v13; // rdx
  _WDF_REQUEST_FORWARD_OPTIONS *v14; // r9
  int v16; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxIoQueue *queue; // [rsp+60h] [rbp+8h] BYREF
  void *PPObject; // [rsp+78h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)ParentDeviceQueue,
    0x1003u,
    (void **)&queue);
  m_Globals = queue->m_Globals;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
  if ( !ForwardOptions )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( ForwardOptions->Size != 8 )
  {
    v8 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      v7,
      6u,
      0x4Au,
      WPP_FxRequestApi_cpp_Traceguids,
      ForwardOptions,
      8,
      ForwardOptions->Size,
      -1073741820);
    return v8;
  }
  _a3 = ForwardOptions->Flags;
  if ( (_a3 & 0xFFFFFFFE) != 0 )
  {
    v8 = -1073741811;
    WPP_IFR_SF_qDDd(m_Globals, v7, 6u, 0x4Bu, WPP_FxRequestApi_cpp_Traceguids, ForwardOptions, _a3, 1u);
    return v8;
  }
  if ( FxRequest::GetCurrentQueue((FxRequest *)PPObject) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v11);
    return (unsigned int)FxIoQueue::ForwardRequestToParent(CurrentQueue, queue, v13, v14);
  }
  if ( m_Globals->FxVerifierOn )
  {
    v16 = Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(m_Globals, v10);
    v10 = (FxRequest *)PPObject;
    v8 = v16;
  }
  else
  {
    v8 = 0;
  }
  if ( (v8 & 0x80000000) == 0 )
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(queue, v10, 1u);
  return v8;
}
