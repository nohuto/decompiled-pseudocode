/*
 * XREFs of ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001EE80
 * Callers:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001FE68 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002066C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C002D804 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C006FB60 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfPdoRequestEject @ 0x1C0070380 (imp_WdfPdoRequestEject.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0077D00 (imp_WdfDeviceSetDeviceState.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C007CD54 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     FxGetDevicePropertyString @ 0x1C0084D34 (FxGetDevicePropertyString.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009C14C (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
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
