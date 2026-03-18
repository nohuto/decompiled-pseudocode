/*
 * XREFs of ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002E200 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::_ProcessEventInner(
        FxPkgPnp *PkgPnp,
        _FX_DRIVER_GLOBALS *Info,
        void *WorkerContext)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rbx
  _FX_DRIVER_GLOBALS *v5; // rdx

  m_DevicePowerRequirementMachine = PkgPnp->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
  FxWaitLockInternal::AcquireLock(&m_DevicePowerRequirementMachine->m_StateMachineLock, Info, 0LL);
  FxDevicePwrRequirementMachine::ProcessEventInner(m_DevicePowerRequirementMachine, (FxPostProcessInfo *)Info);
  FxWaitLockInternal::ReleaseLock(&m_DevicePowerRequirementMachine->m_StateMachineLock, v5);
}
