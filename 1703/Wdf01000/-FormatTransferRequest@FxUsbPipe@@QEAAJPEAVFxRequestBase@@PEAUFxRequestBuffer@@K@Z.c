/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C003C9B0
 * Callers:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C00013E0 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C000332C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C008DD20 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00034B8 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0005400 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00117C0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0028E58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C002F6D0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0066D4C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C0066D80 (-IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0067174 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008C8C8 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C00A2954 (USBD_UrbAllocate.c)
 */

__int64 __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  unsigned int BufferLength; // eax
  __int64 result; // rax
  unsigned __int16 v10; // r9
  int _a3; // eax
  unsigned int v12; // edi
  _FX_URB_TYPE FxUrbTypeForRequest; // bp
  FxUsbPipeTransferContext *v14; // rax
  FxRequestContext *m_RequestContext; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *PipeHandle; // rcx
  const void *v18; // rcx
  FxRequestContext *v19; // rax
  USBD_HANDLE__ *m_USBDHandle; // r14
  int v21; // ebp
  _LOCK_OPERATION _a1; // [rsp+28h] [rbp-50h]
  _MDL *pMdl; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( !FxUsbPipe::IsType(this, WdfUsbPipeTypeBulk) && !FxUsbPipe::IsType(this, WdfUsbPipeTypeInterrupt) )
  {
    v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v18 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, v18, -1073741808);
    return 3221225488LL;
  }
  BufferLength = FxRequestBuffer::GetBufferLength(Buffer);
  if ( (TransferFlags & 1) == 0 )
  {
    if ( (this->m_PipeInformation.EndpointAddress & 0x80u) == 0 )
      goto LABEL_13;
    v10 = 15;
    goto LABEL_11;
  }
  if ( (this->m_PipeInformation.EndpointAddress & 0x80u) == 0 )
  {
    v10 = 14;
LABEL_11:
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v10, WPP_FxUsbPipeKm_cpp_Traceguids, this);
    return 3221225488LL;
  }
  if ( this->m_CheckPacketSize && BufferLength % (unsigned __int64)this->m_PipeInformation.MaximumPacketSize )
    return 3221225990LL;
LABEL_13:
  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v12 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, (__int64)Request, _a3);
    return v12;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext && m_RequestContext->m_RequestType == 16 )
    goto LABEL_29;
  FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
  v14 = (FxUsbPipeTransferContext *)FxPoolAllocator(
                                      this->m_Globals,
                                      &this->m_Globals->FxPoolFrameworks,
                                      ExDefaultNonPagedPoolType,
                                      0x120uLL,
                                      this->m_Globals->Tag,
                                      retaddr);
  if ( v14 )
  {
    FxUsbPipeTransferContext::FxUsbPipeTransferContext(v14, FxUrbTypeForRequest);
    m_RequestContext = v19;
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
      v21 = -1073741436;
    }
    else
    {
      v21 = USBD_UrbAllocate(
              this->m_USBDHandle,
              (_URB **)&m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length);
      if ( v21 >= 0 )
      {
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
        FxObject::MarkDisposeOverride(Request, ObjectLock);
        goto LABEL_19;
      }
    }
    ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
    return (unsigned int)v21;
  }
LABEL_19:
  FxRequestBase::SetContext(Request, m_RequestContext);
LABEL_29:
  if ( ((Buffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (m_Globals = this->m_Globals,
        _a1 = (this->m_PipeInformation.EndpointAddress & 0x80u) != 0,
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
