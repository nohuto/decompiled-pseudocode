/*
 * XREFs of ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C00013E0
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C003CC40 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C003CCE0 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00034B8 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C003C9B0 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 */

__int64 __fastcall FxUsbPipe::_FormatTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffsets,
        unsigned int Flags)
{
  WDFUSBPIPE__ *_a1; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _WDFMEMORY_OFFSET *v10; // r14
  char v11; // si
  int _a4; // ebx
  FxRequestContext *m_RequestContext; // rdi
  unsigned __int64 BufferOffset; // rax
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxRequestBuffer buf; // [rsp+58h] [rbp-28h] BYREF
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  WDFUSBPIPE__ *v22; // [rsp+C8h] [rbp+48h]
  FxUsbPipe *pUsbPipe; // [rsp+D8h] [rbp+58h] BYREF

  v22 = Pipe;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a1 = Pipe;
  FxObjectHandleGetPtr(FxDriverGlobals, Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxObjectHandleGetPtr(m_Globals, Request, 0x1008u, (void **)&pRequest);
  v10 = TransferOffsets;
  if ( !TransferMemory )
  {
    pMemory = 0LL;
LABEL_4:
    v11 = Flags;
    _a4 = FxUsbPipe::FormatTransferRequest(pUsbPipe, pRequest, &buf, Flags);
    if ( _a4 >= 0 )
    {
      m_RequestContext = pRequest->m_RequestContext;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = TransferMemory;
      m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = (void *)FxRequestBuffer::GetBufferLength(&buf);
      if ( v10 )
        BufferOffset = v10->BufferOffset;
      else
        BufferOffset = 0LL;
      m_RequestContext[1].m_CompletionParams.IoStatus.Information = BufferOffset;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = (v11 & 1) + 5;
      _a1 = v22;
    }
    goto $Done;
  }
  FxObjectHandleGetPtr(m_Globals, TransferMemory, 0x100Au, (void **)&pMemory);
  if ( !v10 )
    goto LABEL_3;
  BufferLength = v10->BufferLength;
  v17 = BufferLength + v10->BufferOffset;
  if ( v17 >= BufferLength )
  {
    v18 = BufferLength + v10->BufferOffset;
    if ( v18 > pMemory->GetBufferSize(pMemory) )
    {
      _a4 = -1073741675;
      goto $Done;
    }
    _a4 = 0;
  }
  else
  {
    _a4 = v17 < BufferLength ? 0xC0000095 : 0;
  }
  if ( _a4 >= 0 )
  {
LABEL_3:
    FxRequestBuffer::SetMemory(&buf, pMemory, v10);
    goto LABEL_4;
  }
$Done:
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqd(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxUsbPipe_cpp_Traceguids, _a1, Request, TransferMemory, _a4);
  return (unsigned int)_a4;
}
