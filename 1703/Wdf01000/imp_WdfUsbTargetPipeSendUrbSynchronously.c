/*
 * XREFs of imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008A0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00052E4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0066250 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006751C (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C00787E8 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory *Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // ebx
  FxRequestBase *v10; // r8
  FxRequestBase *_a2; // rcx
  unsigned __int64 v12; // rax
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v16; // [rsp+70h] [rbp-90h] BYREF
  FxUsbUrbContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+178h]

  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbUrbContext::FxUsbUrbContext(&context);
  FxSyncRequest::FxSyncRequest(&v16, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x26u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Urb);
  if ( !Urb )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( _a3 >= 0 )
  {
    _a3 = FxValidateRequestOptions(m_Globals, RequestOptions, v10);
    if ( _a3 >= 0 )
    {
      buf.DataType = FxRequestBufferBuffer;
      buf.u.Memory.Memory = Urb;
      buf.u.Mdl.Length = 0;
      _a3 = FxFormatUrbRequest(
              m_Globals,
              pUsbPipe,
              v16.m_TrueRequest,
              &buf,
              pUsbPipe->m_UrbType,
              pUsbPipe->m_USBDHandle);
      if ( _a3 >= 0 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          _a2 = v16.m_TrueRequest;
          if ( v16.m_TrueRequest->m_ObjectSize )
            v12 = (unsigned __int64)v16.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v12 = 0LL;
          if ( v12 )
            _a2 = (FxRequestBase *)v12;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x27u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
        }
        _a3 = FxIoTarget::SubmitSync(pUsbPipe, (FxRequest *)v16.m_TrueRequest, RequestOptions, 0LL);
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x28u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, (__int64)Urb, _a3);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v16);
  return (unsigned int)_a3;
}
