/*
 * XREFs of ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0080698
 * Callers:
 *     imp_WdfUsbTargetPipeReadSynchronously @ 0x1C007A280 (imp_WdfUsbTargetPipeReadSynchronously.c)
 *     imp_WdfUsbTargetPipeWriteSynchronously @ 0x1C007A750 (imp_WdfUsbTargetPipeWriteSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0019D80 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0034358 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0064ADC (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C007F3FC (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C007F5DC (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 */

__int64 __fastcall FxUsbPipe::_SendTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred,
        unsigned int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v11; // ebx
  FxRequestBase *v12; // r8
  FxRequestBase *_a2; // rax
  const _GUID *traceGuid; // r8
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v18; // [rsp+70h] [rbp-90h] BYREF
  FxUsbPipeTransferContext context; // [rsp+1A0h] [rbp+A0h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeTransferContext::FxUsbPipeTransferContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v18, m_Globals, &context, Request);
  if ( BytesTransferred )
    *BytesTransferred = 0;
  v11 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v11 >= 0 )
  {
    v11 = FxValidateRequestOptions(m_Globals, RequestOptions, v12);
    if ( v11 >= 0 )
    {
      if ( !MemoryDescriptor
        || (v11 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 0), v11 >= 0) )
      {
        v11 = FxUsbPipe::FormatTransferRequest(pUsbPipe, v18.m_TrueRequest, &buf, Flags);
        if ( v11 >= 0 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            _a2 = FxRequestBase::GetTraceObjectHandle(v18.m_TrueRequest);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, traceGuid, Pipe, _a2);
          }
          v11 = FxIoTarget::SubmitSync(pUsbPipe, v18.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesTransferred )
            *BytesTransferred = context.m_Urb->TransferBufferLength;
        }
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x20u, WPP_FxUsbPipe_cpp_Traceguids, Pipe, v11);
      }
    }
  }
  FxSyncRequest::~FxSyncRequest(&v18);
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(&context);
  return (unsigned int)v11;
}
