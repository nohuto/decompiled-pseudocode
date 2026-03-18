/*
 * XREFs of ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008BAE0
 * Callers:
 *     ?CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008B9C0 (-CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008B9E0 (-CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0090690 (-CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbRequestContext::CopyParameters(FxUsbRequestContext *this, FxRequestBase *Request)
{
  this->m_UsbParameters.UsbdStatus = ((__int64 (__fastcall *)(FxUsbRequestContext *, FxRequestBase *))this->GetUsbdStatus)(
                                       this,
                                       Request);
}
