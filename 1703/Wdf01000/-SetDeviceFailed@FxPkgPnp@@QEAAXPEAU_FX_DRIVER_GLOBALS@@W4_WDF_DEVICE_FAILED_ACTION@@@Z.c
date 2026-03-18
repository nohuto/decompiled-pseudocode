/*
 * XREFs of ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009C14C
 * Callers:
 *     imp_WdfDeviceSetFailed @ 0x1C0077E30 (imp_WdfDeviceSetFailed.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001EE80 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

void __fastcall FxPkgPnp::SetDeviceFailed(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *FailedAction,
        _WDF_DEVICE_FAILED_ACTION CallerFxDriverGlobals)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax

  this->m_FailedAction = CallerFxDriverGlobals;
  this->m_Failed = 1;
  if ( CallerFxDriverGlobals != WdfDeviceFailedAttemptRestart
    || ((int (__fastcall *)(FxPkgPnp *, _FX_DRIVER_GLOBALS *))this->AskParentToRemoveAndReenumerate)(this, FailedAction) < 0 )
  {
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
    if ( SafePhysicalDevice )
      IoInvalidateDeviceState(SafePhysicalDevice);
  }
}
