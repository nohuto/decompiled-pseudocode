/*
 * XREFs of ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008B2C8
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DAB8 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C008B3CC (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::FxUsbDeviceControlContext(
        FxUsbDeviceControlContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_CONTROL_TRANSFER *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x13u);
  this->__vftable = (FxUsbDeviceControlContext_vtbl *)&FxUsbDeviceControlContext::`vftable';
  p_m_UrbLegacy = 0LL;
  this->m_PartialMdl = 0LL;
  this->m_UnlockPages = 0;
  this->m_USBDHandle = 0LL;
  if ( FxUrbType == FxUrbTypeLegacy )
    p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_Urb = p_m_UrbLegacy;
}
