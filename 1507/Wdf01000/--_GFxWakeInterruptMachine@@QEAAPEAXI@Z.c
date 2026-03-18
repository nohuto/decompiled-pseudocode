/*
 * XREFs of ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A1B9C
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C009FD64 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00A1C18 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C00A1DC0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00A3BEC (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C00A2FE0 (--1FxThreadedEventQueue@@QEAA@XZ.c)
 */

FxDevicePwrRequirementMachine *__fastcall FxWakeInterruptMachine::`scalar deleting destructor'(
        FxDevicePwrRequirementMachine *this)
{
  FxThreadedEventQueue::~FxThreadedEventQueue(this);
  if ( this )
    FxPoolFree(this);
  return this;
}
