/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C008A330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092724 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        unsigned __int64 Request,
        unsigned __int64 UrbMemory,
        _WDFMEMORY_OFFSET *UrbOffsets)
{
  WDFUSBPIPE__ *_a1; // r14
  FxUsbPipe *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 *v10; // rcx
  __int64 Offset; // rdx
  FxRequest *v12; // r10
  __int64 v13; // rdx
  _WDFMEMORY_OFFSET *v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ebx
  int _a4; // eax
  FxRequestContext *m_RequestContext; // rdx
  FxUsbPipe *pUsbPipe; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+B8h] [rbp+38h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a1 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v8 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Pipe = LOWORD(v8->__vftable);
    v8 = (FxUsbPipe *)((char *)v8 - Pipe);
  }
  if ( v8->m_Type == 4611 )
  {
    pUsbPipe = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pUsbPipe, _a1, 0x1203u, Pipe);
    v8 = pUsbPipe;
  }
  m_Globals = v8->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(
      m_Globals,
      5u,
      0xEu,
      0x29u,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      _a1,
      (const void *)Request,
      (const void *)UrbMemory);
  if ( !UrbMemory )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x100AuLL);
  v10 = (unsigned __int16 *)(~UrbMemory & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UrbMemory & 1) != 0 )
  {
    Offset = *v10;
    v10 = (unsigned __int16 *)((char *)v10 - Offset);
  }
  if ( v10[4] == 4106 )
  {
    pMemory = (IFxMemory *)v10;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v10, (void **)&pMemory, (void *)UrbMemory, 0x100Au, Offset);
    v10 = (unsigned __int16 *)pMemory;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v12 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  v13 = 0LL;
  if ( (Request & 1) != 0 )
  {
    v13 = LOWORD(v12->__vftable);
    v12 = (FxRequest *)((char *)v12 - v13);
  }
  if ( v12->m_Type == 4104 )
  {
    pRequest = v12;
  }
  else
  {
    FxObjectHandleGetPtrQI(v12, (void **)&pRequest, (void *)Request, 0x1008u, v13);
    v10 = (unsigned __int16 *)pMemory;
  }
  v14 = UrbOffsets;
  if ( UrbOffsets )
  {
    v15 = UrbOffsets->BufferLength + UrbOffsets->BufferOffset;
    if ( v15 < UrbOffsets->BufferLength
      || v15 > (*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)v10 + 8LL))(v10, v13) )
    {
      return 3221225621LL;
    }
    v10 = (unsigned __int16 *)pMemory;
  }
  v16 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)v10 + 8LL))(v10, v13);
  if ( v14 && v14->BufferOffset )
    v16 -= v14->BufferOffset;
  if ( v16 >= 0x18 )
  {
    FxRequestBuffer::SetMemory(&buf, pMemory, v14);
    _a4 = FxFormatUrbRequest(m_Globals, pUsbPipe, pRequest, &buf, pUsbPipe->m_UrbType, pUsbPipe->m_USBDHandle);
    v18 = _a4;
    if ( _a4 >= 0 )
    {
      m_RequestContext = pRequest->m_RequestContext;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = 9;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = UrbMemory;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(
        m_Globals,
        5u,
        0xEu,
        0x2Bu,
        WPP_FxUsbPipeAPI_cpp_Traceguids,
        _a1,
        (const void *)Request,
        (const void *)UrbMemory,
        _a4);
  }
  else
  {
    v17 = pMemory->GetBufferSize(pMemory);
    v18 = -1073741811;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xEu,
      0x2Au,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      (const void *)UrbMemory,
      v17,
      -1073741811);
  }
  return v18;
}
