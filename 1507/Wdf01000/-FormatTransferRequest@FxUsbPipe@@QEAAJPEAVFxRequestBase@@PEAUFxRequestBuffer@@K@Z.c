/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C0091B24 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00921F4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00168C4 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030D04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C005D38C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C008C7B0 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C008FF84 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C009026C (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092864 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C00A5E8C (USBD_UrbAllocate.c)
 */

__int64 __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  FxRequestBuffer *v8; // r8
  const void *v9; // rbx
  __int64 result; // rax
  unsigned __int64 BufferLength; // r8
  signed __int8 EndpointAddress; // al
  unsigned __int16 v13; // r9
  int _a3; // eax
  unsigned int v15; // esi
  FxRequestContext *m_RequestContext; // rsi
  _FX_URB_TYPE FxUrbTypeForRequest; // r14
  FxUsbPipeTransferContext *v18; // rax
  FxRequestContext *v19; // rax
  USBD_HANDLE__ *m_USBDHandle; // r15
  int v21; // r14d
  FxRequestContext *v22; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *PipeHandle; // rcx
  _LOCK_OPERATION _a1; // [rsp+28h] [rbp-40h]
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]
  _MDL *pMdl; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)FxUsbPipe::_UsbdPipeTypeToWdf(this->m_PipeInformation.PipeType) - 3 > 1 )
  {
    v9 = 0LL;
    if ( this->m_ObjectSize )
      v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, v9, -1073741808);
    return 3221225488LL;
  }
  BufferLength = (unsigned int)FxRequestBuffer::GetBufferLength(v8);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (TransferFlags & 1) != 0 )
  {
    if ( EndpointAddress >= 0 )
    {
      v13 = 14;
LABEL_9:
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v13, WPP_FxUsbPipeKm_cpp_Traceguids, this);
      return 3221225488LL;
    }
    if ( this->m_CheckPacketSize && BufferLength % this->m_PipeInformation.MaximumPacketSize )
      return 3221225990LL;
  }
  else if ( EndpointAddress < 0 )
  {
    v13 = 15;
    goto LABEL_9;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v15 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, (__int64)Request, _a3);
    return v15;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    v18 = (FxUsbPipeTransferContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x120uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
    if ( v18 )
    {
      FxUsbPipeTransferContext::FxUsbPipeTransferContext(v18, FxUrbTypeForRequest);
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
LABEL_27:
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return (unsigned int)v21;
      }
      v21 = USBD_UrbAllocate(
              this->m_USBDHandle,
              (_URB **)&m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length);
      if ( v21 < 0 )
        goto LABEL_27;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    v22 = Request->m_RequestContext;
    if ( v22 != m_RequestContext )
    {
      if ( v22 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v22->~FxRequestContext)(v22, 1LL);
      Request->m_RequestContext = m_RequestContext;
    }
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
