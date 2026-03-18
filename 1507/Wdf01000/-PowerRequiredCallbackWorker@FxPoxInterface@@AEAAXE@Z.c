/*
 * XREFs of ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C00A3E44
 * Callers:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0006878 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C00A4700 (-PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 * Callees:
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3D74 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3F64 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 1;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxRequiresPower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxRequiresPower);
}
