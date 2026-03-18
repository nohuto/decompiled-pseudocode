/*
 * XREFs of ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450
 * Callers:
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0089670 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089A00 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A990 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008ACC0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008C380 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008C4D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008C814 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E1B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008E8F0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00916B0 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00921F4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C00140E4 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 */

void __fastcall FxSyncRequest::FxSyncRequest(
        FxSyncRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestContext *Context,
        unsigned __int64 Request)
{
  unsigned __int8 v7; // dl
  FxRequest *v8; // rbx
  __int64 Offset; // rcx
  FxRequestContext *m_RequestContext; // rcx
  FxRequestContext *v11; // rcx
  FxRequest *pRequest; // [rsp+60h] [rbp+8h] BYREF

  FxRequestBase::FxRequestBase(
    this,
    FxDriverGlobals,
    0,
    0LL,
    FxRequestDoesNotOwnIrp,
    FxRequestConstructorCallerIsFx,
    FxObjectTypeEmbedded);
  this->__vftable = (FxSyncRequest_vtbl *)&FxSyncRequest::`vftable';
  FxCREvent::FxCREvent(&this->m_DestroyedEvent, v7);
  this->m_RequestContext = Context;
  this->m_ClearContextOnDestroy = Context != 0LL;
  if ( Request )
  {
    v8 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(Offset) = 0;
    if ( (Request & 1) != 0 )
    {
      Offset = LOWORD(v8->__vftable);
      v8 = (FxRequest *)((char *)v8 - Offset);
    }
    if ( v8->m_Type == 4104 )
    {
      pRequest = v8;
    }
    else
    {
      FxObjectHandleGetPtrQI(v8, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
      v8 = pRequest;
    }
    this->m_TrueRequest = v8;
    m_RequestContext = v8->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v8);
      v8 = pRequest;
    }
    v11 = v8->m_RequestContext;
    if ( v11 != Context )
    {
      if ( v11 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v11->~FxRequestContext)(v11, 1LL);
      v8->m_RequestContext = Context;
      v8 = pRequest;
    }
    v8->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    this->m_RequestBaseFlags |= 0x10u;
    this->m_TrueRequest = this;
  }
  this->m_ObjectSize = 0;
}
