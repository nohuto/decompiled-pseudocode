/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1C008BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1C008FB08 (-GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int result; // eax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !ConfigDescriptorLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
    return FxUsbDevice::GetConfigDescriptor(pUsbDevice, ConfigDescriptor, ConfigDescriptorLength);
  return result;
}
