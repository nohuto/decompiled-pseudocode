/*
 * XREFs of ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0004470
 * Callers:
 *     ?CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00352B0 (-CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00359B0 (-CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C007AF60 (-CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbRequestContext::CopyParameters(FxUsbRequestContext *this, FxRequestBase *Request)
{
  this->m_UsbParameters.UsbdStatus = ((__int64 (__fastcall *)(FxUsbRequestContext *, FxRequestBase *))this->GetUsbdStatus)(
                                       this,
                                       Request);
}
