/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0034358
 * Callers:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C000186C (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0003BB4 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0080698 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0001F68 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003E5C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0019E44 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0025074 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0056574 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C00565A4 (-IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056984 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C007F3FC (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C008FA4C (USBD_UrbAllocate.c)
 */

__int64 __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  const void *v8; // rbx
  __int64 result; // rax
  unsigned __int64 BufferLength; // r8
  signed __int8 EndpointAddress; // al
  unsigned __int16 v12; // r9
  int _a3; // eax
  unsigned int v14; // esi
  FxRequestContext *m_RequestContext; // rsi
  _FX_URB_TYPE FxUrbTypeForRequest; // r14
  FxUsbPipeTransferContext *v17; // rax
  FxRequestContext *v18; // rax
  USBD_HANDLE__ *m_USBDHandle; // r15
  int v20; // r14d
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *PipeHandle; // rcx
  _LOCK_OPERATION _a1; // [rsp+28h] [rbp-50h]
  _MDL *pMdl; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 0LL;
  if ( !FxUsbPipe::IsType(this, WdfUsbPipeTypeBulk) && !FxUsbPipe::IsType(this, WdfUsbPipeTypeInterrupt) )
  {
    if ( this->m_ObjectSize )
      v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, v8, -1073741808);
    return 3221225488LL;
  }
  BufferLength = (unsigned int)FxRequestBuffer::GetBufferLength(Buffer);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (TransferFlags & 1) != 0 )
  {
    if ( EndpointAddress >= 0 )
    {
      v12 = 14;
LABEL_10:
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v12, WPP_FxUsbPipeKm_cpp_Traceguids, this);
      return 3221225488LL;
    }
    if ( this->m_CheckPacketSize && BufferLength % this->m_PipeInformation.MaximumPacketSize )
      return 3221225990LL;
  }
  else if ( EndpointAddress < 0 )
  {
    v12 = 15;
    goto LABEL_10;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v14 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, (__int64)Request, _a3);
    return v14;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    v17 = (FxUsbPipeTransferContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x120uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
    if ( v17 )
    {
      FxUsbPipeTransferContext::FxUsbPipeTransferContext(v17, FxUrbTypeForRequest);
      m_RequestContext = v18;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return 3221225626LL;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      m_USBDHandle = this->m_USBDHandle;
      if ( m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length )
      {
        v20 = -1073741436;
LABEL_28:
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return (unsigned int)v20;
      }
      v20 = USBD_UrbAllocate(
              this->m_USBDHandle,
              (_URB **)&m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length);
      if ( v20 < 0 )
        goto LABEL_28;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((Buffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (m_Globals = this->m_Globals,
        _a1 = this->m_PipeInformation.EndpointAddress >> 7,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   Buffer,
                   m_Globals,
                   &pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestMemory,
                   &m_RequestContext[2].m_RequestType,
                   _a1,
                   0,
                   0LL),
        (int)result >= 0) )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    PipeHandle = this->m_PipeInformation.PipeHandle;
    *(_DWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 32) = TransferFlags;
    *(_QWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 24) = PipeHandle;
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length,
      (_FX_URB_TYPE)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length != (_QWORD)m_RequestContext
                                                                                            + 136),
      this->m_USBDHandle);
    return 0LL;
  }
  return result;
}
