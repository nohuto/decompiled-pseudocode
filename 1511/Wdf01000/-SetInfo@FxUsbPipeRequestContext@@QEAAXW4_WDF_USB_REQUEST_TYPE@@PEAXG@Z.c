/*
 * XREFs of ?SetInfo@FxUsbPipeRequestContext@@QEAAXW4_WDF_USB_REQUEST_TYPE@@PEAXG@Z @ 0x1C0036F2C
 * Callers:
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007F8D4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007FA4C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxUsbPipeRequestContext::SetInfo(
        FxUsbPipeRequestContext *this,
        _WDF_USB_REQUEST_TYPE Type,
        void *PipeHandle,
        unsigned __int16 Function)
{
  memset(this->m_Urb, 0, sizeof(_URB_PIPE_REQUEST));
  this->m_Urb->Hdr.Length = 40;
  this->m_Urb->Hdr.Function = Function;
  this->m_Urb->PipeHandle = PipeHandle;
  this->m_UsbParameters.Type = Type;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->m_CompletionParams.Type = WdfRequestTypeUsb;
}
