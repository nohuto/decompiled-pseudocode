/*
 * XREFs of ?SetDeviceFailed@FxPkgPnp@@QEAAXW4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009E8D4
 * Callers:
 *     imp_WdfDeviceSetFailed @ 0x1C0071F10 (imp_WdfDeviceSetFailed.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetDeviceFailed(FxPkgPnp *this, _WDF_DEVICE_FAILED_ACTION FailedAction)
{
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx

  this->m_FailedAction = FailedAction;
  this->m_Failed = 1;
  if ( FailedAction != WdfDeviceFailedAttemptRestart || this->AskParentToRemoveAndReenumerate(this) < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( LOBYTE(m_DeviceBase[1].m_ChildEntry.Blink) )
    {
      m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
      if ( m_DeviceObject )
        IoInvalidateDeviceState(m_DeviceObject);
    }
  }
}
