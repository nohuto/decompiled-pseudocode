/*
 * XREFs of ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C0091B24
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C008A120 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C008A640 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C005D38C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 */

__int64 __fastcall FxUsbPipe::_FormatTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Pipe,
        WDFREQUEST__ *Request,
        unsigned __int64 TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffsets,
        unsigned int Flags)
{
  WDFREQUEST__ *_a2; // rsi
  WDFUSBPIPE__ *_a1; // r13
  FxUsbPipe *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxRequest *v11; // rcx
  __int64 Offset; // rdx
  _WDFMEMORY_OFFSET *v13; // rdi
  IFxMemory *v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  int _a4; // ebx
  char v18; // r14
  FxRequestContext *m_RequestContext; // rsi
  unsigned __int64 BufferOffset; // rax
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxRequestBuffer buf; // [rsp+58h] [rbp-28h] BYREF
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  FxUsbPipe *pUsbPipe; // [rsp+C8h] [rbp+48h] BYREF
  WDFREQUEST__ *v26; // [rsp+D0h] [rbp+50h]

  v26 = Request;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a2 = Request;
  _a1 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  v9 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Pipe = LOWORD(v9->__vftable);
    v9 = (FxUsbPipe *)((char *)v9 - Pipe);
  }
  if ( v9->m_Type == 4611 )
    pUsbPipe = v9;
  else
    FxObjectHandleGetPtrQI(v9, (void **)&pUsbPipe, _a1, 0x1203u, Pipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( !_a2 )
    FxVerifierBugCheckWorker(pUsbPipe->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v11 = (FxRequest *)(~(unsigned __int64)_a2 & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)_a2 & 1) != 0 )
  {
    Offset = LOWORD(v11->__vftable);
    v11 = (FxRequest *)((char *)v11 - Offset);
  }
  if ( v11->m_Type == 4104 )
    pRequest = v11;
  else
    FxObjectHandleGetPtrQI(v11, (void **)&pRequest, _a2, 0x1008u, Offset);
  v13 = TransferOffsets;
  if ( TransferMemory )
  {
    v14 = (IFxMemory *)(~TransferMemory & 0xFFFFFFFFFFFFFFF8uLL);
    v15 = 0LL;
    if ( (TransferMemory & 1) != 0 )
    {
      v15 = LOWORD(v14->__vftable);
      v14 = (IFxMemory *)((char *)v14 - v15);
    }
    if ( LOWORD(v14[1].__vftable) == 4106 )
    {
      pMemory = v14;
    }
    else
    {
      FxObjectHandleGetPtrQI((FxObject *)v14, (void **)&pMemory, (void *)TransferMemory, 0x100Au, v15);
      v14 = pMemory;
    }
    if ( v13 )
    {
      v16 = v13->BufferLength + v13->BufferOffset;
      if ( v16 < v13->BufferLength || v16 > ((__int64 (__fastcall *)(IFxMemory *, __int64))v14->GetBufferSize)(v14, v15) )
      {
        _a4 = -1073741675;
        goto $Done_57;
      }
      v14 = pMemory;
    }
    FxRequestBuffer::SetMemory(&buf, v14, v13);
  }
  else
  {
    pMemory = 0LL;
  }
  v18 = Flags;
  _a4 = FxUsbPipe::FormatTransferRequest(pUsbPipe, pRequest, &buf, Flags);
  if ( _a4 >= 0 )
  {
    m_RequestContext = pRequest->m_RequestContext;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = TransferMemory;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = (void *)(unsigned int)FxRequestBuffer::GetBufferLength(&buf);
    if ( v13 )
      BufferOffset = v13->BufferOffset;
    else
      BufferOffset = 0LL;
    m_RequestContext[1].m_CompletionParams.IoStatus.Information = BufferOffset;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    HIDWORD(m_RequestContext[1].__vftable) = ((v18 & 1) != 0) + 5;
    _a2 = v26;
  }
$Done_57:
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqd(
      m_Globals,
      5u,
      0xEu,
      0x1Du,
      WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      _a2,
      (const void *)TransferMemory,
      _a4);
  return (unsigned int)_a4;
}
