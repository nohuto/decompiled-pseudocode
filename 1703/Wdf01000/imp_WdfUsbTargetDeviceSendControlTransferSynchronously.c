/*
 * XREFs of imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C008C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0028D90 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0066250 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C00787E8 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008E888 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C008EA94 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0091E1C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
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
  FxRequestBase *_a2; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v19; // [rsp+70h] [rbp-90h] BYREF
  FxUsbDeviceControlContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+328h] [rbp+228h]

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  FxUsbDeviceControlContext::FxUsbDeviceControlContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v19, m_Globals, &context, Request);
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
        v11 = FxUsbDevice::FormatControlRequest(pUsbDevice, v19.m_TrueRequest, SetupPacket, &buf);
        if ( v11 >= 0 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            _a2 = v19.m_TrueRequest;
            if ( v19.m_TrueRequest->m_ObjectSize )
              v14 = (unsigned __int64)v19.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v14 = 0LL;
            if ( v14 )
              _a2 = (FxRequestBase *)v14;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, _a2);
          }
          v15 = FxIoTarget::SubmitSync(pUsbDevice, (FxRequest *)v19.m_TrueRequest, RequestOptions, 0LL);
          v11 = v15;
          if ( BytesTransferred )
          {
            if ( v15 < 0 )
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
  FxSyncRequest::~FxSyncRequest(&v19);
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
  return (unsigned int)v11;
}
