/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0090FB0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C009177C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0020590 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00906AC (-DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // rsi
  unsigned __int8 v5; // r8
  FxRequestContext *v6; // rax
  IFxMemory *v8; // rdi
  size_t v9; // rbx
  void *v10; // rax
  IFxMemory *v11; // rdx
  int v12; // ebx
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int64 v14; // rax
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
  FxRequest::Reuse(Request, &params, v5);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) >= 0 )
  {
    v8 = &pMemory->IFxMemory;
    v9 = pMemory->GetBufferSize(&pMemory->IFxMemory);
    v10 = (void *)v8->GetBuffer(v8);
    memset(v10, 0, v9);
    if ( pMemory )
      v11 = &pMemory->IFxMemory;
    else
      v11 = 0LL;
    FxRequestBuffer::SetMemory(&buf, v11, &this->m_Offsets);
    v12 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    if ( v12 >= 0 )
    {
      m_RequestContext = Request->m_RequestContext;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = 6;
      if ( pMemory->m_ObjectSize )
        v14 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v14 = 0LL;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = v14;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    else if ( !Request->m_RequestContext )
    {
      FxObject::DeleteFromFailedCreate(pMemory);
    }
    return (unsigned int)v12;
  }
  else
  {
    v6 = Request->m_RequestContext;
    if ( v6 )
      v6->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
}
