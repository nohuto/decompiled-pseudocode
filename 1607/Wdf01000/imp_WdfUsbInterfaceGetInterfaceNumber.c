/*
 * XREFs of imp_WdfUsbInterfaceGetInterfaceNumber @ 0x1C0086ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetInterfaceNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  return pUsbInterface->m_InterfaceNumber;
}
