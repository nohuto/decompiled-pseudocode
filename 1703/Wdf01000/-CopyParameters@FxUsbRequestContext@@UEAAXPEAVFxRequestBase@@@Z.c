/*
 * XREFs of ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00057B0
 * Callers:
 *     ?CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C003D6F0 (-CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C003DD70 (-CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008EF10 (-CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbRequestContext::CopyParameters(FxUsbRequestContext *this, FxRequestBase *Request)
{
  this->m_UsbParameters.UsbdStatus = ((__int64 (__fastcall *)(FxUsbRequestContext *, FxRequestBase *))this->GetUsbdStatus)(
                                       this,
                                       Request);
}
