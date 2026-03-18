/*
 * XREFs of ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0092BEC
 * Callers:
 *     imp_WdfUsbTargetDeviceResetPortSynchronously @ 0x1C008BC10 (imp_WdfUsbTargetDeviceResetPortSynchronously.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008D164 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00102B0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0066250 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C00673EC (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0067484 (--0FxIoContext@@QEAA@XZ.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0088690 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C008ED58 (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 */

__int64 __fastcall FxUsbDevice::Reset(FxUsbDevice *this)
{
  __int64 v2; // rdx
  int v3; // edi
  unsigned __int8 v4; // r8
  FxRequestBuffer emptyBuffer; // [rsp+40h] [rbp-C0h] BYREF
  FxIoContext context; // [rsp+60h] [rbp-A0h] BYREF
  FxSyncRequest request; // [rsp+110h] [rbp+10h] BYREF

  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, &context, 0LL);
  emptyBuffer.DataType = FxRequestBufferUnspecified;
  memset(&emptyBuffer.u, 0, sizeof(emptyBuffer.u));
  v3 = FxIoTarget::FormatIoctlRequest(this, request.m_TrueRequest, 0x220007u, 1u, &emptyBuffer, &emptyBuffer);
  if ( v3 >= 0 )
  {
    FxUsbDevice::CancelSentIo(this, v2, v4);
    v3 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(this, (FxRequest *)request.m_TrueRequest, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v3;
}
