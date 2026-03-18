/*
 * XREFs of ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C002EBAC
 * Callers:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0025160 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002E3B0 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1C0091E40 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C154 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWaitLockInternal::IsLockAcquired(int Status)
{
  return Status >= 0 && Status != 258;
}
