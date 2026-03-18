/*
 * XREFs of imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0086AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0011970 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0062F6C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0063064 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006417C (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C00749CC (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory *Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // ebx
  FxRequestBase *v10; // r8
  FxRequestBase *_a2; // rax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v15; // [rsp+70h] [rbp-90h] BYREF
  FxUsbUrbContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+178h]

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  FxUsbUrbContext::FxUsbUrbContext(&context);
  FxSyncRequest::FxSyncRequest(&v15, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xBu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Urb);
  if ( !Urb )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( _a3 >= 0 )
  {
    _a3 = FxValidateRequestOptions(m_Globals, RequestOptions, v10);
    if ( _a3 >= 0 )
    {
      buf.u.Mdl.Length = 0;
      buf.DataType = FxRequestBufferBuffer;
      buf.u.Memory.Memory = Urb;
      _a3 = FxFormatUrbRequest(
              m_Globals,
              pUsbDevice,
              v15.m_TrueRequest,
              &buf,
              pUsbDevice->m_UrbType,
              pUsbDevice->m_USBDHandle);
      if ( _a3 >= 0 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          _a2 = FxRequestBase::GetTraceObjectHandle(v15.m_TrueRequest);
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xCu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, _a2);
        }
        _a3 = FxIoTarget::SubmitSync(pUsbDevice, v15.m_TrueRequest, RequestOptions, 0LL);
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, (__int64)Urb, _a3);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v15);
  return (unsigned int)_a3;
}
