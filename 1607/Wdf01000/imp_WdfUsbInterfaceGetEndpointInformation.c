/*
 * XREFs of imp_WdfUsbInterfaceGetEndpointInformation @ 0x1C0086E20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008D5FC (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetEndpointInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *EndpointInfo)
{
  unsigned __int8 v7; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  m_Globals = pUsbInterface->m_Globals;
  if ( !EndpointInfo )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( EndpointInfo->Size == 20 )
  {
    FxUsbInterface::GetEndpointInformation(pUsbInterface, SettingIndex, EndpointIndex, EndpointInfo);
  }
  else
  {
    WPP_IFR_SF_DDd(m_Globals, v7, 0xEu, 0xDu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, EndpointInfo->Size, 20, -1073741820);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
