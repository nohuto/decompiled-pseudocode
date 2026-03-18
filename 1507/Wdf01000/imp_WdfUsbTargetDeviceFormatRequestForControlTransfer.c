/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0086E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DAB8 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForControlTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int64 Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        WDFMEMORY__ *TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffset)
{
  WDFUSBDEVICE__ *_a1; // r14
  FxUsbDevice *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 _a3; // rsi
  IFxMemory *v12; // rcx
  __int64 Offset; // rdx
  _WDFMEMORY_OFFSET *v14; // rdi
  unsigned __int64 v15; // r12
  FxRequest *v17; // rcx
  __int64 v18; // rdx
  int _a4; // edi
  _WDF_USB_CONTROL_SETUP_PACKET *m_RequestContext; // rax
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+28h]
  IFxMemory *pMemory; // [rsp+B8h] [rbp+38h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a1 = (WDFUSBDEVICE__ *)UsbDevice;
  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v9 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(UsbDevice) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    UsbDevice = LOWORD(v9->__vftable);
    v9 = (FxUsbDevice *)((char *)v9 - UsbDevice);
  }
  if ( v9->m_Type == 4610 )
    pUsbDevice = v9;
  else
    FxObjectHandleGetPtrQI(v9, (void **)&pUsbDevice, _a1, 0x1202u, UsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  _a3 = (unsigned __int64)TransferMemory;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(
      m_Globals,
      5u,
      0xEu,
      0x1Du,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      _a1,
      (const void *)Request,
      TransferMemory);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _a3 )
  {
    v12 = (IFxMemory *)(~_a3 & 0xFFFFFFFFFFFFFFF8uLL);
    Offset = 0LL;
    if ( (_a3 & 1) != 0 )
    {
      Offset = LOWORD(v12->__vftable);
      v12 = (IFxMemory *)((char *)v12 - Offset);
    }
    if ( LOWORD(v12[1].__vftable) == 4106 )
    {
      pMemory = v12;
    }
    else
    {
      FxObjectHandleGetPtrQI((FxObject *)v12, (void **)&pMemory, (void *)_a3, 0x100Au, Offset);
      v12 = pMemory;
    }
    v14 = TransferOffset;
    if ( TransferOffset )
    {
      v15 = TransferOffset->BufferLength + TransferOffset->BufferOffset;
      if ( v15 < TransferOffset->BufferLength
        || v15 > ((__int64 (__fastcall *)(IFxMemory *, __int64))v12->GetBufferSize)(v12, Offset) )
      {
        return 3221225621LL;
      }
      v12 = pMemory;
    }
    FxRequestBuffer::SetMemory(&buf, v12, v14);
  }
  else
  {
    pMemory = 0LL;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v17 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v18) = 0;
  if ( (Request & 1) != 0 )
  {
    v18 = LOWORD(v17->__vftable);
    v17 = (FxRequest *)((char *)v17 - v18);
  }
  if ( v17->m_Type == 4104 )
  {
    pRequest = v17;
  }
  else
  {
    FxObjectHandleGetPtrQI(v17, (void **)&pRequest, (void *)Request, 0x1008u, v18);
    v17 = pRequest;
  }
  _a4 = FxUsbDevice::FormatControlRequest(pUsbDevice, v17, SetupPacket, &buf);
  if ( _a4 >= 0 )
  {
    m_RequestContext = (_WDF_USB_CONTROL_SETUP_PACKET *)pRequest->m_RequestContext;
    m_RequestContext[14] = *SetupPacket;
    if ( pMemory )
      m_RequestContext[13] = (_WDF_USB_CONTROL_SETUP_PACKET)_a3;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqd(
      m_Globals,
      5u,
      0xEu,
      0x1Eu,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      _a1,
      (const void *)Request,
      (const void *)_a3,
      _a4);
  return (unsigned int)_a4;
}
