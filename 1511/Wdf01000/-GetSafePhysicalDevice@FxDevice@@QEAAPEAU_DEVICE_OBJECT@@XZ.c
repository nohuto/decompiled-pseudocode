/*
 * XREFs of ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4
 * Callers:
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001B9DC (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001BE98 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00269E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0026DE4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     imp_WdfPdoRequestEject @ 0x1C005E610 (imp_WdfPdoRequestEject.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C005EB90 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C00678D0 (imp_WdfDeviceSetDeviceState.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C006A718 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C006AAEC (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     FxGetDevicePropertyString @ 0x1C00727CC (FxGetDevicePropertyString.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C00895E8 (-SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall FxDevice::GetSafePhysicalDevice(FxDevice *this)
{
  _DEVICE_OBJECT *result; // rax

  if ( !this->m_PdoKnown )
    return 0LL;
  result = this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject;
  if ( !result )
    return 0LL;
  return result;
}
