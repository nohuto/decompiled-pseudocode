/*
 * XREFs of ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4
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
 *     ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1C0090740 (--_GFxSyncRequest@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0008F80 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxSyncRequest::~FxSyncRequest(FxSyncRequest *this)
{
  int v2; // eax
  FxSyncRequest *m_TrueRequest; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v5; // rcx

  this->__vftable = (FxSyncRequest_vtbl *)&FxSyncRequest::`vftable';
  v2 = FxObject::Release(this, 0LL, 129LL, "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp");
  m_TrueRequest = (FxSyncRequest *)this->m_TrueRequest;
  if ( m_TrueRequest != this )
  {
    if ( !this->m_ClearContextOnDestroy )
      goto LABEL_6;
    m_TrueRequest->m_RequestContext = 0LL;
    this->m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
  }
  if ( this->m_ClearContextOnDestroy )
    this->m_RequestContext = 0LL;
LABEL_6:
  if ( v2 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_DestroyedEvent);
    v5 = this->m_Globals;
    if ( v5->FxVerboseOn )
      WPP_IFR_SF_qq(v5, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
  }
  FxRequestBase::~FxRequestBase(this);
}
