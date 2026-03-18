/*
 * XREFs of imp_WdfUsbTargetDeviceGetInterface @ 0x1C0087DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_WdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned __int8 InterfaceIndex)
{
  unsigned __int64 v5; // rax
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  if ( InterfaceIndex >= pUsbDevice->m_NumInterfaces )
  {
    v5 = 0LL;
  }
  else
  {
    _mm_lfence();
    v5 = (unsigned __int64)pUsbDevice->m_Interfaces[InterfaceIndex];
  }
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 10) )
      return (WDFUSBINTERFACE__ *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
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
      pUsbDevice->m_NumInterfaces,
      InterfaceIndex);
    return 0LL;
  }
}
