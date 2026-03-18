/*
 * XREFs of imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008B2C8 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C008B4A4 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DAB8 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendControlTransferSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred)
{
  unsigned __int64 _a1; // r14
  FxUsbDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  int v13; // edi
  unsigned int Flags; // edx
  FxRequestBase *_a2; // rcx
  unsigned __int64 v16; // rax
  int v17; // eax
  FxUsbDevice *pUsbDevice; // [rsp+48h] [rbp-B8h] BYREF
  FxRequestBuffer buf; // [rsp+50h] [rbp-B0h] BYREF
  FxSyncRequest v21; // [rsp+70h] [rbp-90h] BYREF
  FxUsbDeviceControlContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+328h] [rbp+228h]

  _a1 = UsbDevice;
  LOWORD(UsbDevice) = 0;
  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  if ( !_a1 )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v10 = (FxUsbDevice *)(~_a1 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (_a1 & 1) != 0 )
  {
    UsbDevice = LOWORD(v10->__vftable);
    v10 = (FxUsbDevice *)((char *)v10 - UsbDevice);
  }
  if ( v10->m_Type == 4610 )
  {
    pUsbDevice = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pUsbDevice, (void *)_a1, 0x1202u, UsbDevice);
    v10 = pUsbDevice;
  }
  m_Globals = v10->m_Globals;
  FxUsbDeviceControlContext::FxUsbDeviceControlContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v21, m_Globals, &context, (unsigned __int64)Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbDeviceAPI_cpp_Traceguids, (const void *)_a1);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      v13 = -1073741808;
      goto LABEL_40;
    }
  }
  if ( RequestOptions )
  {
    if ( RequestOptions->Size != 16 )
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v13 = -1073741820;
      goto LABEL_40;
    }
    Flags = RequestOptions->Flags;
    if ( (Flags & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(
        m_Globals,
        Flags,
        6u,
        0xBu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        Flags,
        0xFu);
LABEL_24:
      v13 = -1073741811;
      goto LABEL_40;
    }
    if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
    {
      WPP_IFR_SF_qDd(
        m_Globals,
        Flags,
        6u,
        0xCu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        8u,
        Flags);
      goto LABEL_24;
    }
  }
  v13 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 3);
  if ( v13 >= 0 )
  {
    v13 = FxUsbDevice::FormatControlRequest(pUsbDevice, v21.m_TrueRequest, SetupPacket, &buf);
    if ( v13 >= 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = v21.m_TrueRequest;
        if ( v21.m_TrueRequest->m_ObjectSize )
          v16 = (unsigned __int64)v21.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v16 = 0LL;
        if ( v16 )
          _a2 = (FxRequestBase *)v16;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbDeviceAPI_cpp_Traceguids, (const void *)_a1, _a2);
      }
      v17 = FxIoTarget::SubmitSync(pUsbDevice, v21.m_TrueRequest, RequestOptions, 0LL);
      v13 = v17;
      if ( BytesTransferred )
      {
        if ( v17 < 0 )
          *BytesTransferred = 0;
        else
          *BytesTransferred = context.m_Urb->TransferBufferLength;
      }
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbDeviceAPI_cpp_Traceguids, (const void *)_a1, v13);
  }
LABEL_40:
  FxSyncRequest::~FxSyncRequest(&v21);
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
  return (unsigned int)v13;
}
