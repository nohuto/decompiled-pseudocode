/*
 * XREFs of ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008DEDC
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008AA74 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008C47C (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C008C620 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008DF00 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C008D2F0 (--1FxThreadedEventQueue@@QEAA@XZ.c)
 */

FxDevicePwrRequirementMachine *__fastcall FxWakeInterruptMachine::`scalar deleting destructor'(
        FxDevicePwrRequirementMachine *this)
{
  FxThreadedEventQueue::~FxThreadedEventQueue(this);
  if ( this )
    FxPoolFree(this);
  return this;
}
