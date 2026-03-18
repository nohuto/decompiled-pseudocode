/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C0086CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008D52C (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall imp_WdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxUsbInterface *pUsbInterface; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  m_Globals = pUsbInterface->m_Globals;
  if ( !PipeInfo || PipeInfo->Size == 20 )
    return FxUsbInterface::GetConfiguredPipe(pUsbInterface, PipeIndex, PipeInfo);
  WPP_IFR_SF_DDd(m_Globals, v6, 0xEu, 0xEu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, PipeInfo->Size, 20, -1073741820);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
