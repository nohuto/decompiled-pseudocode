/*
 * XREFs of ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4
 * Callers:
 *     FxIoTargetSendIo @ 0x1C0073D34 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0074930 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00790B0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0079990 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0079BA0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C007A320 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C007A4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C007B830 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007B8C0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007BBD4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007D2A4 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007D4C8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007DBA0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00803E4 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0080698 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0025074 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C002516C (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0057398 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxSyncRequest::FxSyncRequest(
        FxSyncRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestContext *Context,
        WDFREQUEST__ *Request)
{
  unsigned __int8 v8; // dl
  FxRequest *v9; // rcx
  FxRequestContext *m_RequestContext; // r8
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
  FxCREvent::FxCREvent(&this->m_DestroyedEvent, v8);
  this->m_RequestContext = Context;
  this->m_ClearContextOnDestroy = Context != 0LL;
  if ( Request )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
    v9 = pRequest;
    this->m_TrueRequest = pRequest;
    m_RequestContext = v9->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(v9->m_RequestContext, v9);
      v9 = pRequest;
    }
    FxRequestBase::SetContext(v9, Context);
    pRequest->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    this->m_RequestBaseFlags |= 0x10u;
    this->m_TrueRequest = this;
  }
  this->m_ObjectSize = 0;
}
