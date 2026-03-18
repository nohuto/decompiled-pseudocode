/*
 * XREFs of imp_WdfUsbTargetDeviceResetPortSynchronously @ 0x1C0078B40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007DBA0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 */

int __fastcall imp_WdfUsbTargetDeviceResetPortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  int result; // eax
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  result = FxVerifierCheckIrqlLevel(pUsbDevice->m_Globals, 0);
  if ( result >= 0 )
    return FxUsbDevice::Reset(pUsbDevice);
  return result;
}
