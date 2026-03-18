/*
 * XREFs of ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00916B0
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C0091F90 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C008391C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00847BC (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0090218 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C0090420 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C00905E8 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0090ACC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbPipe::Reset(FxUsbPipe *this)
{
  __int64 v2; // rdx
  int v3; // edi
  unsigned __int8 v4; // r8
  FxUsbPipeContinuousReader *m_Reader; // rcx
  FxSyncRequest request; // [rsp+20h] [rbp-208h] BYREF
  FxUsbPipeRequestContext context; // [rsp+150h] [rbp-D8h] BYREF

  FxUsbPipeRequestContext::FxUsbPipeRequestContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, &context, 0LL);
  v3 = FxUsbPipe::FormatResetRequest(this, request.m_TrueRequest);
  if ( v3 >= 0 )
  {
    m_Reader = this->m_Reader;
    if ( m_Reader )
      FxUsbPipeContinuousReader::CancelRepeaters(m_Reader);
    else
      FxIoTarget::CancelSentIo(this, v2, v4);
    v3 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(this, request.m_TrueRequest, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v3;
}
