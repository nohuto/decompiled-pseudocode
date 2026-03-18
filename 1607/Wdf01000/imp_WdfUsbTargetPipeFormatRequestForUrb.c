/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C00396E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0011970 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00132CC (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0029774 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *UrbMemory,
        _WDFMEMORY_OFFSET *UrbOffsets)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDFMEMORY_OFFSET *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  int _a4; // eax
  FxRequestContext *m_RequestContext; // r8
  unsigned __int64 v16; // r14
  FxUsbPipe *pUsbPipe; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+B0h] [rbp+30h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request, UrbMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)UrbMemory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v9 = UrbOffsets;
  if ( UrbOffsets )
  {
    v16 = UrbOffsets->BufferLength + UrbOffsets->BufferOffset;
    if ( v16 < UrbOffsets->BufferLength || v16 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
  }
  v10 = pMemory->GetBufferSize(pMemory);
  if ( v9 && v9->BufferOffset )
    v10 -= v9->BufferOffset;
  if ( v10 >= 0x18 )
  {
    FxRequestBuffer::SetMemory(&buf, pMemory, v9);
    _a4 = FxFormatUrbRequest(m_Globals, pUsbPipe, pRequest, &buf, pUsbPipe->m_UrbType, pUsbPipe->m_USBDHandle);
    v12 = _a4;
    if ( _a4 >= 0 )
    {
      m_RequestContext = pRequest->m_RequestContext;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = 9;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = UrbMemory;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(m_Globals, 5u, 0xEu, 0x2Bu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request, UrbMemory, _a4);
  }
  else
  {
    v11 = pMemory->GetBufferSize(pMemory);
    v12 = -1073741811;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxUsbPipeAPI_cpp_Traceguids, UrbMemory, v11, -1073741811);
  }
  return v12;
}
