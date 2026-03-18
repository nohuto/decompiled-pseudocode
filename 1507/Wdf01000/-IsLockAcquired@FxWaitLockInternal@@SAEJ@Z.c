/*
 * XREFs of ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0030680
 * Callers:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00191F4 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1C0098E40 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A3304 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3F64 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWaitLockInternal::IsLockAcquired(int Status)
{
  return Status >= 0 && Status != 258;
}
