/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C003D200
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00052E4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *UrbMemory,
        _WDFMEMORY_OFFSET *UrbOffsets)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDFMEMORY_OFFSET *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 result; // rax
  int _a4; // eax
  FxRequestContext *m_RequestContext; // r8
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxRequestBuffer buf; // [rsp+58h] [rbp-28h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]
  IFxMemory *pMemory; // [rsp+B0h] [rbp+30h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+C8h] [rbp+48h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(m_Globals, 5u, 0xEu, 0xEu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Request, UrbMemory);
  if ( !UrbMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)UrbMemory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v9 = UrbOffsets;
  if ( !UrbOffsets )
    goto LABEL_5;
  BufferLength = UrbOffsets->BufferLength;
  v17 = BufferLength + UrbOffsets->BufferOffset;
  if ( v17 >= BufferLength )
  {
    v18 = BufferLength + UrbOffsets->BufferOffset;
    if ( v18 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
    result = 0LL;
  }
  else
  {
    result = v17 < BufferLength ? 0xC0000095 : 0;
  }
  if ( (int)result >= 0 )
  {
LABEL_5:
    v10 = pMemory->GetBufferSize(pMemory);
    if ( v9 && v9->BufferOffset )
      v10 -= v9->BufferOffset;
    if ( v10 >= 0x18 )
    {
      FxRequestBuffer::SetMemory(&buf, pMemory, v9);
      _a4 = FxFormatUrbRequest(m_Globals, pUsbDevice, pRequest, &buf, pUsbDevice->m_UrbType, pUsbDevice->m_USBDHandle);
      v12 = _a4;
      if ( _a4 >= 0 )
      {
        m_RequestContext = pRequest->m_RequestContext;
        m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
        m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
        HIDWORD(m_RequestContext[1].__vftable) = 4;
        *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = UrbMemory;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqqd(
          m_Globals,
          5u,
          0xEu,
          0x10u,
          WPP_FxUsbDeviceApiKm_cpp_Traceguids,
          UsbDevice,
          Request,
          UrbMemory,
          _a4);
    }
    else
    {
      v11 = pMemory->GetBufferSize(pMemory);
      v12 = -1073741811;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0xFu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UrbMemory, v11, -1073741811);
    }
    return v12;
  }
  return result;
}
