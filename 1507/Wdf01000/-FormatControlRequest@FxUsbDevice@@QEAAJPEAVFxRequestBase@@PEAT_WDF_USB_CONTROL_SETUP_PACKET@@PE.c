/*
 * XREFs of ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DAB8
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0086E30 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00168C4 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030D04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C005D38C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_i @ 0x1C007AE78 (WPP_IFR_SF_i.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008B2C8 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C008C7B0 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C008EF2C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092864 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     USBD_UrbAllocate @ 0x1C00A5E8C (USBD_UrbAllocate.c)
 */

__int64 __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  unsigned int BufferLength; // eax
  unsigned __int8 v9; // dl
  __int64 result; // rax
  int _a3; // eax
  const void *v12; // rbx
  unsigned int v13; // edi
  FxRequestContext *m_RequestContext; // rdi
  _FX_URB_TYPE FxUrbTypeForRequest; // r15
  FxUsbDeviceControlContext *v16; // rax
  FxRequestContext *v17; // rax
  USBD_HANDLE__ *m_USBDHandle; // r15
  int v19; // eax
  unsigned int v20; // r12d
  FxRequestContext *v21; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _MDL *pMdl; // [rsp+40h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]

  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  if ( BufferLength > 0xFFFFuLL )
  {
    WPP_IFR_SF_i(this->m_Globals, v9, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, BufferLength);
    return 3221225485LL;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v12 = 0LL;
  v13 = _a3;
  if ( _a3 >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 19 )
    {
      FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
      v16 = (FxUsbDeviceControlContext *)FxPoolAllocator(
                                           this->m_Globals,
                                           (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                           ExDefaultNonPagedPoolType,
                                           0x128uLL,
                                           this->m_Globals->Tag,
                                           retaddr);
      if ( v16 )
      {
        FxUsbDeviceControlContext::FxUsbDeviceControlContext(v16, FxUrbTypeForRequest);
        m_RequestContext = v17;
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
        v19 = USBD_UrbAllocate(m_USBDHandle, (_URB **)&m_RequestContext[2].m_RequestMemory);
        v20 = v19;
        if ( v19 < 0 )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v19);
          ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
          return v20;
        }
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
        FxObject::MarkDisposeOverride(Request, ObjectLock);
      }
      v21 = Request->m_RequestContext;
      if ( v21 != m_RequestContext )
      {
        if ( v21 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v21->~FxRequestContext)(v21, 1LL);
        Request->m_RequestContext = m_RequestContext;
      }
    }
    if ( ((RequestBuffer->DataType - 2) & 0xFFFFFFFD) != 0
      || (m_Globals = this->m_Globals,
          pMdl = 0LL,
          result = FxRequestBuffer::GetOrAllocateMdl(
                     RequestBuffer,
                     m_Globals,
                     &pMdl,
                     (_MDL **)&m_RequestContext[2].m_RequestType,
                     (unsigned __int8 *)&m_RequestContext[3],
                     IoModifyAccess,
                     0,
                     0LL),
          (int)result >= 0) )
    {
      FxUsbDeviceControlContext::StoreAndReferenceMemory(
        (FxUsbDeviceControlContext *)m_RequestContext,
        this,
        RequestBuffer,
        SetupPacket);
      FxFormatUsbRequest(
        Request,
        (_URB *)m_RequestContext[2].m_RequestMemory,
        (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                            + 1),
        this->m_USBDHandle);
      return 0LL;
    }
  }
  else
  {
    if ( this->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxusbDeviceKm_cpp_Traceguids, v12, (__int64)Request, _a3);
    return v13;
  }
  return result;
}
