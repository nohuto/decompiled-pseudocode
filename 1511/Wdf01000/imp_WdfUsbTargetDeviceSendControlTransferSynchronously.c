/*
 * XREFs of imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00790B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0019D80 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0064ADC (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C007A888 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C007AA64 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007CE0C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendControlTransferSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v11; // ebx
  FxRequestBase *v12; // r8
  FxRequestBase *_a2; // rax
  int v14; // eax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v18; // [rsp+70h] [rbp-90h] BYREF
  FxUsbDeviceControlContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+328h] [rbp+228h]

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  FxUsbDeviceControlContext::FxUsbDeviceControlContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v18, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v11 >= 0 )
  {
    v11 = FxValidateRequestOptions(m_Globals, RequestOptions, v12);
    if ( v11 >= 0 )
    {
      v11 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 3);
      if ( v11 >= 0 )
      {
        v11 = FxUsbDevice::FormatControlRequest(pUsbDevice, v18.m_TrueRequest, SetupPacket, &buf);
        if ( v11 >= 0 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            _a2 = FxRequestBase::GetTraceObjectHandle(v18.m_TrueRequest);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, _a2);
          }
          v14 = FxIoTarget::SubmitSync(pUsbDevice, v18.m_TrueRequest, RequestOptions, 0LL);
          v11 = v14;
          if ( BytesTransferred )
          {
            if ( v14 < 0 )
              *BytesTransferred = 0;
            else
              *BytesTransferred = context.m_Urb->TransferBufferLength;
          }
        }
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, v11);
      }
    }
  }
  FxSyncRequest::~FxSyncRequest(&v18);
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
  return (unsigned int)v11;
}
