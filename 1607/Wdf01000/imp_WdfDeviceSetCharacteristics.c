/*
 * XREFs of imp_WdfDeviceSetCharacteristics @ 0x1C0073E70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned int DeviceCharacteristics)
{
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  pDevice->m_DeviceObject.m_DeviceObject->Characteristics = DeviceCharacteristics | 0x100;
}
