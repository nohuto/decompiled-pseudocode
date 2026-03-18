/*
 * XREFs of ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C007E93C
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C0079320 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 * Callees:
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C0081360 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall FxUsbInterface::GetConfiguredPipe(
        FxUsbInterface *this,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  unsigned __int64 v6; // rax

  if ( PipeIndex >= this->m_NumberOfConfiguredPipes )
    return 0LL;
  if ( PipeInfo )
    FxUsbPipe::GetInformation(this->m_ConfiguredPipes[PipeIndex], PipeInfo);
  v6 = (unsigned __int64)this->m_ConfiguredPipes[PipeIndex];
  if ( *(_WORD *)(v6 + 10) )
    return (WDFUSBPIPE__ *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
