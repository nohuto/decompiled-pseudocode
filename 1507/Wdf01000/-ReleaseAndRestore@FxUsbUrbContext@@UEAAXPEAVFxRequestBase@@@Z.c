/*
 * XREFs of ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00916A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxUsbUrbContext::ReleaseAndRestore(FxUsbUrbContext *this, FxRequestBase *Request)
{
  this->m_pUrb = 0LL;
  FxRequestContext::ReleaseAndRestore(this, Request);
}
