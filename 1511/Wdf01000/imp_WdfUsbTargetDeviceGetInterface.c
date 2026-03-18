/*
 * XREFs of imp_WdfUsbTargetDeviceGetInterface @ 0x1C0078940
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_WdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned __int8 InterfaceIndex)
{
  unsigned __int8 m_NumInterfaces; // dl
  unsigned __int64 v6; // rax
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_NumInterfaces = pUsbDevice->m_NumInterfaces;
  if ( InterfaceIndex >= m_NumInterfaces )
    v6 = 0LL;
  else
    v6 = (unsigned __int64)pUsbDevice->m_Interfaces[InterfaceIndex];
  if ( v6 )
  {
    if ( *(_WORD *)(v6 + 10) )
      return (WDFUSBINTERFACE__ *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_qdd(
      pUsbDevice->m_Globals,
      2u,
      0xEu,
      0x20u,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      UsbDevice,
      m_NumInterfaces,
      InterfaceIndex);
    return 0LL;
  }
}
