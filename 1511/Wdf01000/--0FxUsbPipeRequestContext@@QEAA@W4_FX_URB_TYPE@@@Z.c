/*
 * XREFs of ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C007F3A8
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0079BA0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C007A320 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007F8D4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007FA4C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00803E4 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C007A98C (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbPipeRequestContext::FxUsbPipeRequestContext(FxUsbPipeRequestContext *this, _FX_URB_TYPE FxUrbType)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x12u);
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)&FxUsbPipeRequestContext::`vftable';
  if ( FxUrbType )
    this->m_Urb = 0LL;
  else
    this->m_Urb = &this->m_UrbLegacy;
}
