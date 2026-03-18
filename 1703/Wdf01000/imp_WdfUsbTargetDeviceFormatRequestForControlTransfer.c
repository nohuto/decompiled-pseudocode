/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C008B590
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0091E1C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForControlTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        WDFMEMORY__ *TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffset)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ *_a3; // rdi
  _WDFMEMORY_OFFSET *v11; // rsi
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  __int64 result; // rax
  int _a4; // esi
  _WDF_USB_CONTROL_SETUP_PACKET *m_RequestContext; // rax
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxRequestBuffer buf; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+38h]
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+D8h] [rbp+58h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  _a3 = TransferMemory;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Request, TransferMemory);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !_a3 )
  {
    pMemory = 0LL;
LABEL_15:
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
    _a4 = FxUsbDevice::FormatControlRequest(pUsbDevice, pRequest, SetupPacket, &buf);
    if ( _a4 >= 0 )
    {
      m_RequestContext = (_WDF_USB_CONTROL_SETUP_PACKET *)pRequest->m_RequestContext;
      m_RequestContext[14] = *SetupPacket;
      if ( pMemory )
        m_RequestContext[13] = (_WDF_USB_CONTROL_SETUP_PACKET)_a3;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(m_Globals, 5u, 0xEu, 0x1Eu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Request, _a3, _a4);
    return (unsigned int)_a4;
  }
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)_a3, 0x100Au, (void **)&pMemory);
  v11 = TransferOffset;
  if ( !TransferOffset )
    goto LABEL_13;
  BufferLength = TransferOffset->BufferLength;
  v13 = BufferLength + TransferOffset->BufferOffset;
  if ( v13 >= BufferLength )
  {
    v14 = BufferLength + TransferOffset->BufferOffset;
    if ( v14 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
    result = 0LL;
  }
  else
  {
    result = v13 < BufferLength ? 0xC0000095 : 0;
  }
  if ( (int)result >= 0 )
  {
LABEL_13:
    FxRequestBuffer::SetMemory(&buf, pMemory, v11);
    goto LABEL_15;
  }
  return result;
}
