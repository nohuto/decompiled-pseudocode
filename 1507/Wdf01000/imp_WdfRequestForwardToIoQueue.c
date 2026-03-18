/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x1C006E500
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0095AF4 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C00967D0 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D0504 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 */

int __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  FxIoQueue *v4; // r11
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxRequest *v7; // r10
  __int64 v8; // rcx
  FxRequest *v9; // rcx
  FxRequest *v10; // r10
  FxIoQueue *v11; // r11
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v13; // r10
  FxIoQueue *v14; // r11
  int result; // eax
  FxIoQueue *queue; // [rsp+40h] [rbp+8h] BYREF
  void *PPObject; // [rsp+50h] [rbp+18h] BYREF

  if ( !DestinationQueue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v4 = (FxIoQueue *)(~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DestinationQueue & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxIoQueue *)((char *)v4 - Offset);
  }
  if ( v4->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&queue, (void *)DestinationQueue, 0x1003u, Offset);
    v4 = queue;
  }
  m_Globals = v4->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v4->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v7 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v8) = 0;
  if ( (Request & 1) != 0 )
  {
    v8 = LOWORD(v7->__vftable);
    v7 = (FxRequest *)((char *)v7 - v8);
  }
  if ( v7->m_Type == 4104 )
  {
    PPObject = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, &PPObject, (void *)Request, 0x1008u, v8);
    v7 = (FxRequest *)PPObject;
  }
  if ( FxRequest::GetCurrentQueue(v7) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v9);
    return FxIoQueue::ForwardRequest(CurrentQueue, v14, v13);
  }
  else
  {
    if ( m_Globals->FxVerifierOn )
    {
      result = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, v10);
      v11 = queue;
      v10 = (FxRequest *)PPObject;
    }
    else
    {
      result = 0;
    }
    if ( result >= 0 )
      return FxIoQueue::QueueDriverCreatedRequest(v11, v10, 0);
  }
  return result;
}
