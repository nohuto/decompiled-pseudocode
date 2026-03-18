/*
 * XREFs of ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00914C0
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C008A820 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 * Callees:
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008C6BC (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall FxUsbInterface::GetConfiguredPipe(
        FxUsbInterface *this,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  WDFUSBPIPE__ *result; // rax
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // cx

  if ( PipeIndex >= this->m_NumberOfConfiguredPipes )
    return 0LL;
  if ( PipeInfo )
    FxUsbPipe::GetInformation(this->m_ConfiguredPipes[PipeIndex], PipeInfo);
  v6 = (unsigned __int64)this->m_ConfiguredPipes[PipeIndex];
  v7 = *(_WORD *)(v6 + 10);
  result = (WDFUSBPIPE__ *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7 )
    return 0LL;
  return result;
}
