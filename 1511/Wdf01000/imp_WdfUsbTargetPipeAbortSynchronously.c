/*
 * XREFs of imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0079BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0064ADC (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C007F3A8 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C007F584 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007F8D4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeAbortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v8; // ebx
  FxRequestBase *v9; // r8
  FxRequestBase *_a2; // rax
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest v13; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+180h] [rbp+80h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeRequestContext::FxUsbPipeRequestContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v13, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  v8 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v8 >= 0 )
  {
    v8 = FxValidateRequestOptions(m_Globals, RequestOptions, v9);
    if ( v8 >= 0 )
    {
      v8 = FxUsbPipe::FormatAbortRequest(pUsbPipe, v13.m_TrueRequest);
      if ( v8 >= 0 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          _a2 = FxRequestBase::GetTraceObjectHandle(v13.m_TrueRequest);
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
        }
        v8 = FxIoTarget::SubmitSync(pUsbPipe, v13.m_TrueRequest, RequestOptions, 0LL);
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, v8);
    }
    else
    {
      WPP_IFR_SF_(m_Globals, 2u, 0xEu, 0x19u, WPP_FxUsbPipeAPI_cpp_Traceguids);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v13);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v8;
}
