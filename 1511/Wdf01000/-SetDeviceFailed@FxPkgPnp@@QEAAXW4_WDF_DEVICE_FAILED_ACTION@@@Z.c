/*
 * XREFs of ?SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C00895E8
 * Callers:
 *     imp_WdfDeviceSetFailed @ 0x1C00679F0 (imp_WdfDeviceSetFailed.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

void __fastcall FxPkgPnp::SetDeviceFailed(FxPkgPnp *this, _WDF_DEVICE_FAILED_ACTION FailedAction)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax

  this->m_FailedAction = FailedAction;
  this->m_Failed = 1;
  if ( FailedAction != WdfDeviceFailedAttemptRestart || this->AskParentToRemoveAndReenumerate(this) < 0 )
  {
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
    if ( SafePhysicalDevice )
      IoInvalidateDeviceState(SafePhysicalDevice);
  }
}
