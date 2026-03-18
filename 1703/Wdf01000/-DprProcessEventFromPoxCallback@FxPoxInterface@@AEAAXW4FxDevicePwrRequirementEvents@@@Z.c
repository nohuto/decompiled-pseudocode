/*
 * XREFs of ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002E108
 * Callers:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C001345C (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C002E0A4 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0032494 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::DprProcessEventFromPoxCallback(
        FxPoxInterface *this,
        FxDevicePwrRequirementEvents Event)
{
  KIRQL v4; // bl

  v4 = KfRaiseIrql(2u);
  FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, Event);
  KeLowerIrql(v4);
}
