/*
 * XREFs of ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0032C68
 * Callers:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C002477C (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0032494 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1C0095FB0 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A0CA8 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWaitLockInternal::IsLockAcquired(int Status)
{
  return Status >= 0 && Status != 258;
}
