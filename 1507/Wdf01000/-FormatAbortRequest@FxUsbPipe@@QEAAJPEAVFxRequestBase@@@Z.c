/*
 * XREFs of ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00907B4
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089A00 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C0089FA0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030D04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z @ 0x1C00336CC (-SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C008C7B0 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0090218 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C00905A4 (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092864 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 */

__int64 __fastcall FxUsbPipe::FormatAbortRequest(FxUsbPipe *this, FxRequestBase *Request)
{
  int _a3; // eax
  unsigned int v5; // ebx
  FxRequestContext *m_RequestContext; // rbx
  _FX_URB_TYPE FxUrbTypeForRequest; // bp
  FxUsbPipeRequestContext *v9; // rax
  FxRequestContext *v10; // rax
  int Urb; // ebp
  FxRequestContext *v12; // rcx
  _LIST_ENTRY *retaddr; // [rsp+48h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v5 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbPipe_cpp_Traceguids, this, (__int64)Request, _a3);
    return v5;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 18 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    v9 = (FxUsbPipeRequestContext *)FxPoolAllocator(
                                      this->m_Globals,
                                      (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                      ExDefaultNonPagedPoolType,
                                      0xB8uLL,
                                      this->m_Globals->Tag,
                                      retaddr);
    if ( v9 )
    {
      FxUsbPipeRequestContext::FxUsbPipeRequestContext(v9, FxUrbTypeForRequest);
      m_RequestContext = v10;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return 3221225626LL;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      Urb = FxUsbPipeRequestContext::AllocateUrb((FxUsbPipeRequestContext *)m_RequestContext, this->m_USBDHandle);
      if ( Urb < 0 )
      {
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return (unsigned int)Urb;
      }
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    v12 = Request->m_RequestContext;
    if ( v12 != m_RequestContext )
    {
      if ( v12 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v12->~FxRequestContext)(v12, 1LL);
      Request->m_RequestContext = m_RequestContext;
    }
  }
  FxUsbPipeRequestContext::SetInfo(
    (FxUsbPipeRequestContext *)m_RequestContext,
    WdfUsbRequestTypePipeAbort,
    this->m_PipeInformation.PipeHandle,
    2u);
  FxFormatUsbRequest(
    Request,
    (_URB *)m_RequestContext[1].m_RequestMemory,
    (_FX_URB_TYPE)(m_RequestContext[1].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                        + 1),
    this->m_USBDHandle);
  return 0LL;
}
