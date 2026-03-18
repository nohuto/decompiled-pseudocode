/*
 * XREFs of ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C0088F64
 * Callers:
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0089124 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008929C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x1C009DCDC (USBD_UrbAllocate.c)
 */

int __fastcall FxUsbPipeRequestContext::AllocateUrb(FxUsbPipeRequestContext *this, USBD_HANDLE__ *USBDHandle)
{
  int result; // eax

  if ( this->m_Urb )
    return -1073741436;
  result = USBD_UrbAllocate(USBDHandle, (_URB **)&this->m_Urb);
  if ( result >= 0 )
    this->m_USBDHandle = USBDHandle;
  return result;
}
