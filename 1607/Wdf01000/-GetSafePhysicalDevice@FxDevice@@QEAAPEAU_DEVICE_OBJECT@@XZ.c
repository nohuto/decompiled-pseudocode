/*
 * XREFs of ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001E914
 * Callers:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001F770 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001FDFC (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021E50 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00222F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C006C290 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfPdoRequestEject @ 0x1C006CA60 (imp_WdfPdoRequestEject.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0073EB0 (imp_WdfDeviceSetDeviceState.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C0078EC8 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C007929C (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     FxGetDevicePropertyString @ 0x1C008075C (FxGetDevicePropertyString.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0097D24 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
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
