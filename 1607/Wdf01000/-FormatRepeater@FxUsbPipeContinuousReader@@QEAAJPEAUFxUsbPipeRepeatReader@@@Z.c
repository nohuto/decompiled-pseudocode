/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00013F8 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008879C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0089800 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00015FC (-DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C001B770 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0029774 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0039334 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // rsi
  IFxMemory *v5; // rdi
  size_t v6; // rbx
  void *v7; // rax
  IFxMemory *v8; // rdx
  int v9; // ebx
  FxRequestContext *v10; // rcx
  unsigned __int64 v11; // rax
  FxRequestContext *m_RequestContext; // rax
  _WDF_REQUEST_REUSE_PARAMS params; // [rsp+20h] [rbp-40h] BYREF
  FxRequestBuffer buf; // [rsp+38h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+90h] [rbp+30h] BYREF

  Request = Repeater->Request;
  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  FxUsbPipeContinuousReader::DeleteMemory(this, Request);
  *(_QWORD *)&params.Size = 24LL;
  *(&params.Status + 1) = 0;
  params.Status = -1073741637;
  params.NewIrp = 0LL;
  FxRequest::Reuse(Request, &params);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) < 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext )
      m_RequestContext->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
  else
  {
    v5 = &pMemory->IFxMemory;
    v6 = pMemory->GetBufferSize(&pMemory->IFxMemory);
    v7 = (void *)v5->GetBuffer(v5);
    memset(v7, 0, v6);
    if ( pMemory )
      v8 = &pMemory->IFxMemory;
    else
      v8 = 0LL;
    FxRequestBuffer::SetMemory(&buf, v8, &this->m_Offsets);
    v9 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    if ( v9 < 0 )
    {
      if ( !Request->m_RequestContext )
        FxObject::DeleteFromFailedCreate(pMemory);
    }
    else
    {
      v10 = Request->m_RequestContext;
      v10->m_CompletionParams.Type = WdfRequestTypeUsb;
      v10->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v10[1];
      HIDWORD(v10[1].__vftable) = 6;
      if ( pMemory->m_ObjectSize )
        v11 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v11 = 0LL;
      *(_QWORD *)&v10[1].m_CompletionParams.Size = v11;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    return (unsigned int)v9;
  }
}
