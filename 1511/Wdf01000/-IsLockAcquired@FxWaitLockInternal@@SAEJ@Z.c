/*
 * XREFs of ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0033FD8
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0003F04 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00146C8 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1C0083FC0 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008D674 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWaitLockInternal::IsLockAcquired(int Status)
{
  return Status >= 0 && Status != 258;
}
