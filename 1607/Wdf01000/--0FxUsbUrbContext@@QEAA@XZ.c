/*
 * XREFs of ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006417C
 * Callers:
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0011970 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C00865B0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0086AB0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C0088C34 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbUrbContext::FxUsbUrbContext(FxUsbUrbContext *this)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x11u);
  this->m_pUrb = 0LL;
  this->__vftable = (FxUsbUrbContext_vtbl *)&FxUsbUrbContext::`vftable';
}
