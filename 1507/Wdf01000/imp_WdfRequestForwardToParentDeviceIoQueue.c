/*
 * XREFs of imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C006E660
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C006DED4 (WPP_IFR_SF_qDDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0095B4C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C00967D0 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00D05D0 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 */

__int64 __fastcall imp_WdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  FxIoQueue *v6; // r11
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest *v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int _a3; // eax
  FxRequest *v13; // rcx
  FxRequest *v14; // r10
  FxIoQueue *v15; // r11
  FxIoQueue *CurrentQueue; // rax
  _WDF_REQUEST_FORWARD_OPTIONS *v17; // r9
  FxRequest *v18; // r10
  FxIoQueue *v19; // r11
  int v21; // eax
  void *PPObject; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxIoQueue *queue; // [rsp+80h] [rbp+18h] BYREF

  if ( !ParentDeviceQueue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v6 = (FxIoQueue *)(~ParentDeviceQueue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (ParentDeviceQueue & 1) != 0 )
  {
    Offset = LOWORD(v6->FxNonPagedObject::FxObject::__vftable);
    v6 = (FxIoQueue *)((char *)v6 - Offset);
  }
  if ( v6->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&queue, (void *)ParentDeviceQueue, 0x1003u, Offset);
    v6 = queue;
  }
  m_Globals = v6->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v6->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Request & 1) != 0 )
  {
    v10 = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4104 )
  {
    PPObject = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, &PPObject, (void *)Request, 0x1008u, v10);
    v9 = (FxRequest *)PPObject;
  }
  if ( !ForwardOptions )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( ForwardOptions->Size != 8 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      Request,
      6u,
      0x4Au,
      WPP_FxRequestApi_cpp_Traceguids,
      ForwardOptions,
      8,
      ForwardOptions->Size,
      -1073741820);
    return v11;
  }
  _a3 = ForwardOptions->Flags;
  if ( (_a3 & 0xFFFFFFFE) != 0 )
  {
    v11 = -1073741811;
    WPP_IFR_SF_qDDd(m_Globals, Request, 6u, 0x4Bu, WPP_FxRequestApi_cpp_Traceguids, ForwardOptions, _a3, 1u);
    return v11;
  }
  if ( FxRequest::GetCurrentQueue(v9) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v13);
    return (unsigned int)FxIoQueue::ForwardRequestToParent(CurrentQueue, v19, v18, v17);
  }
  if ( m_Globals->FxVerifierOn )
  {
    v21 = Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(m_Globals, v14);
    v15 = queue;
    v11 = v21;
    v14 = (FxRequest *)PPObject;
  }
  else
  {
    v11 = 0;
  }
  if ( (v11 & 0x80000000) == 0 )
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(v15, v14, 1u);
  return v11;
}
